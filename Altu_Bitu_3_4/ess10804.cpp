#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr1(20), arr2(20);
    int i, j;
    int a, b;

    for(i=0; i<20; i++)
        arr1[i] = i+1; //1~20 숫자열 생성

    for(i=0; i<10; i++){
        cin >> a >> b;
        for(j=a-1; j<b; j++)
            arr2[j] = arr1[j];
        for(j=a-1; j<b; j++)
            arr1[j] = arr2[b+a-2-j];
    }

    for(i=0; i<20; i++)
        cout << arr1[i] << endl;

    return 0;
}
