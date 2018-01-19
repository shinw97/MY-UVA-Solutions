#include <iostream>

using namespace std;

int main(){
    int testcase;
    string builder = "";
    cin>>testcase;
    for(int i = 0; i < testcase; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a >= b + c || b >= a + c || c >= a + b){
            builder.append("Wrong!!\n");
        }else{
            builder.append("OK\n");
        }
    }
    cout<<builder;
    return 0;
}
