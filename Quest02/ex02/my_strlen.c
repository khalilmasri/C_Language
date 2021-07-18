int my_strlen(char* x)
{
    int count = 0, i = 0;
    while(x[i] != '\0') {
        count++;
        i++;
    }
    return count;
}