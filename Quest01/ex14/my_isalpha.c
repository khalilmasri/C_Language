int my_isalpha(char x)
{
   char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
   int i = 0, flag = 0;
   while(alpha[i]!= '\0'){
       if(alpha[i]==x) flag++;
       i++;
   }
   if(flag > 0) return 1;else return 0;
}
