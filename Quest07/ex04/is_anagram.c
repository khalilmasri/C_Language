int is_anagram(char* param_1, char* param_2)
{
    int count1 = 0, count2 = 0;
    char now = ' ';
    while(now){
        for(int i = 0 ; param_1[i] != '\0'; i++){
            if(now == param_1[i]) count1++;
        }
        for(int i = 0; param_2[i] != '\0'; i++){
            if(now == param_2[i]) count2++;
        }
        if(count1 != count2) return 0;
        count1 = 0;
        count2 = 0;
        now++;
    }
    return 1;
}