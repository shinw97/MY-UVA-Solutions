#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int numbers;
    int counter = 1;
    while(scanf("%d", &numbers) != 0){
        if(numbers == 0){
            break;
        }
        vector<int> v;
        int n;
        for(int i = 0; i < numbers; i++){
            scanf("%d", &n);
            v.push_back(n);
        }

        vector<int> sums;
        int index = 0, temp;
        while(index != v.size()){
            temp = v[index];
            for(int i = index + 1; i < v.size(); i++){
                sums.push_back(temp + v[i]);
            }
            index++;
        }

        int nof_query, query;
        printf("Case %d:\n", counter);
        scanf("%d", &nof_query);
        for(int i = 0; i < nof_query; i++){
            scanf("%d", &query);
            int diff, temp_diff, temp_sum;
            if(query > sums[0]){
                diff = query - sums[0];
            }else{
                diff = sums[0] - query;
            }
            temp_diff = diff;
            temp_sum = sums[0];
            for(int j = 1; j < sums.size(); j++){
                if(query > sums[j]){
                diff = query - sums[j];
                }else{
                    diff = sums[j] - query;
                }
                if(diff < temp_diff){
                    temp_diff = diff;
                    temp_sum = sums[j];
                }
            }
            printf("Closest sum to %d is %d.\n", query, temp_sum);
        }
        counter++;
    }
    return 0;
}
