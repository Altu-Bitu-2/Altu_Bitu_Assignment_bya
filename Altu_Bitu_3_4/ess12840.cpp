#include "iostream"
#define day 86400

using namespace std;

int main(){
    int hour, min, sec, w_sec;
    int num, que, var;
    int i;

    cin >> hour >> min >> sec;
    cin >> num;

    w_sec = hour*3600 + min*60 + sec;

    for(i=0; i<num; i++){
        cin >> que;

        if(que==3){
            hour = w_sec/3600;
            min = (w_sec/60)%60;
            sec = w_sec%60;
            cout << hour << ' ' << min << ' ' << sec << endl;
        }

        else if(que==1) {
            cin >> var;
            w_sec = (w_sec + var)%day;
        }

        else{
            cin >> var;
            w_sec = (w_sec - var)%day;
            while(w_sec<0){
                w_sec += day;
            }

        }

    }
    return 0;
}

// Created by yoona on 2022-03-06.

