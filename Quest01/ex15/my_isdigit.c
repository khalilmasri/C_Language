int my_isdigit(char x)
{
    char arr[] = "0123456789"; 
    int i=0, flag = 0;
    while(i < 10){
        if(arr[i] == x) flag++;
        i++;
    } 
    if(flag > 0) return 1; else return 0;
}
