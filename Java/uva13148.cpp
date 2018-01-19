#include <stdio.h>

using namespace std;

unsigned long arr[] = {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441, 1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224, 47045881, 64000000, 85766121};
int s = sizeof(arr)/sizeof(unsigned long);

int main(){
    unsigned long x;

    while(scanf("%lu", &x) && x){
        bool found = false;
        for(int i = 0; i < s; i++){
            if(x == arr[i]){
                found = true;
                break;
            }
        }
        if(found){
            printf("Special\n");
        }else{
            printf("Ordinary\n");
        }
    }
    return 0;
}
