#include <iostream>
#include <vector>
#include <stdio.h>
#include <iomanip>

using namespace std;

double get_Average(vector<double> v){
    double sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum = sum + v[i];
    }
    return sum / v.size();
}

double get_Percentage(vector<double> v){
    double average = get_Average(v);
    int counter = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > average){
            counter++;
        }
    }
    double percentage = ((double)counter / (double)v.size()) * 100;
    return percentage;
}

int main(){
    int testcase;
    cin>>testcase;
    for(int i = 0; i < testcase; i++){
        double numbers;
        vector<double> v;
        cin>>numbers;
        int n;
        for(int j = 0; j < numbers; j++){
            cin>>n;
            v.push_back(n);
        }
        double ans = get_Percentage(v);
        cout<<fixed;
        cout<<setprecision(3)<<ans<<"%"<<endl;
    }
}
