#include <stdio.h>
//unsolved
using namespace std;

unsigned long long compute(int num){
    unsigned long long ans = 0;
    unsigned long long store1 = 0;
    unsigned long long store2 = 1;
    for(int i = 0; i < num - 1; i++){
        ans = store1 + store2;
        store1 = store2;
        store2 = ans;
    }
    return ans;
}

int main(){
    int num;
    while(scanf("%d", &num) != EOF){
        unsigned long long ans;
        if(num == 0){
            ans = 0;
        }else if(num == 1){
            ans = 1;
        }else{
            ans = compute(num);
        }
        printf("The Fibonacci number for %d is %llu\n", num, ans);
    }
    return 0;
}
