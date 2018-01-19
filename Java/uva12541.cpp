#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int number;
    cin >> number;
    vector<string> names;
    vector<string> dates;
    for(int i = 0; i < number; i++){
        string name, day, month, year, adate = "";
        cin >> name >> day >> month >> year;
        int extra_zero = 4 - year.length();
        for(int j = 0; j < extra_zero; j++){
            year = "0" + year;
        }
        if(month.length() == 1){
            month = "0" + month;
        }
        if(day.length() == 1){
            day = "0" + day;
        }
        adate = adate.append(year).append(" ").append(month).append(" ").append(day);
        names.push_back(name);
        dates.push_back(adate);
    }
    vector<string> copy_dates(dates);
    sort(copy_dates.begin(), copy_dates.end());
    string first_date = copy_dates[0];
    string last_date = copy_dates[copy_dates.size() - 1];
    string n1, n2;
    for(int i = 0; i < dates.size(); i++){
        if(dates[i] == first_date){
            n1 = names[i];
        }
        if(dates[i] == last_date){
            n2 = names[i];
        }
    }
    cout<<n2<<"\n"<<n1<<endl;
    return 0;
}
