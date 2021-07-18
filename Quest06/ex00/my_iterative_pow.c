int my_iterative_pow(int number, int multiplier)
{
    if(multiplier == 0) return 0;
    int result = number;
    for(int i = 1; i < multiplier;i++){
        result *= number;
   }
   return result;
}