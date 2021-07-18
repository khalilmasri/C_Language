#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

string_array* my_split(char* str, char* sep)
{
    // if str is NULL return 0
    if(strlen(str) == 0) return 0;
    
    // counts how many string in that array will be for size
    int countSep = 0;
    for(int i = 0; str[i] != '\0'; i++)
        if(str[i] == sep[0]) countSep++;
    
    // Defining an array
    string_array* sepArray = malloc(sizeof(string_array));
    sepArray->size = countSep+1;
    sepArray->array = malloc(sizeof(string_array)*sepArray->size);
    for(int i = 0; i < sepArray->size;i++)
        sepArray->array[i] = malloc(sizeof(string_array)*strlen(str));
    
    // checking sep and assigning it to the array
    int index = 0, pos = 0;
    for(int i = 0 ; str[i] != '\0'; i++){
        if(str[i] == sep[0]){
            sepArray->array[index][pos]= '\0';
            index++;
            pos = 0;
        } else {
            sepArray->array[index][pos]= str[i];
            pos++;
        }
    }
    return sepArray;
}