

#include <stdio.h>
#define rows 6
#define cols 5

#define si 0
#define s1 1
#define s2 2
#define s3 3
#define s4 4
#define s5 5

int n_state[rows][cols] = 
{s2, s1, s1, s1, s1,
 s2, s1, s1, s1, s1,
 s2, s3, s1, s1, s1,
 s2, s1, s4, s1, s1,
 s2, s1, s1, s5, s1,
 s2, s1, s1, s1, s1};

 int output[rows][cols] = 
 {0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 1, 0,
  0, 0, 0, 0, 0};

void FSM(){
    int cstate = si;
    char c;
    int col, outp;

    while (1){
        printf("input: ");
       c = getchar();
        getchar();

        switch (c){
            case 'F': col = 0; break;
            case 'R': col = 1; break;
            case 'O': col = 2; break;
            case 'G': col = 3; break;
            default: col = 4;

        }

        outp = output[cstate][col];
        printf ("FSM output: %d\n", outp);

        cstate = n_state [cstate][col];
    }

   
}

 int main(){

        FSM();
    }

