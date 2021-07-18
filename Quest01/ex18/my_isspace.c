#include <ctype.h>

int my_isspace(char x)
{
    if(isspace(x) == 0) return 0; else return 1;
}