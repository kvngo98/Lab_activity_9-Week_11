#include <stdio.h>
#include <string.h> 


    int n_state[4][3] = {
        {1, 0, 0},//s0
        {1, 2, 0},//s1
        {3, 0, 0},//s2
        {1, 2, 0} //s3
    };

    int out[4][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 1, 0}
    };

int main(){

    char input;
    int state = 0;
    int output = 0;
    int col = 0;
   

while(1){
    printf("Input: ");
    scanf("%c",&input); getchar();

if (input == 'f')
   col = 0;
   else if (input == 'r')
   col = 1;
   else col = 2;


output = out[state][col];

printf(" output :%d \n", output);

state = n_state[state][col];

}
}


    






