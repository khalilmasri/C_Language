char* my_strrchr(char* param_1, char param_2)
{
    int lastOcc = 0,i= 0;
     while(param_1[i] != '\0'){
         if(param_2 == param_1[i]) lastOcc = i; 
         i++;
     }
     int size = i-lastOcc+1;
    char* lastStr = (char*)malloc(size*sizeof(char*));
    if (lastOcc != 0){
        i = 0;
    while(i < size){
        lastStr[i] = param_1[lastOcc];
        lastOcc++;
        i++;
    }
    return lastStr;  
    } else return 0; 
}