//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<iostream>
//#include<sstream>
//#include<cstring>
//#include<vector>
//#include<list>
//#include<map>
//#include<set>
//#include<bitset>
//#include<queue>
//#include<utility>
//#include<algorithm>
//#include<functional>
//
//using namespace std;
//
//#define vi vector<int>
//#define ii pair<int,int>
//#define vii vector< pair<int,int> >
//
//int main()
//{
//    freopen("nocow.in","r",stdin);
//     freopen("nocow.out","w",stdout);
//
//	int N,K;
//	scanf("%d %d",&N,&K);
//
//	vector<string> int_arr;
//	vector<set<string> > sets;
//	vector<string> excld;
//	string s,temp_s;
//	scanf("\nFarmer John has no ");
//	cin>>s;
//
//	while(s != "cow.")
//	{
//		temp_s +=s;
//		int_arr.push_back(s);
//		cin>>s;
//	}
//
//	excld.push_back(temp_s);
//	int adj=int_arr.size();
//	sets.assign(adj,set<string>());
//
//	for (int i = 0; i < adj; ++i) {
//		sets[i].insert(int_arr[i]);
//	}
//
//	for (int r = 0; r < N-1; ++r) {
//		scanf("\nFarmer John has no ");
//		temp_s="";
//		for (int i = 0; i < adj; ++i)
//		{
//		  cin>>s;
//		  sets[i].insert(s);
//		  temp_s += s;
//		}
//		excld.push_back(temp_s);
//
//		scanf(" cow.");
//	}
//
//	vector<int> pos,num_in_set,h_to_m;
//	pos.assign(adj,0);
//	num_in_set.assign(adj,0);
//	h_to_m.assign(adj,0);
//
//	for (int i = 0; i < adj; ++i) {
//		num_in_set[i]=sets[i].size();
//	}
//
//	for (int i = 0; i < adj-1; ++i) {
//		int malt=1;
//		for (int k = i+1; k < adj; ++k) {
//			malt *= num_in_set[k];
//		}
//		h_to_m[i]=malt;
//	}
//	int temp_k=K;
//	
//	for (int bb = 0; bb < temp_k; bb++)
//	{
//		int tem_t=bb;
//
//    	for (int i = 0; i < adj-1; ++i) {
//		pos[i]=tem_t / h_to_m[i];
//		tem_t = tem_t % h_to_m[i];
//    	}
//		pos[adj-1]=tem_t;
//		string ss="";
//		for (int i = 0; i < adj; ++i) {
//			set<string>::iterator  it =sets[i].begin();
//			advance(it,pos[i]);
//		 ss+=*it;
//		}
//		if(find(excld.begin(),excld.end(),ss) != excld.end())
//			temp_k++;
//	}
//	for (int i = 0; i < adj; ++i) {
//		set<string>::iterator  it =sets[i].begin();
//		advance(it,pos[i]);
//		if(i==0)
//			cout<<*it;
//		else
//		cout<<" "<<*it;
//	}
//	
//	printf("\n");
//return 0;
//}
