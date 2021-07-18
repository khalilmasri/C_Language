int hidenp(char* needle, char* haystack)
{
    if(needle[0] == '\0') return 1;
    int countMatch = 0, i = 0;
    for(int j = 0; haystack[j] != '\0'; j++){
        if(needle[i] == haystack[j]){
            countMatch++;
            i++;
        }
        if(countMatch == strlen(needle))
            return 1;
    }
    return 0;
}
