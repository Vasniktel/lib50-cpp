#include <iostream>
#include <string>

#include "cs50.h"

namespace cs50
{

/**
 * TODO
 */
void eprintf()
{
    // TODO
}

/**
 * TODO
 */
char get_char()
{
    // TODO
    return '\0';
}

/**
 * TODO
 */
double get_double()
{
    // TODO
    return 0.0;
}

/**
 * TODO
 */
float get_float()
{
    // TODO
    return 0.0;
}

/**
 * TODO
 */
int get_int()
{
    // TODO
    return 0;
}

/**
 * TODO
 */
long long get_long_long()
{
    // TODO
    return 0;
}

/**
 * TODO
 */
template<typename type>
type get_string()
{
    // TODO: check for failure
    std::string s;
    std::getline(std::cin, s);
    
    
    return s;
}

template<>
char* get_string()
{
    // TODO: check for failure
    std::string s;
    std::getline(std::cin, s);
    
    
    return (char*)s.c_str();
}

std::string (*get_cpp_string)() = get_string;
char* (*get_c_string)() = get_string;

}
