#include "BitcoinExchange.hpp"


int checkDate(std::string date){
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
    //DAY
    while ( it != date.end() )
        it++;
    // if ( it == date.end() )
    //     return -1`
    while (it2 != it){
        d.push_back(*it2);
        it2++;
    }
    if (BitcoinExchange::checkNum(y, 2022) < 0 || BitcoinExchange::checkNum(m, 12) < 0 || BitcoinExchange::checkNum(d, 31) < 0)
        return -4;
    return 0;
}

// void printValue(std::string date, std::string value, BitcoinExchange bts){

// }
void FindAndPrint(std::string line, BitcoinExchange bts){
    if (line == "date | value")
        return ;
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
    while (it != line.end()){
        value.push_back(*it);
        it++;
    }
    if (std::stof(value) < 0)
        return std::cerr << "Error: not a positive number." << std::endl, (void)0;
    else if (std::stof(value) > 1000)
        return std::cerr << "Error: too large a number." << std::endl, (void)0;
    // printValue(date, value, bts);
    std::cout << date << " => " << std::stof(value) * std::stof(bts.getValue(date)) << "\n";
}


int main(int ac, char **av){
    if (ac != 2)
        return std::cout << "Error Args\n", 1;
    BitcoinExchange bts;
    std::ifstream in(av[1]);
    std::string line;
    if (in.fail())
        return std::cout << "invalid file !!!" << std::endl, -1;
    else if (in.peek() == std::ifstream::traits_type::eof())
        return std::cout << "EMPTY file !!!" << std::endl, -1;
    while (getline(in, line)){
        FindAndPrint(line, bts);
    }
}