int my_strcmp(char* param_1, char* param_2)
{
    int c1=0,c2=0;
    while(param_1[c1] != '\0') c1++;
    while(param_2[c2] != '\0') c2++;
    c2-=c1;
    return c2;
}