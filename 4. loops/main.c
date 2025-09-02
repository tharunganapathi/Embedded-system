// #include <stdio.h>


// int main(int argc, char *argv[]) {

//     // float num = 10.1;

//     char a = argc;
//     char *b = *argv;

//     printf("the 1st arg is %d", argc);
//     printf("the second arg is %c", *b);


//     return 0;
// }



// #include <stdio.h>
// int main() {

//     int count=1;
//     for (count; count<=3; count++)
//         {
//         printf("dirrrrrrrrrr\n");
//         count+=1;
//         }
//         // printf("Inside loop\n");

//     return 0;
// }

#include<stdio.h>

int main() {
    int num;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num != -1);

    printf("You entered -1, exiting the loop.\n");
    return 0;
}
