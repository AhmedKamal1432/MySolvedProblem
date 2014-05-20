/*
 * exchange_rate.cpp
 *
 *  Created on: Oct 17, 2013
 *      Author: root
 */
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>
#include<bitset>
#include<queue>
#include<utility>
#include<functional>
using namespace std;
#define vi vector<int>
#define ii pair<int,int>
#define INT_MAX 9999999

int get_gcd( int x, int y)
{
	 int r;
	while(y!=0)
	{
	  r=x%y;
	  x=y;
	  y=r;
	}
	return x;
}

class compare1 {
    public:
    bool operator()(pair<int,ii> p1 , pair<int,ii> p2)
    {
    	if(float((float)p1.second.first/(float)p1.second.second) < float((float)p2.second.first/(float)p2.second.second))
    		return true;

    	return false;
    }

};

//
// bool compare1 (pair<int,ii> p1 , pair<int,ii> p2)
//{
//	if(float((float)p1.second.first/(float)p1.second.second) < float((float)p2.second.first/(float)p2.second.second))
//		return true;
//
//	return false;
//}

float get_pair_eq(ii p1)
{
return float(float(p1.second)/float(p1.first));
}

vector<pair<int,int> > dijkstra(vector<vector<pair<int,ii> > > AdjList,int s,int V)
{
	vector<ii >dist(V,ii(1,INT_MAX) );
	dist[s].first =dist[s].second = 1; // INF = 1B to avoid overflow

	priority_queue< pair<int,ii>, vector<pair<int,ii> >, compare1 > pq;
   pq.push(pair<int,ii>(s, ii(1,1) ) );

   // ^to sort the pairs by increasing distance from s
   while (!pq.empty())
   { // main loop
	   pair<int,ii> front = pq.top(); pq.pop(); // greedy: pick shortest unvisited vertex
      ii d = front.second;
     int u = front.first;
       if (d.first == dist[u].first  &&  d.second == dist[u].second) // this check is important, see the explanation
           for (int j = 0; j < (int)AdjList[u].size(); j++)
		   {
               pair<int,ii> v = AdjList[u][j]; // all outgoing edges from u
            if (get_pair_eq(dist[u]) + get_pair_eq(v.second) < get_pair_eq(dist[v.first]))
			{
            	int m1=v.second.second * dist[u].first;
            	int m2=v.second.first * dist[u].second;
            	int mm1 = m1;
				int mm2 = m2;
					mm1 /= get_gcd(m1,m2);
            	    mm2 /= get_gcd(m1,m2);

             dist[v.first] =ii(mm1,mm2); // relax operation

             pq.push(pair<int,ii>( v.first,dist[v.first]));
           }
         }
   } // note: this variant can cause duplicate items in the priority queue
   return dist;
}


int main()
{
 // 	  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int index=0;
	map<string,int> mp;
	string s1,s2;
    char c,c2;
    vector< vector<pair<int,pair<int,int> > > > graph;
    map<int,int>::iterator m_it;
   int n1,n2;

 while(scanf("%c",&c) != EOF && c!='.')
	{
	 vector<pair<int,ii> > vpii;
	 vector<ii > vii_p;

	 	if(c == '!')     //insertion
		{

	 		scanf(" %d",&n1);
			 cin>>s1;
			 scanf(" = %d",&n2);
			 cin>>s2;


           if(mp.find(s1) != mp.end())    //there is s1
           {
			   if(mp.find(s2)==mp.end())
			   {
			   mp[s2]=index++;
               graph[mp[s1]].push_back(pair< int,pair<int,int> >(mp[s2],pair<int,int>(n1,n2)));
               vpii.clear();
               vpii.push_back(pair< int,pair<int,int> >(mp[s1],pair<int,int>(n2,n1)));
               graph.push_back(vpii);   
			   }
			   else
			   {
			    graph[mp[s1]].push_back(pair< int,pair<int,int> >(mp[s2],pair<int,int>(n1,n2)));
				graph[mp[s2]].push_back(pair< int,pair<int,int> >(mp[s1],pair<int,int>(n2,n1)));
				
			   }
		   }
           else    //there is no s1
           {
        	   mp[s1]=index++;
        	   if(mp.find(s2) == mp.end())  //there is no s2
        	   {
        		   mp[s2]=index++;
        		   vpii.push_back(pair<int,pair<int,int > >(mp[s2],pair<int,int>(n1,n2)));
        		   graph.push_back(vpii);
        		   vpii.clear();
		           vpii.push_back(pair<int,pair<int,int > >(mp[s1],pair<int,int>(n2,n1)));
        	       graph.push_back(vpii);
        	   }
        	   else
        	   {
        		   vpii.push_back(pair<int,pair<int,int > >(mp[s2],pair<int,int>(n1,n2)));
        		    graph.push_back(vpii);
					graph[mp[s2]].push_back(pair< int,pair<int,int> >(mp[s1],pair<int,int>(n2,n1)));
				
        	   }

           }
		}
		else if(c=='?' )           //question
		{
			cin>>s1;
		     scanf(" = ?");
			 cin>>s2;

			 vii_p=dijkstra(graph,mp[s1], graph.size());

			 if(vii_p[mp[s2]].first >= INT_MAX || vii_p[mp[s2]].second >= INT_MAX )
			 {
				 printf("? ");
				 cout<<s1;
				 printf(" = ? ");
				 cout<<s2<<endl;

			 }
			 else
			 {
			 printf("%d ",vii_p[mp[s2]].second);
			 cout<<s1;
			 printf(" = %d ",vii_p[mp[s2]].first);
			 cout<<s2<<endl;
			 }

		}


	}

return 0;

}



