/*
    *
    * solved by Ahmed Kamal
    */
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

    #define ALL(v)				((v).begin()), ((v).end())
    #define SZ(v)				((int)((v).size()))
    #define CLR(v, d)			memset(v, d, sizeof(v))
    #define LOOP(i, n)		for(int i=0;i<(int)(n);++i)

    #define PB	push_back
    typedef vector<double>    VD;
    typedef vector<string>    VS;

    int n;
    bool g ;
    string arr;
    vi one,two,three;
    int get_max(){
        int a,b,c;
        if(one.size() > 0)
            a=one[one.size()-1];
        else
            a=-1;
        if(two.size() > 0)
            b=two[two.size()-1];
        else
            b=-1;
        if(three.size() > 0)
            c=three[three.size()-1];
        else
            c=-1;
        
        ////////////////
        if(a > b && a > c)
            return 1;
        if(b > a && b > c)
            return 2;
        if( c > a && c > b)
            return 3;
        return -1;
    }
    bool is_valid(string s){
       one.clear();two.clear();three.clear(); 
        LOOP(i,n){
            switch(s[i]){
                case '{': one.push_back(i);
                    break;
                case '(': two.push_back(i);
                    break;
                case '[': three.push_back(i);
                    break;
                case '}': if(get_max() == 1){
                    one.pop_back();
                  } 
                  else{
                    return false;
                  }
                    break;
                case ')': if(get_max() == 2){
                    two.pop_back();
                  } 
                  else{
                    return false;
                  }
                    break;
                case ']': if(get_max() == 3){
                    three.pop_back();
                  } 
                  else{
                    return false;
                  }
                    break;
            
            
            }
        }
        if(one.size() == 0 && two.size() == 0 && three.size() == 0)
            return true;
        return false;
    }
    
    void back(string s,int i){
        if(i == n){
           g |= is_valid(s);
           return;
        }
        if(arr[i] == 'X'){
            string a = s;
            a.push_back('{');
            back(a,i+1);
            
            string b = s;
            b.push_back('}');
            back(b,i+1);
            
            string c = s;
            c.push_back('(');
            back(c,i+1);
            
            string d = s;
            d.push_back(')');
            back(d,i+1);
            
            string e = s;
            e.push_back('[');
            back(e,i+1);
            
            string f = s;
            f.push_back(']');
            back(f,i+1);
            
        }
        else{
            s.push_back(arr[i]);
            back(s,i+1);
        }
    }
class BracketExpressions
{
public:
    string ifPossible(string s)
	{
        n = SZ(s);
        arr= s;
        g =false;
        back("",0);
        if(g)
            return "possible";
        return "impossible";
	}	
	
};
