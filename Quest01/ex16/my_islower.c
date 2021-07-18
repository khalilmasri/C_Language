#include <stdio.h>
#include <ctype.h>

int my_islower(char x)
{
    if(islower(x) > 0) return 1; else return 0;
}
