#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"


using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS;
	int t, n;
	cin >> t;
	string s;

	while(t--){
		bool b = false;
		cin >> n >> s;

		REP(i,0,n-11) { 
			if(s[i]=='8') {
				b = true; break;
			}
		}

		b ? cout << "YES" << endl : cout << "NO" << endl;
	}

    return 0;
}
