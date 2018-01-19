#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
int counter;
int number;
while(scanf("%d", &counter) != EOF){
    vector<int> v;
    for(int i = 0; i < counter; i++){
        cin>>number;
        v.push_back(number);
    }
    vector<int> v2;
    for(int i = 0; i < v.size() - 1; i++){
        int diff;
        if(v[i+1]>=v[i]){
            diff = v[i+1] - v[i];
        }else{
            diff = v[i] - v[i+1];
        }
        v2.push_back(diff);
    }
    sort(v2.begin(),v2.end());
    bool check = true;;
    for(int i = 1; i < counter; i++){
        if(i != v2[i-1]){
            check = false;
            break;
        }
    }
    if(check){
        cout<<"Jolly"<<endl;
    }else{
        cout<<"Not jolly"<<endl;
    }

}
}
