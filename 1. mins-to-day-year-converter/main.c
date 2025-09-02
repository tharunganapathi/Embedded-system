#include<stdio.h>

int main() {

    printf("Hello World\n");


    // Convert the user given minutes to years and days

    int minutes;
    double hours;
    double days;
    double years;


    printf("Please enter the minutes: ");
    scanf("%d", &minutes);

    hours = minutes/60.0;
    days = hours/24;
    years = days/365;

    printf("The hour is %10.2f\n", hours);
    printf("The day is %10f\n", days);
    printf("The year is %10f", years);

    return 0;
}