#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int GenerateRandomNumber(int n)
{
    srand(time(NULL));
    return rand()%n+1;
};

int main()
{
    
    // Taking the name
    char name[10];
    char inp;
    printf("Enter your nickname \n");
    scanf("%s",&name);
    getchar();
    printf("Hi %s \n", name);

    // Starting the game
    printf(" %s let's Start the Game, Good Luck !\n\n", name);
    printf("%s Enter 'r' if you want to enter Rock, Enter 'p' if you want to enter Paper, Enter 's' if you want to enter Scissor. \n", name);
    scanf("%c",&inp);
    // getch();
    printf("You entered %c as your input \n",inp);

    
    switch (inp)
    {
    case 'r':
        printf("The Random Between 1 to 3 is : %d\n", GenerateRandomNumber(3));

        // switch (GenerateRandomNumber)
        // {
        // case /* constant-expression */:
        //     /* code */
        //     break;
        
        // default:
        //     break;
        // }

        if (GenerateRandomNumber==1)
        {
            printf("Computer Choosed \"Rock\" \n");
        }

        else if (GenerateRandomNumber==2)
        {
            printf("Computer choosed \"Paper\" \n");
        }

        else
        {
            printf("Computer choosed \"Scissor\"\n");
        }

        // if (r==)
        // {
        //     /* code */
        // }
        
        break;



    case 'p':

    break;




    case 's':

    break;


    default:
    printf("Enter Proper input \n");
        break;
    }


    


    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>



// int generateRandomNumber(int n)
// {
//     srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
//     return rand() % n;
// }
// //Create Rock, Paper & Scissors Game
// // Player 1: rock
// // Player 2 (computer): scissors -->player 1 gets 1 point

// // rock vs scissors - rock wins
// // paper vs scissors - scissors wins
// // paper vs rock - paper wins





// // Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// // Notes: You have to display name of the player during the game. Take users name as an input from the user.





// int main()
// {
//     printf("The random number between 0 to 5 is %d\n", generateRandomNumber(5));
//     return 0;
// }
