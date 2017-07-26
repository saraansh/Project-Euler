#include <bits/stdc++.h>
using namespace std;

#define fill(arr,val) memset(arr,val,sizeof(arr))
#define ll long long
#define forn(i,n) for(int i=0; i<int(n); i++)
#define endl "\n"
#define inf 0x3f3f3f3f
#define inf1 ll(2e18)+ll(1e10)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tests;
	cin >> tests;

	while(tests--){
		int n;
		cin >> n;

		//Calculate A = (N-1)/3
		ll a = (n-1)/3;

		//Calculate B = (N-1)/5
		ll b = (n-1)/5;

		//Calculate C = (N-1)/15
		ll c = (n-1)/15;

		// Sum of all multiples of 3 and 5
		//= Sum(3 multiples) + Sum(5 multiples) - Sum(15 multiples)

		// Wrong Method: ll sum = 3*(a*(a+1))/2 + 5*(b*(b+1))/2 - 15*(c*(c+1))/2
		// Loss of decimal point consecutively in all three can prove fatal.

		//Correct Method 1: Dividing the sum by 2
		ll sum = (3*a*(a+1) + 5*b*(b+1) - 15*c*(c+1))/2;

		// Correct Method 2: Bitwsie Right-Shift (google it!)
		sum = (3*a*(a+1) + 5*b*(b+1) - 15*c*(c+1)) >> 1;

		cout << sum << endl;

	}

	return 0;
}
