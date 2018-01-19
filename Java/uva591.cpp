#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int get_Average(vector<int> v){
    int n = v.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + v[i];
    }
    return sum / n;
}

int get_Moves(vector<int> v){
    int avrg = get_Average(v);
    int moves = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > avrg){
            moves += v[i] - avrg;
        }
    }
    return moves;
}

int main(){
    int num;
    int sets = 0;
    while(scanf("%d", &num)){
        if(num == 0){
            break;
        }
        vector<int> v;
        int bricks;
        for(int i = 0; i < num; i++){
            cin>>bricks;
            v.push_back(bricks);
        }
        int moves = get_Moves(v);
        printf("Set #%d\nThe minimum number of moves is %d.\n", (sets + 1), moves);
        sets++;
        printf("\n");
    }
    return 0;
}
