#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int num_Swap(vector<int> v){
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
    return counter;
}

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        vector<int> v;
        for(int i = 0; i < n; i++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        int ex = num_Swap(v);
        printf("Minimum exchange operations : %d\n", ex);
    }
}
