#include <iostream>
#include <stack>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    cin.ignore();
    string builder = "";
    for(int i = 0; i < testcase; i++){
        string str;
        getline(cin, str);
        if(str.empty()){
            builder.append("Yes\n");
            continue;
        }
        stack<char> st;
        for(int j = 0; j < str.length(); j++){
            if (str.at(j) == '(') {
                st.push(str.at(j));
                continue;
            }
            if (str.at(j) == '[') {
                st.push(str.at(j));
                continue;
            }
            if (str.at(j) == ')') {
                if (st.empty()) {
                    st.push(str.at(j));
                    break;
                }
                if (st.top() != '(') {
                    st.push(str.at(j));
                    break;
                }
                st.pop();
            }
            if (str.at(j) == ']') {
                if (st.empty()) {
                    st.push(str.at(j));
                    break;
                }
                if (st.top() != '[') {
                    st.push(str.at(j));
                    break;
                }
                st.pop();
            }
        }
        if(st.empty()){
            builder.append("Yes\n");
        }else{
            builder.append("No\n");
        }
    }
    cout<<builder;
    return 0;
}
