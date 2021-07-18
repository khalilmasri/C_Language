int my_putchar(char c) {
  write(1, &c, 1);
}

void my_putstr(char* x)
{   
    int i = 0;
    while(x[i] != '\0'){
        my_putchar(x[i]);
        i++;
    }
}