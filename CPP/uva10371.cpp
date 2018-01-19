#include <iostream>
#include <sstream>
#include <math.h>
#include <iomanip>

using namespace std;

const string zone[] = {"UTC", "GMT", "BST", "IST", "WET", "WEST", "CET", "CEST", "EET", "EEST", "MSK", "MSD", "AST", "ADT", "NST", "NDT", "EST", "EDT", "CST", "CDT", "MST", "MDT", "PST", "PDT", "HST", "AKST", "AKDT", "AEST", "AEDT", "ACST", "ACDT", "AWST"};

const double val[] = {0, 0, 1, 1, 0, 1, 1, 2, 2, 3, 3, 4, -4, -3, -3.5, -2.5, -5, -4, -6, -5, -7, -6, -8, -7, -10, -9, -8, 10, 11, 9.5, 10.5, 8};
const int sizeofzone = sizeof(val) / sizeof(double);
int main(){
    int testcase;
    cin >> testcase;
    for(int i = 0; i < testcase; i++){
        string time, ampm, zone1, zone2;
        cin >> time;
        if(!(time.compare("noon") == 0 || time.compare("midnight") == 0)){
            cin >> ampm;
        }
        cin >> zone1 >> zone2;
        int indexofz1, indexofz2;
        for(int j = 0; j < sizeofzone; j++){
            if(zone1 == zone[j]){
                indexofz1 = j;
            }
            if(zone2 == zone[j]){
                indexofz2 = j;
            }
        }
        double ans;
        if(ampm.empty()){
            if(time == "noon"){
                ans = 12;
            }else{
                ans = 24;
            }

        }else{
            time.at(time.find(":")) = ' ';
            stringstream ss(time);
            double hour, minute;
            ss >> hour;
            ss >> minute;
            minute /= 60;
            hour += minute;
            if(ampm == "pm"){
                hour += 12;
            }
            ans = hour;
        }
        ans = ans - val[indexofz1] + val[indexofz2];
        if(ans == 24.0 ){
            cout<<"midnight"<<endl;
            continue;
        }
        if(ans == 12.0 ){
            cout<<"noon"<<endl;
            continue;
        }
        if(ans >= 25){
            ans -= 24;
        }
        string ap = " a.m.";
        if(ans >= 13){
            ans -= 12;
            ap = " p.m.";
        }
        double hour, minute, decimal;
        decimal = modf(ans, &hour);
        minute = decimal * 60;
        stringstream ss1;
        ss1 << minute;
        string m = ss1.str();
        if(m.size() == 1){
            m = "0" + m;
        }
        cout<<hour<<":"<<m<<ap<<endl;
    }
    return 0;
}
