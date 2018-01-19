#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string str;
    while(cin>>str){
        if(str.compare("0:00") == 0){
            break;
        }
        int index = str.find(":");
        str[index] = ' ';
        stringstream ss(str);
        double hour, minute;
        ss >> hour;
        ss >> minute;
        //cout<<hour<<" "<<minute<<endl;
        double h_degree, m_degree;
        if(hour == 12 && minute == 00){
            h_degree = 0;
        }else{
            h_degree = ((hour / 12) * 360) + ((minute / 60) * 30);
        }
        if(minute == 60){
            m_degree == 0;
        }else{
            m_degree = (minute / 60) *360;
        }
        //cout<<h_degree<<" "<<m_degree<<endl;
        double ans;
        if(h_degree >= m_degree){
            if(h_degree - m_degree <= 180){
                ans = h_degree - m_degree;
            }else{
                ans = (360 - h_degree) + m_degree;
            }
        }else{
             if(m_degree - h_degree <= 180){
                ans = m_degree - h_degree;
             }else{
                ans = (360 - m_degree) + h_degree;
             }
        }
        cout<<fixed;
        cout<<setprecision(3)<<ans<<endl;
    }
    return 0;
}
