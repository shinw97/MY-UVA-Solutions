#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void setNum(vector<vector<int> > &v1, int row, int column, int hor, int ver){
    for(int i = max(0, hor - 1); i < min(row, hor + 2); i++){
        for(int j = max(0, ver - 1); j < min(column, ver + 2); j++){
            if(v1[i][j] != -1){
                v1[i][j]++;
            }
        }
    }
}

void printVector(vector<vector<int> > v1){
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v1[i].size(); j++){
            if(v1[i][j] == -1){
                cout<<"*";
            }else{
                cout<<v1[i][j];
            }
        }
        cout<<endl;
    }
}

int main(){
    int row, column, field = 1;
    bool first = true;
    while(cin >> row >> column){
        if(row == 0 && column == 0){
            break;
        }
        string str;
        vector<vector<int> > v1(row, vector<int>(column, 0));
        for(int i = 0; i < row; i++){
            cin >> str;
            for(int j = 0; j < column; j++){
                if(str[j] == '*'){
                    v1[i][j] = -1;
                    setNum(v1, row, column, i, j);
                }
            }
        }
        if(!first){
            cout<<endl;
        }
        first = false;
        cout<<"Field #"<<field<<":"<<endl;
        printVector(v1);
        field++;
    }
    return 0;
}
