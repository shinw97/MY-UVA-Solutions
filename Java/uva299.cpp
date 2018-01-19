#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int carry;
        scanf("%d", &carry);
        vector<int> v;
        for(int j = 0; j < carry; j++){
            int index;
            scanf("%d", &index);
            v.push_back(index);
        }
        int counter = 0;
        for(int j = 0; j < v.size(); j++){
            for(int k = 0; k < v.size() - 1; k++){
                if(v[k] > v[k + 1]){
                    int temp = v[k];
                    v[k] = v[k + 1];
                    v[k + 1] = temp;
                    counter++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", counter);
    }
}
