#include <stdio.h>
#include <algorithm>

using namespace std;

unsigned long GCD(unsigned long i, unsigned long j){
    if(j > i){
        swap(i, j);
    }
    if(i % j == 0){
        return j;
    }else{
        unsigned long remainder = i % j;
        return GCD(j, remainder);
    }
}

int main(){
    unsigned long N;
    while(scanf("%lu", &N)){
        if(N == 0){
            break;
        }
        unsigned long G=0;
        for(unsigned long i = 1; i < N; i++){
            for(unsigned long j = i + 1; j <= N; j++){
                G += GCD(i, j);
            }
        }
        printf("%lu\n", G);
    }
    return 0;
}
