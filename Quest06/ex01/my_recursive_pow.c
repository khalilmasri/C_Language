int my_recursive_pow(int number, int multiplier)
{
    if(multiplier == 0) return 0;
    if(multiplier > 1)
        return number*(my_recursive_pow(number, multiplier-1));
}