#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* param_1, char* param_2)
{
    char* newChar;
    int size = param_1->size;
    int j=0;
    int index = 0;
    newChar = (char*)malloc(size*sizeof(char*));
    for(int i =0 ; i < param_1->size;i++){
        for(int j = 0; param_1->array[i][j]!= '\0';j++){
            newChar[index] = param_1->array[i][j];
            index++;
        }
        for(int z = 0; param_2[z] != '\0' &&  i < param_1->size-1; z++){
            newChar[index] = param_2[z];   
            index++;
        }
    }
    if(param_1->size == 0) return 0; else return newChar;
}