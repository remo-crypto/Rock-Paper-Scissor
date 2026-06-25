#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned int) time(NULL));

    char usr_in, com;
    int i = 0;

    // Player 
    printf("Choose one: \n");
    printf("r for Rock, p for Paper, s for Scissor => ");
    scanf("%c", &usr_in);

    // Computer
    i = rand() % 100;
    if(i > 66) com = 'r';
    else if(i > 33) com = 'p';
    else com = 's';
    
    // Result check
    if((usr_in == 'r' && com == 'r') || (usr_in == 'p' && com == 'p') || (usr_in == 's' && com == 's')){
        printf("game draw!\n");
        if(usr_in == 'r'){
            printf("Player: Rock | Computer: Rock\n");
        } else if(usr_in == 'p'){
            printf("Player: Paper | Computer: Paper\n");
        } else{
            printf("Player: Scissor | Computer: Scissor\n");
        }
    } else if((usr_in == 'r' && com == 's') || (usr_in == 'p' && com == 'r') || (usr_in == 's' && com == 'p')){
        printf("You won!\n");
        if(usr_in == 'r'){
            printf("Player: Rock | Computer: Scissor\n");
        } else if(usr_in == 'p'){
            printf("Player: Paper | Computer: Rock\n");
        } else{
            printf("Player: Scissor | Computer: Paper\n");
        }
    } else{
        printf("Computer won!\n");
        if(usr_in == 'r'){
            printf("Player: Rock | Computer: Paper\n");
        } else if(usr_in == 'p'){
            printf("Player: Paper | Computer: Scissor\n");
        } else{
            printf("Player: Scissor | Computer: Rock\n");
        }
    }
    return 0;
}