#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <ctime>
#include <unistd.h>
#include <iomanip>
#include <math.h>

class BitcoinExchange
{
private:
    std::map<std::string, std::string> data;

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &);
    ~BitcoinExchange();
    BitcoinExchange &operator=(const BitcoinExchange &);
    std::string getValue(std::string);
    int parseData();
    int checkSyntax(std::string &);
    static int checkNum(std::string &, int, int);
    static int checkDM(std::string &,std::string&, std::string&);
    void addValue(std::string &);
    std::string increment(std::string &);
    int addYMD(std::string::iterator&, std::string::iterator&i, std::string&, std::string&, char);
};