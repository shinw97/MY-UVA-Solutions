#include <stdio.h>

using namespace std;

bool is_leapyear(unsigned long year){
    if(year % 400 == 0){
        return true;
    }
    if(year % 4 == 0 && year % 100 != 0){
        return true;
    }
    return false;
}

bool is_huluculu(unsigned long year){
    if(year % 15 == 0){
        return true;
    }
    return false;
}

bool is_bulukulu(unsigned long year){
    if(is_leapyear(year)){
        if(year % 55 == 0){
            return true;
        }
    }
    return false;
}

int main(){
    unsigned long year;
    while(scanf("%lu", &year) != EOF){
        bool ordinary = true;
        if(is_leapyear(year)){
            printf("This is leap year.\n");
            ordinary = false;
        }
        if(is_huluculu(year)){
            printf("This is huluculu festival year.\n");
            ordinary = false;
        }
        if(is_bulukulu(year)){
            printf("This is bulukulu festival year.\n");
            ordinary = false;
        }
        if(ordinary){
            printf("This is an ordinary year.\n");
        }
        printf("\n");
    }
    return 0;
}
