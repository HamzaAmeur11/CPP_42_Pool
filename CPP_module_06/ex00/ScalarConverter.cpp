#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){ ; }

ScalarConverter::ScalarConverter(ScalarConverter const& other){ (void)other; }

ScalarConverter::~ScalarConverter() { ; }

ScalarConverter& ScalarConverter::operator=(ScalarConverter const& other){
    (void)other;
    return *this;
}

void ScalarConverter::convert(std::string const &param){
    const char *str = param.c_str();
    char    *endPtr;
    double  D = strtod(str, &endPtr);
    if (endPtr == str){
        std::cout << "char :impossible\nint : impossible\nfloat :impossible\ndouble : impossible\n";
        return ;
    }

    ScalarConverter::getChar(D);
    ScalarConverter::getInt(D);
    ScalarConverter::getFlt(D);
    ScalarConverter::getDbl(D);
}

void ScalarConverter::getChar(double D){
    std::string prnt;
    if (std::isinf(D) == true || static_cast<int>(D) <= INT_MIN)
        prnt = "impossible";
    else if (static_cast<int>(D) < 32 || static_cast<int>(D) > 126)
        prnt = "Non displayable";
    else
        prnt = static_cast<char> (D);
    std::cout << "char : " << prnt << std::endl;
}

void ScalarConverter::getInt(double D){
    std::string prnt;
    if (std::isinf(D) == true || static_cast<int>(D) <= INT_MIN || static_cast<int>(D) > INT_MAX)
        prnt = "impossible";
    else
        prnt = std::to_string(static_cast<int>(D));
    std::cout << "int : " << prnt << std::endl;
}

double ScalarConverter::checkDbl(double D){
    if (std::isinf(D) == false)
        return D;
    if (D > 0)
        return INFINITY;
    else
        return -INFINITY;
}
float ScalarConverter::checkFlt(double D){
	float f =static_cast<float>(D);
    if (std::isinf(f) == false)
        return f;
    if (f > 0)
        return INFINITY;
    else
        return -INFINITY;
}

void ScalarConverter::getDbl(double D){
    std::cout << "double : " << std::fixed << std::setprecision(1) << ScalarConverter::checkDbl(D) << std::endl;
}
void ScalarConverter::getFlt(double D){
    std::cout << "float : " << std::fixed << std::setprecision(1) << ScalarConverter::checkFlt(D)<< "f" << std::endl;
}
