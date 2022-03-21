//reverse a string
# include<iostream>
#include<cstring>
# include<stack>
//void reverse_string(string s)
//{
//	stack<int> st;
//	for(int i = 0; i<s.size(); i++)
//	{
//		char ch = s.pop()
//		st.push(ch);
//	}
//	for(int i = 0; i<st.size(); i++)
//	{
//		cout<<st[i];
//	}
//	
//	
//	
//}
using namespace std;
int main()
{
	string s;
	cout<<"Enter a string";
	cin>>s;
	int start = 0;
	int last = s.size()-1;
	s.size();
	while(start<last)
	{
		swap(s[start], s[last]);
		start++;
		last--;
	}
	cout<<s;

return 0;
}

