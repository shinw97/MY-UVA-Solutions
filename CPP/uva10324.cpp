#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string str, builder = "";
    int testcase = 1;
    while(cin >> str){
        if(str.empty()){
            break;
        }
        stringstream ss;
        ss << testcase;
        builder.append("Case ").append(ss.str()).append(":\n");
        int n;
        cin >> n;
        int x, y;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            bool isSame = true;
            int minimum = min(x, y);
            int maximum = max(x, y);
            char temp = str.at(minimum);
            for(int j = minimum + 1; j <= maximum; j++){
                if(str.at(j) != temp){
                    isSame = false;
                    break;
                }
            }
            if(isSame){
                builder.append("Yes\n");
            }else{
                builder.append("No\n");
            }
        }
        testcase++;
    }
    cout<<builder;
    return 0;
}
