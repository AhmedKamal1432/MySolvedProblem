#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)
double const Epsilon = 2.22045e-016;

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	string s,ans,temp;
	cin>>s;
	int len = s.size();
	for (int i = 0; i < len; ++i) {
		int ans_len=ans.size();
		if(ans_len > 1)
			if(s[i]==ans[ans_len-1] && s[i]==ans[ans_len-2])
				continue;
		if(ans_len>2)
			if(s[i]==ans[ans_len-1] && ans[ans_len-3]==ans[ans_len-2])
				continue;
		ans.push_back(s[i]);
	}
cout<<ans<<'\n';
return 0;
}

