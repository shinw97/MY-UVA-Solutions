#include <stdio.h>
#include <limits.h>

using namespace std;

int main(){
    int ppl, budjet, hotel, weeks;
    while(scanf("%d %d %d %d", &ppl, &budjet, &hotel, &weeks) != EOF){
        bool yes = false;
        int minimum = INT_MAX;
        for(int i = 0; i < hotel; i++){
            int pricepp, total;
            scanf("%d", &pricepp);
            bool enoughbed = false;
            for(int j = 0; j < weeks; j++){
                int bed;
                scanf("%d", &bed);
                if(ppl <= bed){
                    enoughbed = true;
                }
            }
            if(enoughbed){
                total = ppl * pricepp;
                if(total <= budjet){
                    yes = true;
                    if(total <= minimum){
                        minimum = total;
                    }
                }
            }
        }
        if(yes){
            printf("%d\n", minimum);
        }else{
            printf("stay home\n");
        }
    }
    return 0;
}
