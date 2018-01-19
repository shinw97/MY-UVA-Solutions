#include <iostream>
#include <queue>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    int testcase;
    cin >> testcase;
    cin.ignore();
    bool first = true;
    for(int i = 0; i < testcase; i++){
        string str;
        if(!first){
            cout<<endl;
        }
        first = false;
        getline(cin, str);
        getline(cin, str);
        stringstream ss(str);
        int order;
        queue<int> q;
        while(ss >> order){
            q.push(order);
        }
        ss.str("");
        vector<string> v(q.size());
        while(!q.empty()){
            string num;
            cin >> num;
            v[q.front() - 1] = num;
            q.pop();
        }
        cin.ignore();
        for(int j = 0; j < v.size(); j++){
            cout << v[j] << endl;
        }
    }
    return 0;
}
