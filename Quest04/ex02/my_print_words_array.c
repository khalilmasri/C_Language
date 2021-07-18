#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

void my_putchar(char c) {
  write(1, &c, 1);
}


void my_print_words_array(string_array* param_1)
{
    for(int i = 0; i < param_1->size;i++){
        for(int j =0 ; param_1->array[i][j] != '\0'; j++){
             my_putchar(param_1->array[i][j]);
        }
       my_putchar('\n');
    }
}