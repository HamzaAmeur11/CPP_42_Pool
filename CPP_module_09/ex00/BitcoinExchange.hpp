#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <ctime>
#include <unistd.h>

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
    static int checkNum(std::string &, int);
    void addValue(std::string &);
    std::string increment(std::string &);
};