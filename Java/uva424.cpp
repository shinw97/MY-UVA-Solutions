#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> to_Vector(string n){
    vector<int> v(105, 0);
    int index = v.size() - 1;
    for(int i = n.length() - 1; i >= 0; i--){
        v[index] = n.at(i) - '0';
        index--;
    }
    return v;
}

string compute(string ans, string newNum){
    vector<int> v1 = to_Vector(ans);
    vector<int> v2 = to_Vector(newNum);
    vector<int> result(105, 0);
    int carry = 0;
    for(int j = v1.size() - 1; j >= 0; j--){
        result[j] = v1[j] + v2[j] + carry;
        if(result[j] >= 10){
            result[j] -= 10;
            carry = 1;
        }else{
            carry = 0;
        }
    }
    ans = "";
    int index = 0;
    for(int i = 0; i < result.size(); i++){
        if(result[i] != 0){
            index = i;
            break;
        }
    }
    for(int i = index; i < result.size(); i++){
        ans += result[i] + '0';
    }
    return ans;
}

int main(){
    string str;
    string ans = "";
    while(cin>>str){
        if(str.compare("0") == 0){
            cout<<ans<<endl;
            break;
        }else{
            ans = compute(ans, str);
        }
    }
}
