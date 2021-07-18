char* my_strdup(char* param_1)
{  
    int size = strlen(param_1);
    char* newStr = (char*)malloc(size*sizeof(char*));
    for(int i = 0; param_1[i]!= '\0'; i++) newStr[i] = param_1[i];
    return newStr;
}