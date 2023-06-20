#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x = 0, y = 0;
    cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            if(i == j)
                x += arr[i][j];
            if(i+j == n-1)
                y += arr[i][j];
        }
    }
    cout << abs(x-y) << endl;
}
