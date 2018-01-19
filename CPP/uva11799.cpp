#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
/*void Swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}*/
int maximum(vector<int> &v){
    for(size_t i = 0; i < v.size(); i++){
        for(size_t j = 0; j < v.size() - 1; j++){
            if(v[j]>v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                //Swap(&v[j],&v[j+1]);
            }
        }
    }
    return v.back();
}

int main(){
int testcase;
vector<int> vNum;
string str;
getline(cin,str);
stringstream ss(str);
ss>>testcase;
for(int i = 0; i < testcase; i++){
    getline(cin,str);
    vNum.clear();
    stringstream ss(str);
    int number;
    while(ss >> number){
        vNum.push_back(number);
    }
    cout<<"Case "<<(i + 1)<<": "<<maximum(vNum)<<endl;
}
return 0;
}
