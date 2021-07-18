char* my_strstr(char* param_1, char* param_2)
{
    int flag = 0, countEnt = 0, found = 0, j=0, saveLast;
    if(strlen(param_2) <= strlen(param_1)){

    for(int i =0; param_1[i] != '\0'; i++){
        saveLast = i;
        for(j = 0; param_2[j] != '\0'; j++){
            if(param_1[i] == param_2[j]){
                if(countEnt == 0) flag = i;
                countEnt++; // checks enternces to the if 
                i++;
            } 
            
        } i = saveLast;
        if(countEnt == j){
            found = 1;
            break;
        }
        countEnt = 0; //resets the counter
    }
    }
    int size = strlen(param_1) - flag;
    char* needle = (char*)malloc(size*sizeof(char*));
    if(found == 1){
        int index = 0, location = flag;
        while(index < size){
            needle[index] = param_1[location];
            location++;
            index++;
        }return needle;
    } else return 0;
    
}
