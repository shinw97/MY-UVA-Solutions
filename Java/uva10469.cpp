#include <stdio.h>

using namespace std;

int main(){
    unsigned long long a, b;
    while(scanf("%llu %llu", &a, &b) != EOF){
        unsigned long long n = a ^ b;
        printf("%llu\n", n);
    }
    return 0;
}
