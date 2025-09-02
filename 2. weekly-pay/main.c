

#include<stdio.h>

int main() {
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

    enum Weekday day01=Tuesday;
    
    switch(day01) {
        case Monday:
            printf("day01 is Monday");
        case Tuesday:
            printf("day02 is Tuesday");
    }
}
