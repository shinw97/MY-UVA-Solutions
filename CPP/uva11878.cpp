#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;

int main(){
    string str;
    int counter = 0;
    while(cin >> str){
        string n1 = "", n2 = "", ans = "";
        char op;
        bool gotn2 = false, gotop = false;
        for(int i = 0; i < str.length(); i++){
            if(isdigit(str.at(i)) && !gotop){
                n1.push_back(str.at(i));
                continue;
            }
            if(!isdigit(str.at(i)) && !gotop){
                op = str.at(i);
                gotop = true;
                continue;
            }
            if(isdigit(str.at(i)) && gotop && !gotn2){
                n2.push_back(str.at(i));
                continue;
            }
            if(str.at(i) == '='){
                gotn2 = true;
                continue;
            }else{
                ans.push_back(str.at(i));
            }
        }

        if(ans.compare("?") == 0){
            continue;
        }
        int x, y, z1, z2;
        stringstream s1(n1);
        s1 >> x;
        stringstream s2(n2);
        s2 >> y;
        stringstream s3(ans);
        s3 >> z2;
        if(op == '+'){
            z1 = x + y;
            if(z1 == z2){
                counter++;
                continue;
            }
        }else{
            z1 = x - y;
            if(z1 == z2){
                counter++;
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}
