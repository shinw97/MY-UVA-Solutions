#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
int testcase;
scanf("%d", &testcase);
for(int i = 0; i < testcase; i++){
    int farmers;
    scanf("%d", &farmers);
    int sum = 0;
    for(int j = 0; j < farmers; j++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        sum = sum + (a * c);
    }
    printf("%d\n", sum);
}
return 0;
}
