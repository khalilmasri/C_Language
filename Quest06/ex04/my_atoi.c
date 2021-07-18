int my_atoi(char* numChar)
{
    int convertedNumber = 0;
    int negative = 1;
    for(int i = 0; numChar[i] != '\0'; i++){
        if(numChar[i] == '-'){
            negative = -1;
            i++;
        } 
        convertedNumber =convertedNumber * 10 + numChar[i] - '0'; 
    }
    return negative * convertedNumber;
}