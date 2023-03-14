#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    if (parseData() < 0)
        exit(-1);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &othr)
{
    *this = othr;
}

BitcoinExchange::~BitcoinExchange() { ; }

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &othr)
{
    this->data = othr.data;
    return *this;
}

int BitcoinExchange::parseData()
{
    std::ifstream csv("data.csv");
    std::string line;
    if (csv.fail())
        return std::cout << "invalid file !!!" << std::endl, -1;
    else if (csv.peek() == std::ifstream::traits_type::eof())
        return std::cout << "EMPTY file !!!" << std::endl, -1;
    while (getline(csv, line))
        if (checkSyntax(line) < 0)
            return std::cout << "Syntax Error !!!" << std::endl, -2;
    return 0;
}

int BitcoinExchange::checkSyntax(std::string &line)
{
    std::string y, m, d, v;
    std::string::iterator it = line.begin();
    std::string::iterator it2 = line.begin();
    if ( line == "date,exchange_rate" )
        return 0;
    // YEARS :
    while ( it != line.end() && *it != '-' )
        it++;
    if ( it == line.end() )
        return -1;
    while (it2 != it){
        y.push_back(*it2); 
        it2++;
    }
    it2 = ++it;
    // MOUNTH
    while ( it != line.end() && *it != '-' )
        it++;
    if ( it == line.end() )
        return -1;
    while (it2 != it){
        m.push_back(*it2);
        it2++;
    }
    it2 = ++it;
    //DAY
    while ( it != line.end() && *it != ',' )
        it++;
    if ( it == line.end() )
        return -1;
    while (it2 != it){
        d.push_back(*it2);
        it2++;
    }
    it2 = ++it;
    //VALUE
    while ( it != line.end() && ((*it >= '0' && *it <= '9') || *it == '.'))
        it++;
    if (it != line.end() || (*(it - 1) == '.' && it == line.end()) )
        return -3;
    while (it2 != it){
        v.push_back(*it2);
        it2++;
    }
    if (checkNum(y, 2022) < 0 || checkNum(m, 12) < 0 || checkNum(d, 31) < 0 || checkNum(v, INT_MAX) < 0)
        return -4;
    addValue(line);
    return 0;
}

int BitcoinExchange::checkNum(std::string &value, int max){
    std::string::iterator it = value.begin();
    if (value == "")
        return  -20;
    while ( it != value.end() && ((*it >= '0' && *it <= '9') || *it == '.'))
        it++;
    if ( it != value.end() || std::stof(value) > max || std::stof(value) < 0)
        return -1;
    return 0;
}

void BitcoinExchange::addValue(std::string& line){
    std::string::iterator it = line.begin();
    std::string::iterator it2 = line.begin();
    std::string key;
    std::string value;
    while (it != line.end() && *it != ',')
        it++;
    while (it2 != it){
        key.push_back(*it2);
        it2++;
    }
    it++;
    while (it != line.end()){
        value.push_back(*it);
        it++;
    }

    // std::cout  << key << "," << value <<std::endl;
    this->data.insert(std::pair<std::string, std::string>(key, value));
}

std::string BitcoinExchange::increment(std::string &key){
    // std::string::iterator it = key.end() - 1;
    // if (*it == '9'){
    //     *(it - 1)++;
    //     *it = '0';
    // }
    // else
    //     *it++;
    //     std::cout << "inc key : " << key << "\n";
    
    // sleep(2);
    // std::string increment_date(const std::string& key) 
    std::tm date = {};
    std::istringstream ss(key);
    ss >> std::get_time(&date, "%Y-%m-%d");

    // Increment the date by one day
    date.tm_mday--;
    std::mktime(&date);

    // Format the new date as a string
    char buffer[11];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", &date);

    return std::string(buffer);

}


std::string BitcoinExchange::getValue(std::string key){
    while (data.find(key) == data.end())
        key = increment(key);
    return data.find(key)->second;
}