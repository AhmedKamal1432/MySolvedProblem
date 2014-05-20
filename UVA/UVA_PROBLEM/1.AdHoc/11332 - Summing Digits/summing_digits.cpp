/*
 * summing_digit.cpp
 *
 *  Created on: Oct 11, 2013
 *      Author: root
 */
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    string s;
    string s_sum;
    int sum;
    stringstream ss;

    while(cin>>s && s !="0")
    {
     sum=0;
     s_sum=s;
     while(s_sum.size() >1 )
     {
         sum=s_sum[0]-'0';
         for(int i=1,len=s_sum.size(); i<len;i++)
         {
             sum += s_sum[i]-'0';
         }

         ss<<sum;
         ss>>s_sum;
         ss.clear();
     }

     cout<<s_sum<<endl;

    }



    return 0;
}





