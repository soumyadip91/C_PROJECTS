
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
// int accuracyofGame(int a){
//     return (a/10)*100;
// }

void main()
{
    int random,guess;
    int number_of_guess=0;
    int accuracyofPlayer=0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers\n");
    random=rand() % 100 +1;  // generating b/w 1 to 100

    do
    {
        printf("Enter your Guess (1 to 100) :");
        scanf("%d",&guess);
        number_of_guess++;
        if (guess<random)
        {
            printf("Guess larger number\n");
        }else if (guess>random)
        {
            printf("guess a smaller number\n");
        }else if (guess==random)
        {
            printf("You gessed right one\n");
            break;
        }else{
            printf("invalid inputs\n");
        }
        // if(number_of_guess==10){
        //     break;
        // }
        
        
    } while (guess!=random);

    printf("you have taken %d attempts",number_of_guess);
    // accuracyofPlayer=accuracyofGame(number_of_guess);
    // printf("The accuracy : %d \n",accuracyofPlayer);
    printf("Thank you for playing \n");
    printf("Developed by SG");
    
}