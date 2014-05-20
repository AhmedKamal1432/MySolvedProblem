///*
//#include<cmath>
//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<iostream>
//#include<sstream>
//#include<cstring>
//#include<vector>
//#include<map>
//#include<set>
//#include<bitset>
//#include<queue>
//#include<utility>
//#include<algorithm>
//#include<functional>
//#include <stdio.h>
//
//using namespace std;
//
//vector<long> vec;
//int search(long long key) {
//	for (int i = 0; i < (int) vec.size(); i++)
//		if (key == vec[i])
//			return i;
//	return -1;
//}
//
//int main() {
//	freopen("input.txt", "r", stdin);
//	long long x1;
//	long long x2;
//	vec.push_back(4);
//	vec.push_back(20);
//	vec.push_back(42);
//	vec.push_back(145);
//	vec.push_back(89);
//	vec.push_back(58);
//	vec.push_back(37);
//	vec.push_back(16);
//	vector<long> ans;
//	while (scanf("%lld %lld", &x1, &x2) == 2 && (x1 != 0 || x2 != 0)) {
//		printf("%lld %lld ", x1, x2);
//		ans.clear();
//		bool con1 = true, con2 = true;
//		long long sum = 0;
//		int type1 = 0, type2 = 0;
//		int c = 0;
//		do {
//			c++;
//			if (con1) {
//				sum = 0;
//				long long temp = x1;
//				while (temp > 0) {
//					int dig = temp % 10;
//					temp = temp / 10;
//					sum += dig * dig;
//				}
//				x1 = sum;
//				int index;
//				if (find(ans.begin(), ans.end(), x1) == ans.end()) {
//					if ((index = search(x1)) != -1) { // found
//						type1 = 1;
//						con1 = false;
//						for (int i = 0; i < (int) vec.size(); i++) {
//							ans.push_back(index % (int) vec.size());
//							index++;
//						}
//					} else if (x1 == 1) {
//						type1 = -1;
//						con1 = false;
//						ans.push_back(1);
//					} else
//						ans.push_back(x1);
//				} else {
//					con1 = con2 = false;
//				}
//			}
//			if (con2) {
//				sum = 0;
//				long long temp = x2;
//				while (temp > 0) {
//					int dig = temp % 10;
//					temp = temp / 10;
//					sum += dig * dig;
//				}
//				x2 = sum;
//				int index;
//				if (find(ans.begin(), ans.end(), x2) == ans.end()) {
//					if ((index = search(x2)) != -1) { // found
//						type2 = 1;
//						con2 = false;
//						for (int i = 0; i < (int) vec.size(); i++) {
//							ans.push_back(index % (int) vec.size());
//							index++;
//						}
//					} else if (x2 == 1) {
//						type1 = -1;
//						con2 = false;
//						ans.push_back(1);
//					} else
//						ans.push_back(x2);
//				} else {
//					con1 = con2 = false;
//				}
//			}
//		} while (con1 || con2);
//		if (type1 == type2)
//			c = -1;
//		printf("%d\n", c + 1);
//	}
//	return 0;
//}
//
//*/
// #include<cmath>
// #include<cstdio>
// #include<cstdlib>
// #include<cmath>
// #include<iostream>
// #include<sstream>
// #include<cstring>
// #include<vector>
// #include<map>
// #include<set>
// #include<bitset>
// #include<queue>
// #include<utility>
// #include<algorithm>
// #include<functional>
//
// using namespace std;
//
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector< pair<int,int> >
// int pow(int n)
// {int s=1;;
// for(int i=0;i<n;i++)
// s*=2;
// return s;
// }
// int main()
// {
// freopen("input.txt","r",stdin);
// long long int G,T,A,D;
//
// cin>>G>>T>>A>>D;
// while(G!=-1)
// {
// long long int z=G*A+D;
// z=pow((int)ceil(log2(z)));
// long long int Y=z-(G*A+D);
// long long int X=(G*(T*(T-1))/2);
//
// long long int sum;
// long long int n=((int)log2(z));
// sum=(pow(n)-1);
// X+=sum;
// cout<<G<<"*"<<A<<"/"<<T<<"+"<<D<<"="<<X<<"+"<<Y<<endl;
// cin>>G>>T>>A>>D;
//
// }
//
// return 0;
// }
//
//
