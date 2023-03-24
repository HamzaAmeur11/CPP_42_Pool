#include "BitcoinExchange.hpp"


int checkDate(std::string &date){
    std::string y, m, d;
    std::string::iterator it = date.begin();
    std::string::iterator it2 = date.begin();
    // YEARS :
    while ( it != date.end() && *it != '-' )
        it++;
    if ( it == date.end() )
        return -1;
    while (it2 != it){
        y.push_back(*it2); 
        it2++;
    }
    it2 = ++it;
    // MOUNTH
    while ( it != date.end() && *it != '-' )
        it++;
    if ( it == date.end() )
        return -1;
    while (it2 != it){
        m.push_back(*it2);
        it2++;
    }
    it2 = ++it;
    if (m.length() == 1)
        m = "0"  + m;
    //DAY
    while ( it != date.end())
        it++;
    while (it2 != it){
        d.push_back(*it2);
        it2++;
    }
    if (d.length() == 1)
        d = "0" + d;
    if (BitcoinExchange::checkNum(y, 2022, 2009) < 0 || BitcoinExchange::checkNum(m, 12, 0) < 0 ||
        BitcoinExchange::checkNum(d, 31, 0) < 0 || BitcoinExchange::checkDM(y ,m, d) < 0)
        return -4;
    date = y + "-" + m + "-" + d;
    if (date < "2009-01-02")
        return -1;
    return 0;
}


void FindAndPrint(std::string line, BitcoinExchange bts){
    static int i = 0;
    if (line == "date | value" && i == 0)
       return i++, (void)i;
    if (i == 0){
        std::cerr << "ERROR HEADER 'date | value'\n";
        return ;
    }
    std::string::iterator it = line.begin();
    std::string::iterator it2 = line.begin();
    std::string date;
    std::string value;
    while(it != line.end() && *it != ' ')
        it++;
    while (it2 != it){
        date.push_back(*it2);
        it2++;
    }
    if (checkDate(date) < 0 || *(it + 1) != '|')
        return std::cerr << "Error: bad input => " << date << std::endl, (void)0;
    if (*(it + 1) != ' ')
        ++it;
    ++it;
    if (*(it + 1) != ' ')
        ++it;
    int pt = 0;
    while (it != line.end() && ((*it >= '0' && *it <= '9') || (*it == '.' && pt == 0))){
        value.push_back(*it);
        if (*it == '.')
            pt++;
        it++;
    }
    if (it != line.end() && ((*it <= '0' || *it >= '9')/* && *it != '.' && *it != '-'*/))
        return std::cerr << "Error: Bad Value." << std::endl, (void)0;
    else if (std::stof(value) < 0)
        return std::cerr << "Error: not a positive number." << std::endl, (void)0;
    else if (std::stof(value) > 1000)
        return std::cerr << "Error: too large a number." << std::endl, (void)0;

    std::cout << date << " => "  << std::fixed << std::setprecision(0) << std::stof(value) * std::stof(bts.getValue(date)) << "\n";
}


int main(int ac, char **av){
    if (ac != 2)
        return std::cout << "Error Args\n", 1;
    BitcoinExchange bts;
    std::string argument(av[1]);
    size_t check = argument.find(".csv");
    if (check == std::string::npos){
        return std::cout << "****.csv " << std::endl, 1;
    }
    std::ifstream in(argument);
    std::string line;
    if (in.fail())
        return std::cout << "invalid file !!!" << std::endl, -1;
    else if (in.peek() == std::ifstream::traits_type::eof())
        return std::cout << "EMPTY file !!!" << std::endl, -1;
    while (getline(in, line))
        FindAndPrint(line, bts);
    return 0;
}