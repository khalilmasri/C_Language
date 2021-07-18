char* my_strchr(char* param_1, char param_2)
{
    int firstOcc;
    for(int i = 0; param_1[i] != '\0'; i++){
        if(param_1[i] == param_2){
            firstOcc = i;
            break;
        } 
    }
    int size = strlen(param_1) - firstOcc;
    char* newStr = (char*)malloc(size*sizeof(char*));
    for(int i = 0; i < size ; i++){
        newStr[i] = param_1[firstOcc];
        firstOcc++;
    }
    if(newStr[0] != '\0') return newStr; else return 0;
}