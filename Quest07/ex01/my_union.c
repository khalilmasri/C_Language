char *check_second_str(char* str, char* returnedString){
    int flagChar = 0, index;
    while(returnedString[index] != '\0')index++;
    for(int i = 0 ; str[i] != '\0'; i++){
        for(int j = 0 ; returnedString[j] != '\0'; j++){
            if(str[i] == returnedString[j]) flagChar++;
        }
        if(flagChar == 0){
            returnedString[index] = str[i];
            index++;
        }
        flagChar = 0;
    }
    return returnedString;
}

char *check_first_str(char* str, char* returnedString){
    int flagChar = 0, index = 0;
    for(int i = 0 ; str[i] != '\0'; i++){
        for(int j = 0 ; returnedString[j] != '\0'; j++){
            if(str[i] == returnedString[j]) flagChar++;
        }
        if(flagChar == 0){
            returnedString[index] = str[i];
            index++;
        }
        flagChar = 0;
    }
    return returnedString;
}

char* my_union(char* str1, char* str2)
{
    char *returnedString = malloc(100 * sizeof(char));
    returnedString = check_first_str(str1, returnedString);
    returnedString = check_second_str(str2, returnedString);
    return returnedString;
}