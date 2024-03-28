#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>


using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        string time;
        cin>>time;
        string strHour = time.substr(0,2);
         int hour = stoi(strHour);
         int minute = stoi(time.substr(3, 5));
        //  cout<< minute << endl;
        int hr=hour;
        string resHour,resMinute;
        // cout
        
        if(hour>12){
            hour-=12;
        }
        if(hour<10){
            resHour='0'+to_string(hour);
        }else{
            resHour = to_string(hour);
        }

        if (minute < 10)
        {
            resMinute = '0' + to_string(minute);
        }
        else
        {
            resMinute = to_string(minute);
        }
        if (hr == 0)
        {
            resHour="12";
        }

        if(hr>=12){
            cout << resHour << ":" << resMinute << " "
                 << "PM";
        }else{
            cout << resHour << ":" << resMinute << " "
                 << "AM";
        }
        cout<<endl;
    }
    return 0;
}