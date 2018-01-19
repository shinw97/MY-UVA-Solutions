#include<iostream>
#include <queue>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int n, k;
    while(cin >> n >> k){
        if(n == 0 && k == 0){
            break;
        }
        vector<int> v(n , 0);
        queue<int> q;
        for(int i = 0; i < n; i++){
            q.push(i);
        }
        int i = 1;
        int remainder = 0;
        queue<int> result;
        bool left = false;
        while(!q.empty()){
            if(i > k){
                i = 1;
            }
            if(remainder){
                v.at(q.front()) += remainder;
                remainder = 0;
            }else{
                v.at(q.front()) += i;
                i++;
            }
            if(v.at(q.front()) == 40){
                result.push(q.front());
                q.pop();
                //i++;
                continue;
            }
            if(v.at(q.front()) > 40){
                result.push(q.front());
                remainder = result.front() % 40;
                q.pop();
                //i++;
                continue;
            }
            q.push(q.front());
            q.pop();
            //i++;
        }
        while(!result.empty()){
            cout<<setw(3)<<result.front() + 1;
            result.pop();
        }
        cout<<endl;
    }
}
