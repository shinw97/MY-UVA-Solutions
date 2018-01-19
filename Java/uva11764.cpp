#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for(int i = 0; i < testcase; i++){
        int walls;
        cin>>walls;
        vector<int> v;
        for(int j = 0; j < walls; j++){
            int height;
            cin>>height;
            v.push_back(height);
        }
        int current = v[0];
        int high = 0;
        int low = 0;
        for(int k = 1; k < v.size(); k++){
            if(current > v[k]){
                low++;
                current = v[k];
            }else if(current < v[k]){
                high++;
                current = v[k];
            }
        }
        printf("Case %d: %d %d\n", (i + 1), high, low);
    }
    return 0;
}
