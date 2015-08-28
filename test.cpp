#include <bits/stdc++.h>
using namespace std;

#define INF 10000000

typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string, int> msi;

#define all(x) x.begin(), x.end()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define spresent(c,x) ((c).find(x) != (c).end())  // for set,map
#define present(c,x) (find(all(c),x) != (c).end())  // for vector
#define F first
#define S second
#define loop(i,a,b) for(int i=int(a);i<=int(b);++i)
#define nloop(i,a,b) for(int i= int(a);i>=int(b);--i)

map<long long int,int> counts;
map<long long int,int> mid;
map<long long int,int> _end;
long long int arr[200010];

int main()
{
	int n,k;
	cin>>n>>k;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]%k==0)
		{
			_end[arr[i]]+=mid[arr[i]/k];
		}
		
		if(arr[i]%k==0)
		{
			mid[arr[i]]+=counts[arr[i]/k];
		}
		
		counts[arr[i]]++;
	}
	
	long long ans=0;
	tr(_end,it)
	{
		ans+=it->second;
	}
	
	cout<<ans;
	return 0;
	
}
