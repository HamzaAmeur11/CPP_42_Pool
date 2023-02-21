#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

class ScalarConverter{
	private:
		ScalarConverter();
	public:
		ScalarConverter(ScalarConverter const&);
		~ScalarConverter();
		ScalarConverter& operator=(ScalarConverter const&);
		static void convert(std::string const&);
		static void getInt(double);
		static void getChar(double);
		static void getDbl(double);
		static void getFlt(double);
		static double checkDbl(double);
		static float checkFlt(double);
};
