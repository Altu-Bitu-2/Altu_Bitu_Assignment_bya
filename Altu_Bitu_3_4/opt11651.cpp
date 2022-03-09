//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

struct point{
    int x, y;
};

bool cmp(const point &a, const point &b){
    if(a.y==b.y)
        return a.x < b.x;
    else
        return a.y < b.y;
}

int main(){
    int i, num=0;

    cin >> num;

    point *pnt = new point[num];

    for(i=0; i<num; i++)
        cin >> pnt[i].x >> pnt[i].y;    //(x,y) 입력받기

    sort(pnt, pnt+num, cmp);

    for(i=0; i<num; i++)
        cout << pnt[i].x << ' ' << pnt[i].y << endl;    //(x,y) 출력

    return 0;
}
// Created by yoona on 2022-03-06.
//

