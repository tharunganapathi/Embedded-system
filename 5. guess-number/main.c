#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    // time_t t;
    // srand((unsigned) time(&t));

    // int count=0;
    
    // for (count; count<15; count++) 
    // {
    //     int rand_num = rand() % 11;
    //     printf("Random number generated: %d\n", rand_num);
    // }

    time_t t;
    srand((unsigned) time(&t));

    int total_tries=5;
    int count=1;
    while (1) {
        printf("Please Enter your guess (0-10): ");
        int user_num;
        scanf("%d", &user_num);

        int rand_num=rand() % 10+1;
        printf("But my guess is %d\n", rand_num);

        if (total_tries==0) {
            printf("You lost\n");
            return 0;
        }

        if (rand_num==user_num) {
            printf("You won\n");
            return 0;
        }

        else if(rand_num>user_num) {
                printf("Sorry, %d is wrong. My number is greater than that\n", user_num);
            }

        else {
            printf("Sorry, %d is wrong. My number is less than that\n", user_num);
        }

        total_tries = total_tries - count;
        printf("You have %d tries left\n", total_tries);
    
}

    return 0;
}