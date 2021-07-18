char* reverse_string(char* param_1)
{
    int size = strlen(param_1), begin =0;
    char *reversed = (char*)malloc(size*sizeof(char*)); 
    for(int end = size-1 ; end >= 0; end--){
        reversed[end] = param_1[begin];
        begin++;
    }
    return reversed;
}