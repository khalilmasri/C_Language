char* my_strip(char* str)
{
    char* returnedStr = malloc(sizeof(char)*strlen(str));
    char space = ' ';
    int index = 0, pos = 0;

    while(str[index]){
        if(str[index] != space){
            returnedStr[pos] = str[index];
            pos++;
            if(str[index+1] == space){
                returnedStr[pos] = space;
                pos++;
            }
        } 
        if(str[index+1] == '\0' && str[index] == space) 
            returnedStr[pos-1] = '\0';
        index++;
    }
    return returnedStr;
}