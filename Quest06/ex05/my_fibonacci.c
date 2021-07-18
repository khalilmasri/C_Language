int my_fibonacci(int number)
{
    if(number < 0) return -1;
    int first = 0, second = 1, result = 0, index = 0;
    while(index < number){
        first = second; // 1
        second = result; // 1
        result = first + second;
        index++;
    }
    return result;
}
