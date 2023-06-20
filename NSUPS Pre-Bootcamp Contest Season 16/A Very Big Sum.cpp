#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    unsigned long long int a, x = 0;
    for(int i=0; i<n; i++){
        cin >> a;
        x += a;
    }
    cout << x << endl;
}
