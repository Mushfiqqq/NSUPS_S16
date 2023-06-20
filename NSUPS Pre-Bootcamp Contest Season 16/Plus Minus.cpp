#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a, x = 0, y = 0, z = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a > 0)
            x++;
        if(a < 0)
            y++;
        if(a == 0)
            z++;
    }
    cout << fixed << setprecision(6) << (double)x/n << endl;
    cout << fixed << setprecision(6) << (double)y/n << endl;
    cout << fixed << setprecision(6) << (double)z/n << endl;
}
