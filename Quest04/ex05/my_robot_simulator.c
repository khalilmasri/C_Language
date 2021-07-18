char* my_robot_simulator(char* str)
{
    int index = 0, x = 0, y =0;
    char* currentD;
    char* returnString = malloc(100);
    int size = 5;
    currentD = (char*)malloc(size*sizeof(char*));
    currentD = "north";
        while(str[index] != '\0'){
        if(str[index] == 'A'){
            if(currentD == "north") y= y- 1;
            if(currentD == "west") x=x-1;
            if(currentD == "south") y=y+1;
            if(currentD == "east") x=x+1;
        }    
        if(str[index] == 'L'){
            if(currentD == "north"){
                currentD = "west";
            }
            else if(currentD == "west"){
                currentD = "south";
            } 
            else if(currentD == "south"){
                currentD = "east";
            } 
            else if(currentD =="east"){
                currentD = "north";
        }
        } if(str[index] == 'R'){
            if(currentD == "north"){

                currentD = "east";
            }
            else if(currentD == "west"){
                currentD = "north";
            } 
            else if(currentD == "south"){
                currentD = "west";
            } 
            else if(currentD == "east"){
                currentD = "south";
            } 
        }
        index++;
    }
   sprintf(returnString, "{x: %d, y: %d, bearing: '%s'}", x,y,currentD);
   return returnString; 
}