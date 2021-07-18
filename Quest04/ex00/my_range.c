int* my_range(int param_1, int param_2)
{
    int size = param_2 - param_1;
    int* newArr = (int*)malloc(size*sizeof(int*));
    for(int i =0 ; i < size; i++){
        if(param_2 > param_1){
            newArr[i] = param_1;
            param_1++;
        }
    }
    return newArr;
}