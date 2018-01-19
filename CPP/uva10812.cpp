#include <stdio.h>

using namespace std;

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i <testcase ; i++){
        unsigned long s, d, x, y;
        scanf("%lu %lu", &s, &d);
        if(s < d || (s - d) % 2 != 0){
            printf("impossible\n");
            continue;
        }
        y = (s - d) / 2;
        x = s - ((s - d) / 2);
        if((x + y) == s){
            printf("%lu %lu\n", x, y);
        }else{
            printf("impossible\n");
        }
    }
    return 0;
}
