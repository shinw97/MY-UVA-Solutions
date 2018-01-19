#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int group;
    string str, append = "";
    while(cin >> group){
        if(group == 0){
            break;
        }
        cin >> str;
        int length = str.length() / group;
        string builder = "";
        for(int i = 0; i < str.length(); i += length){
            string sub = str.substr(i, length);
            reverse(sub.begin(), sub.end());
            builder.append(sub);
        }
        append.append(builder).append("\n");
    }
    cout<<append;
    return 0;
}
