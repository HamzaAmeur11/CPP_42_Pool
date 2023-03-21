#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    if (parseData() < 0)
        exit(-1);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &othr){
    *this = othr;
}

BitcoinExchange::~BitcoinExchange() { ; }

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &othr){
    this->data = othr.data;
    return *this;
}

int BitcoinExchange::parseData(){
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

int BitcoinExchange::addYMD(std::string::iterator&it, std::string::iterator&it2,
                             std::string&line, std::string&Y, char c){
    while ( it != line.end() && *it != c )
        it++;
    if ( it == line.end() )
        return -1;
    while (it2 != it){
        Y.push_back(*it2); 
        it2++;
    }
    it2 = ++it;
    return 0;
}

int BitcoinExchange::checkSyntax(std::string &line){
    static int i = 0;
    std::string y, m, d, v;
    std::string::iterator it = line.begin();
    std::string::iterator it2 = line.begin();
    if ( line == "date,exchange_rate" && i == 0 )
        return i++, 0;
    if (i == 0 || addYMD(it, it2, line, y, '-') < 0 
        || addYMD(it, it2, line, m, '-') < 0 ||
        addYMD(it, it2, line, d, ',') < 0)
        return -1;
    //VALUE
    int j = 0;
    while ( it != line.end() && ((*it >= '0' && *it <= '9') || *it == '.')){
        it++;
        if (*it == '.')
            j++;
    }
    if ((it != line.end() && (*it < '0' || *it > '9')) 
        || (*(it - 1) == '.' && it == line.end()) || j > 1)
        return -3;
    while (it2 != it){
        v.push_back(*it2);
        it2++;
    }
    if (checkNum(y, 2022, 2008) < 0 || checkNum(m, 12, 0) < 0 
        || checkNum(d, 31, 0) < 0 || checkNum(v, INT_MAX, 0) < 0)
        return -4;
    addValue(line);
    return 0;
}

int BitcoinExchange::checkNum(std::string &value, int max, int min){
    std::string::iterator it = value.begin();
    if (value == "")
        return  -20;
    while ( it != value.end() && ((*it >= '0' && *it <= '9') || *it == '.'))
        it++;
    if ( it != value.end() || std::stof(value) > max || std::stof(value) < min)
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
    this->data.insert(std::pair<std::string, std::string>(key, value));
}

std::string BitcoinExchange::increment(std::string &key){
    std::tm date = {};
    std::istringstream ss(key);
    ss >> std::get_time(&date, "%Y-%m-%d");
    // Decrement the date by one day
    date.tm_mday--;
    std::mktime(&date);
    // Format the new date as a string
    char buffer[11];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", &date);
    return std::string(buffer);

}

bool isLeapYear(int year){
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                return true;
            }return false;
        }return true;
    }return false;
}


int BitcoinExchange::checkDM(std::string &y, std::string &m, std::string&d){
    int month = std::stoi(m);
    int day = 0;
    if (isLeapYear(std::stoi(y)) == true)
        day = 29;
    else
        day = 28;
    if ( month == 1 || month == 3 || month == 5 || month == 7 
            || month == 8 || month == 10 || month == 12){
            if (std::stoi(d) > 31)
                return -1;
    }else if (month == 4 || month ==  6 || month == 9 || month ==  11){
        if (std::stoi(d) > 30)
            return -1;
    }else{
        if (std::stoi(d) > day)
            return -1;
    }
    return 0;
}


std::string BitcoinExchange::getValue(std::string key){
    while (data.find(key) == data.end())
        key = increment(key);
    return data.find(key)->second;
}