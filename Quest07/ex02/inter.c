char* final_string(char* str){
       int flagChar = 0, index = 0;
        char *returnedString = malloc(100 * sizeof(char));

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
    return returnedString;
    
}

char *check_doubles(char* str1, char* str2, char* returnedString){
    int  index = 0, current = 0;
    char flagC = '\0';
    while(str1[index] != '\0'){
        for(int i = 0 ; str2[i] != '\0'; i++){
            if(str1[index] == str2[i]){
                flagC = str1[index];
            }   
        }
        if(flagC != '\0'){
            returnedString[current] = flagC;
            current++;
        } 
        flagC = '\0';
        index++;
    }
    return returnedString;
}

char* inter(char* str1, char* str2)
{
    char *returnedString = malloc(100 * sizeof(char));
    returnedString = check_doubles(str1,str2,returnedString);
    returnedString = final_string(returnedString);
    return returnedString;
}