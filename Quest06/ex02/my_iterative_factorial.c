int my_iterative_factorial(int num)
{
    int result =1;
    if(num < 0) return 0;
    for(; num > 0; num--){
        result *= num;
    }
    return result;
}