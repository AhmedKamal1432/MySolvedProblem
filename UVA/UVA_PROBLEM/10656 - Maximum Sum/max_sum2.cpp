//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//#include<map>
//#include<sstream>
//#include<cmath>
//
//using namespace std;
//
//struct seqnce
//{
//	vector<int> nums;
// int sum,num_num,pir;
//};
//
//
//bool func(seqnce s1,seqnce s2)
//{
//	if(s1.sum > s2.sum)
//		return true;
//
//	return false;
//}
//
//
//
//bool func2(seqnce s1,seqnce s2)
//{
//	if(s1.num_num < s2.num_num)
//		return true;
//
//	return false;
//}
//
//
//bool func3(seqnce s1,seqnce s2)
//{
//	if(s1.pir < s2.pir)
//		return true;
//
//	return false;
//}
//
//int main()
//{
//
//	freopen("input.txt","r",stdin);
//	int n;
//	seqnce seq_temp;
//	int sum_temp;
//	int piv;
//	int num_temp;
//	int pir;
//	vector<seqnce> v_seq,v_temp,v_temp2;
//
//
//	while( scanf("%d",&n) !=EOF && (n != 0) )
//	{
//		v_seq.clear();
//		v_temp.clear();
//		v_temp2.clear();
//		sum_temp=0;
//		num_temp=0;
//		pir=0;
//		        seq_temp.num_num =0;
//				seq_temp.sum = 0;
//				seq_temp.pir =0;
//				seq_temp.nums.clear();
//				
//
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d",&piv);
//	        if(piv == 0 )
//			{
//				seq_temp.num_num =num_temp;
//				seq_temp.sum = sum_temp;
//				seq_temp.pir =pir;
//				v_seq.push_back(seq_temp);
//			   
//				pir++;
//				sum_temp=0;
//		        num_temp=0;
//				seq_temp.nums.clear();
//
//				continue;
//			}
//
//			num_temp++;
//		    sum_temp +=piv;
//			seq_temp.nums.push_back(piv);
//	
//			if(i==n-1)
//			{
//			  	seq_temp.num_num =num_temp;
//				seq_temp.sum = sum_temp;
//				seq_temp.pir =pir;
//				v_seq.push_back(seq_temp);
//			
//			}
//
//		}
//
//		sort(v_seq.begin(),v_seq.end(),func);
//		
//		v_temp.push_back(v_seq[0]);
//		for (int i = 1,len=v_seq.size(); i < len; i++)
//		{
//			if(v_seq[i].sum==v_seq[0].sum)
//			{
//				v_temp.push_back(v_seq[i]);
//			}
//			else
//				break;
//		}
//
//		sort(v_temp.begin(),v_temp.end(),func2);
//		
//		v_temp2.push_back(v_temp[0]);
//
//		for (int i = 1,len=v_temp.size(); i < len; i++)
//     		{
//				if(v_temp[i].num_num==v_temp[0].num_num)
//		     	 {
//				  v_temp2.push_back(v_temp[i]);
//			     }   
//			    else
//				  break;
//	    	}
//
//				
//		sort(v_temp2.begin(),v_temp2.end(),func3);
//		
//		if(v_temp2[0].nums.size() >0)
//			printf("%d",v_temp2[0].nums[0]);
//
//		for (int i = 1,length=v_temp2[0].nums.size(); i < length; i++)
//		{
//			printf(" %d",v_temp2[0].nums[i]);
//		}
//		printf("\n");
//
//	}
//
//return 0;
//}
//
