#include <iostream>
#include <string>
#include <typeinfo>

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
char get_char(void)
{
    // TODO
    return '\0';
}

/**
 * TODO
 */
double get_double(void)
{
    // TODO
    return 0.0;
}

/**
 * TODO
 */
float get_float(void)
{
    // TODO
    return 0.0;
}

/**
 * TODO
 */
int get_int(void)
{
    // TODO
    return 0;
}

/**
 * TODO
 */
long long get_long_long(void)
{
    // TODO
    return 0;
}

/**
 * TODO
 */
template <typename type>
type get_string(void)
{
    // TODO: check for failure
    // TODO: decide whether to return string or c_str
    std::string s;
    std::getline(std::cin, s);
    
    if (typeid(s) == typeid(type))
    	return s;
    
    return s.c_str();
}

const char* (*get_c_string)(void) = get_string<const char*>;
std::string (*get_cpp_string)(void) = get_string<std::string>;

}
