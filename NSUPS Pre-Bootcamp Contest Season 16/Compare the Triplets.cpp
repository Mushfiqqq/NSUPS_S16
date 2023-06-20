#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[3], x = 0, y = 0, a;
    cin >> arr[0] >> arr[1] >> arr[2];
    for(int i=0; i<3; i++){
        cin >> a;
        if(a < arr[i])
            x++;
        if(a > arr[i])
            y++;
    }
    cout << x << " " << y << endl;
}
