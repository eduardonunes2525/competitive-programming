#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int p, q, c = 0;
    while(n--){
        cin >> p >> q;
        if((q-p-2)>=0)c++;
    }
    cout << c << "\n";
    return 0;
}
