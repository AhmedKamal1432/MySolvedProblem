//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//#include<map>
//#include<sstream>
//#include<cmath>
//#include<queue>
//
//using namespace std;
//
//struct node
//{
//	char chr;
//	bool is_end;
//	vector<node *> next;
//	node * fall;
//	node * parent;
//	
//	
//	node()
//	{
//		is_end=false;
//		fall=NULL;
//		parent==NULL;
//	}
//	node(char c)
//	{
//		is_end=false;  
//	   chr=c;
//	   fall=NULL;
//	   parent==NULL;
//
//	}
//
//	node* get_child(node* out)
//	{
//		for (int i = 0,len=this->next.size(); i < len; i++)
//		{
//			if(this->next[i]->chr == out->chr)
//				return this->next[i];
//		}
//		return NULL;
//	}
//  
//   node* get_child(char c)
//	{
//		for (int i = 0,len=this->next.size(); i < len; i++)
//		{
//			if(this->next[i]->chr == c)
//				return this->next[i];
//		}
//		return NULL;
//	}
//
//
//
//};
//
//
//void add_word(node * root,string word);
//bool search_word(node * root,string word);
//void make_fall(node *root);
//void SearchFall(string s , node* root);
//
//
//int main()
//{
////	freopen("input.txt","r",stdin);
////	freopen("output.txt","w",stdout);
//
//node* root =new node();
//root->chr=0;
//root->is_end=false;
//add_word(root,"soft");
//add_word(root,"take");
//add_word(root,"fast");
//
//make_fall(root);
////add_word(root,"bing");
////add_word(root,"car");
//SearchFall("takeso fasofast fassofatake sosso sofastake so",root);
//cout<<search_word(root,"amr")<<endl;
//cout<<search_word(root,"ahmed")<<endl;
//cout<<search_word(root,"bing")<<endl;
//cout<<search_word(root,"ah")<<endl;
//cout<<search_word(root,"moustafa")<<endl;
//
//
//return 0;
//}
//
//void add_word(node * root,string word)
//{
//	// get the node which i want
//	
//	node * ptr = root;
//	bool is_fnd=false;
//	int length =word.size();
//	int nxt_len;
//	int i_stopchar;
//
//	for (int i = 0; i < length; i++)
//	{
//		nxt_len= ptr->next.size();
//		is_fnd=false;
//		for (int k = 0; k < nxt_len; k++)
//		{
//			if(word[i] == ptr->next[k]->chr)
//			{
//			  is_fnd=true;
//			  ptr=ptr->next[k];
//			  break;
//			}
//
//		}
//		
//		i_stopchar=i;
//		
//		if(!is_fnd)			
//			break;		
//			
//	}
//
//	if(i_stopchar < length-1 )
//	{
//	// normal
//	for (int i = i_stopchar; i < length-1; i++)
//	{
//		node *n_node=new node(word[i]) ;
//		n_node->parent = ptr;
//		ptr->next.push_back(n_node);
//		ptr = n_node;
//	}
//	
//	node *n_node=new node(word[length-1]) ;
//	n_node->is_end=true;
//	n_node->parent = ptr;		
//	ptr->next.push_back(n_node);
//	}	
//	else
//	{
//		ptr->is_end=true;
//	}
//
//}
//
//
//bool search_word(node * root,string word)
//{
//	node* ptr =root;
//	int length =word.size();
//	int nxt_len;
//	int is_fnd =false;
//
//	for (int i = 0; i < length; i++)
//	{
//		nxt_len= ptr->next.size();
//		is_fnd=false;
//
//		for (int k = 0; k < nxt_len; k++)
//		{
//			if(word[i] == ptr->next[k]->chr)
//			{
//			  is_fnd=true;
//			  ptr=ptr->next[k];
//			  break;
//			}
//
//		}
//		
//		if(!is_fnd)
//			return false;		
//			
//	}
//
//	if(ptr->is_end==true)
//	  return true;	
//	
//	return false;
//}
//
///*
//function MakeFallFunctions():void
//{
//   trie.fall = trie; // fall function for the root is root
//   q.enqueue(trie);  // I add the root to the queue
//   while (q.size != 0) // BFS
//   {
//      var n:TNode = q.dequeue();
//      var no:TNode;
//      var i:int;
//      for (i = 0; i < 4; i++) // adding children to queue
//      {
//         no = n.cn[i];
//         if (no == null) continue;
//         while (no.next != null) { q.enqueue(no); no = no.next; }
//         q.enqueue(no);
//      }
//   }
//}
//*/
//
//void make_fall(node *root)
//{
///*
//function MakeFallFunctions():void
//{
//   trie.fall = trie; // fall function for the root is root
//   q.enqueue(trie);  // I add the root to the queue
//   while (q.size != 0) // BFS
//   {
//      var n:TNode = q.dequeue();
//      var no:TNode;
//      var i:int;
//      for (i = 0; i < 4; i++) // adding children to queue
//      {
//         no = n.cn[i];
//         if (no == null) continue;
//         while (no.next != null) { q.enqueue(no); no = no.next; }
//         q.enqueue(no);
//      }
//	       if (n == trie) continue; // root already has a fall function
//      // I move on fall function from parent to find the longest suffix
//      // or I reach the root
//*/
//	  queue<node *> q;
//	root->fall=root;
//	q.push(root);
//	node * temp,*fl;
//	node * my_node ;
//
//	 
//
//	while (q.size() != 0)
//	{
//		my_node = q.front();
//		q.pop();
//	   for (int i = 0,len=my_node->next.size(); i <len ; i++)
//		{
//			q.push(my_node->next[i]);
//		}
//	   
//	   if(my_node == root) continue;
//
//   /*
//	   var fall:TNode = n.parent.fall;
//      while (fall.GetChild(n.c) == null && fall != trie) fall = fall.fall;
//      // if I found suffix, I set it to "fall" pointer
//      n.fall = fall.GetChild(n.c);
//      if (n.fall == null) n.fall = trie; // there is no suffix
//      if (n.fall == n) n.fall = trie;
// 
//*/
//     fl=my_node->parent->fall;
//	   
//	 while(fl->get_child(my_node) == NULL && fl != root) 
//		 fl = fl->fall;
//    
//	 my_node->fall = fl->get_child(my_node);
//	 if (my_node->fall == NULL) my_node->fall = root; // there is no suffix
//	 if (my_node->fall == my_node) my_node->fall = root;
//	
//	}
//}
//
//void SearchFall(string s , node* root)
//{
//	/*
//	var text:String = "I will search for words in this text.";
//4   var cState = trie; // current state
//5   var n:TNode;       // some other pointers
//6   var no:TNode;
//7   var b:String;      // the character which we read
//8   for(var i:int=0; i < text.length; i++)
//9   {
//10      n = cState;
//11      b = text.charAt(i);
//12      
//13      // I move on falls until I find the right child or reach the root
//14      while (n.GetChild(b) == null && n != trie) n = n.fall;
//15      
//16      // I got into the root
//17        if (n == trie)
//18        {
//19            n = n.GetChild(b);
//20            if (n == null) n = trie;
//21        }
//22        else n = n.GetChild(b); // or I found the right child
//23      
//24      no = n; // I move on falls to root and report all sufices I found
//25      while(no!= trie)
//26      {
//27         if(no.isEnd){/* I found the word, which ends in "no"}
//         no=no.fall;
//	  }
//      cState = n;
//   }
//	*/
//	node* cstate = root;
//	node * temp;
//	node* n,*no;
//	node * my_node;
//	string s_temp,s_temp2;
//
//	for ( int i = 0 ; i < s.size() ; i++ )
//	{
//		n = cstate;
//		while ( n->get_child(s[i]) == NULL && n != root ) n = n->fall;
//
//		if ( n == root )
//		{
//			n = n->get_child(s[i]);
//			if ( n == NULL ) n = root;
//		}
//		else n = n->get_child(s[i]);
//		
//		no = n;
//		while ( no != root )
//		{
//			if ( no->is_end )
//			{
//				temp = no;
//				while(temp != root)
//				{
//				s_temp2.push_back(temp->chr);
//					s_temp.insert(0,s_temp2);
//					s_temp2.clear();
//					temp=temp->parent;
//				}
//				cout<<s_temp<<endl;
//				s_temp.clear();
//			}
//			no = no->fall;
//		}
//
//		//--
//		cstate = n;
//	}
//
//}