#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a, m = 0, x = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a > m){
            m = a;
            x = 0;
        }
        if(a == m)
            x++;
    }
    cout << x << endl;
}
