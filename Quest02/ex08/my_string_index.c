int my_string_index(char* param_1, char param_2)
{
    int i, flag = -1;
    for(i = 0; param_1[i] != '\0'; i++){
          if(param_2 == param_1[i]){
            flag = i;
            break;
          }
    }
    return flag;
}