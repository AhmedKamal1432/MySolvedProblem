                       MY LIBRARY

//accumalitor 2d array
int ac[MAX][MAX];
void acumilate()
{
	LOOP(i,SZ(arr)){
		ac[i][0]=arr[i][0] ;
		for(int k =1;k<SZ(arr[0]);k++)
		ac[i][k]=ac[i][k-1] + arr[i][k] ;
	}
	LOOP(i,SZ(arr[0])){
		for(int k =1;k<SZ(arr);k++)
		ac[k][i]+=ac[k-1][i]  ;
	}
}

/////////////////////// vector //////////

void print_int(vector<int> arr){
	LOOP(i,SZ(arr))
			if(i ==0)
				printf("%d",arr[0]);
			else
				printf(" %d",arr[i]);
}


////////////////  BITS ////////////////////////


void print_number(int n, int len)
{
	if(!len)
		return ;

	print_number(n>>1, len-1);	// remove last bit
	cout<<(n&1);						// print last bit
}

// count all bits;
int count_dig(int n){
	int count =0;
	while(n){
		n= n>>1;
		count++;
	}
	return count;
}


// Let's count bits == 1
int count_bits1(int n) {	// O(bits Length)
	int count = 0;	//1101001 -> 110100 -> 11010 -> 1101 -> 110 -> 11 -> 1 -> 0
	while (n) {
		if(n&1)
		  count++;
		n >>= 1;
	}
	return count;
}


// Get bit
int get_bit(int n, int index) {
  return ((n >> index) & 1) == 1;		// 110100, idx = 4  -->  110 & 1 = 0
}

int set_bit1(int n, int index) {
	return n | (1<<index);
}

int set_bit0(int n, int index) {
	return n & ~(1<<index);				// 110100, idx = 3  -->  110100 & ~000100 = 110100 & 111011
}

int flip_bit(int n, int index) {
	return n ^ (1<<index);
}

// len = 3: 000, 001, 010, 011, 100, 101, 110, 111

void print_all_subsets(int len)	// Remember we did it recursively! This is much SIMPLER!
{
	for (int i = 0; i < (1<<len); ++i)
		print_number(i, len);

	// For reversed order. Either reverse each item or work from big to small
	//for (int i = (1<<len); i >= 0 ; --i)
	//	printNumber(i, len);
}



//////////////////////////////////
int* line_stringToArray_int (string s,int& num)
{	
	int len =s.length();
	int *int_ptr= new int[len]();
	
	 int j=0;
	 string temp;
	 int i=0;

	 while(s[i]==' ')
		 i++;

	 for(i;i<len;i++)
	{
	 
	 if(s[i]==' ')
	 {   
	       if(i!=len-1&&s[i+1]!=' ')
		 {	 
			 stringstream ss;
			 ss<<temp;
			ss>>int_ptr[j]; 
			 j++;
			 temp="";
		 } 
	     continue;		 
	 }
	
	temp+=s[i];
	if(i==len-1&&s[i]!=' ')//last one
	{
	stringstream ss;
			 ss<<temp;
			ss>>int_ptr[j]; 
	}
	}

	num=j+1;
	return int_ptr;
}

/////////////////////////////////////
int * str_to_int (string * s_ptr,int num)
{ int *int_ptr=new int[num];
	for(int i=0;i<num;i++)
	{
	  stringstream ss;
	  ss<<s_ptr[i];
	  ss>>int_ptr[i];	
	}
	return int_ptr;
}


////////////////////////////////////////////////////
string* one_to_more_string(string s,int& num)
{	
	string *s_ptr= new string[s.length()]();
	for(int k=0;k<s.length();k++)
	{
	s_ptr[k]="";
	}

	 int j=0;

	for(int i=0;i<s.length();i++)
	{
	 if(s[i]==' ')
	 {
		 if(i!=s.length()-1&&s[i+1]!=' ')j++; 
	     continue;		 
	 }
	
	s_ptr[j]+=s[i];
	}

	num=j+1;
	return s_ptr;
}


////////////////////////////////////////////////////

bool is_palindrome(int x)
{
	string temp;
	stringstream ss;
	ss<<x;
	ss>>temp;

	int len=temp.length();
	for(int i=0; i<len/2; i++)
	{
	 if( temp[i]==temp[len-1-i])
	    continue;
	 else 
		 return false;
	
	}
return true;
}

