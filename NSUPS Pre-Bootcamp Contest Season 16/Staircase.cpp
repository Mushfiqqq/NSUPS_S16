#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int j=1; j<=n; j++){
        for(int i=n; i>j; i--)
            cout << " ";
        for(int k=0; k<j; k++){
            cout << "#";
        }
        cout << endl;
    }
}
