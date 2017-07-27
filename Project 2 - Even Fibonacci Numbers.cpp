#include <bits/stdc++.h>
using namespace std;

#define fill(arr,val) memset(arr,val,sizeof(arr))
#define ll long long
#define forn(i,n) for(int i=0; i<int(n); i++)
#define endl "\n"
#define inf 0x3f3f3f3f
#define infl ll(2e18) + ll(1e10)

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tests;
  cin >> tests;

  while(tests--){
    ll n;
    cin >> n;

    // Given the fibonacci series - 0,1,1,2,3,5,8,13,21,34,55,89,144...
    // Notice that the even numbers occur at every three steps from the previous.
    // Now, we know that f(n) = f(n-1) + f(n-2) for fibonacci series.
    // f(n) = f(n-1) + f(n-2) = {f(n-2)+f(n-3)} + {f(n-3)+f(n-4)} = 2f(n-3) + f(n-2) + f(n-4)
    // = 2f(n-3) + {f(n-3)+f(n-4)} + {f(n-5)+f(n-6)} = 3f(n-3) + "f(n-4) + f(n-5)" + f(n-6)
    // = 3f(n-3) + {f(n-4) + f(n-5)} + f(n-6) = 3f(n-3) + f(n-3) + f(n-6) = 4f(n-3) + f(n-6)
    // Thus, we get -> f(n) = 4.f(n-3) + f(n-6), the equation for every third number in the series
    // To simplify, write it as -> f(k) = 4.f(k-1) + f(k-2), for even fib series (starting from 2)
    // Since the sum is larger than int, we will use ll (long long)
    ll sum = 0, a = 2, b = 8, temp = 0;

    if(n < a){
      cout << 0 << endl;
    }
    else if(n < b){
      cout << 2 << endl;
    }
    else{
      while(a < n){
        sum += a;
        temp = b;
        b = 4*b + a;
        a = temp;
      }
      cout << sum << endl;
    }

  }

  return 0;
}
