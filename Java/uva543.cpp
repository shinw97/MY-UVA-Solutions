#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    bool notPrime_table[1000005] = {1, 1, 0};
    for(int i = 2; i <= 1000000; i++){
        if(!notPrime_table[i]){
            for(int j = i + i; j <= 1000000; j += i){
                notPrime_table[j] = 1;
            }
        }
    }
    int n;
    while(scanf("%d", &n) != EOF){
        if(n == 0){
            break;
        }
        bool check = false;
        for(int i = 2; i <= n; i++){
            if(!notPrime_table[i] && !notPrime_table[n - i]){
                printf("%d = %d + %d\n", n, i, n - i);
                check = true;
                break;
            }
        }
        if(!check){
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}
