#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

#define fill(a,x) memset(a,x,sizeof(a)) 
#define pb push_back
#define mp make_pair
#define sz(x) (int)x.size() 
#define F first
#define S second
#define FOR(i,a,b) for(int i = a; i<=b; ++i)
#define NFOR(i,a,b) for(int i = a; i>=b; --i)
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const ll INF = 1e18;
const ll mod = 1e9+7;
const int N = 1e2+10; 

int arr[N];
int sum[N];
int main(){
  fast;
  int n;
  cin>>n;
  FOR(i,1,n)
  cin>>arr[i];

  sum[1]=arr[1];
  FOR(i,2,n)
  sum[i]=sum[i-1]+arr[i];
  
  if(sum[n])
  {
  	cout<<"YES"<<endl;
  	cout<<1<<endl;
  	cout<<1<<" "<<n;
  	return 0;
  }

  NFOR(i,n-1,1)
  {
  	if(sum[i])
  	{
        cout<<"YES"<<endl;
        cout<<2<<endl;
        cout<<1<<" "<<i<<endl;
        cout<<i+1<<" "<<n;
        return 0;
  	}
  }
  
  cout<<"NO";
  return 0;
}