#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

#define fill(a,x) memset(a,x,sizeof(a)) 
#define pb push_back
#define sz(x) (int)x.size() 
#define F first
#define S second
#define FOR(i,a,b) for(int i = a; i<=b; ++i)
#define NFOR(i,a,b) for(int i = a; i>=b; --i)
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const ll INF = 1e18;
const ll mod = 1e9+7;
const int N = 1e2+10; 

ll a[N];
int main(){
  fast;
  int n;
  cin>>n;

  for(int i=0;i<n;i++)
  cin>>a[i];
  
  sort(a,a+n);

  for(int i=0;i<n;i+=2)
  cout<<a[i]<<" ";
	
  int last=(n%2 ? n-2:n-1);
  
  for(int i=last;i>0;i-=2)
  cout<<a[i]<<" ";

  cout<<endl;
  return 0;
}