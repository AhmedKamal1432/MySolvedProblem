#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

bool fncomp (string  i, string j)
{
	int temp=0;
	temp=i.compare(j);
	if(temp<0)
	return true;
	
	return false;
}

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	
	map<string,vector<string> > mp;

	vector<string>allCntry;
	
	int tst;
	scanf("%d",&tst);
	for (int cas = 0; cas < tst; cas++)
	{
		string country;
		cin>>country;
		allCntry.push_back(country);

		string name;
		getline(cin,name);
		mp[country].push_back(name);
	}

	sort(allCntry.begin(),allCntry.begin()+allCntry.size(),fncomp);

	if(allCntry.size()>=1)
		cout<<allCntry[0]<<" "<<mp[allCntry[0]].size()<<endl;
	
	for (int i = 1,n=allCntry.size(); i < n; i++)
	{
		if (allCntry[i]!=allCntry[i-1])
		{
			cout<<allCntry[i]<<" "<<mp[allCntry[i]].size()<<endl;
		}
	}
	
	
	return 0;
}