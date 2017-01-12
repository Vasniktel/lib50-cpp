#include <string>

namespace cs50
{

/**
 * TODO
 */
void eprintf();

/**
 * TODO
 */
char get_char();

/**
 * TODO
 */
double get_double();

/**
 * TODO
 */
float get_float();

/**
 * TODO
 */
int get_int();

/**
 * TODO
 */
long long get_long_long();

/**
 * TODO
 */
template<typename type>
type get_string();

template<>
char* get_string();

extern std::string (*get_cpp_string)();
extern char* (*get_c_string)();

}
