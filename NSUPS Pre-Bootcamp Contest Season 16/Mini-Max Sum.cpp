#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int arr[5], x = 0, y = 0;
    for(int i=0; i<5; i++)
        cin >> arr[i];

    sort(arr, arr+5);
    for(int i=0; i<5; i++){
        if(i < 4)
            x += arr[i];
        if(i > 0)
            y += arr[i];
    }
    cout << x << " " << y << endl;
}
