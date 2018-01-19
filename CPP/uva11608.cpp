#include <stdio.h>

using namespace std;

int main(){
    int sum, testcase = 1;
    while(scanf("%d", &sum) != EOF){
        if(sum < 0){
            break;
        }
        printf("Case %d:\n", testcase);
        int question_created[12];
        int question_needed[12];
        for(int i = 0; i < 12; i++){
            int qc;
            scanf("%d", &qc);
            question_created[i] = qc;
        }
        for(int i = 0; i < 12; i++){
            int qn;
            scanf("%d", &qn);
            if(sum >= qn){
                printf("No problem! :D\n");
                sum -= qn;
            }else{
                printf("No problem. :(\n");
            }
            sum += question_created[i];
        }
        testcase++;
    }
}
