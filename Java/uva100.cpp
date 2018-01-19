#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdio.h>

using namespace std;

int compute(unsigned int num, int counter){
if(num == 1){
    return counter;
}
if(num%2 == 1){
    counter++;
    return compute((3*num + 1), counter);
} else {
    counter++;
    return compute((num/2), counter);
}
}

int maxNum(vector<unsigned int> v){
    int max = v[0];
    for(int i = 1; i < v.size(); i++){
        if(max < v[i]){
            max = v[i];
        }
    }
    return max;
}

int main(){
    string str;
    string exclude = " ";
    int n1 , n2;
    while(scanf("%d %d", &n1, &n2) != EOF){
        int temp1 = n1;
        int temp2 = n2;
        if(n1 > n2){
            swap(n1, n2);
        }
        vector<unsigned int> numbers;
        for(unsigned int i = n1; i <= n2; i++){
            numbers.push_back(compute(i, 1));
        }
        cout<<temp1<<" "<<temp2<<" "<<maxNum(numbers)<<endl;
    }
    return 0;
}
