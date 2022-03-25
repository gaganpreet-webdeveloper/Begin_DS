#include<iostream>
#include<stack>
using namespace std;
int main()
{
	string str = "GAganpreetSingh";
	stack<char>st;
	for(int i = 0; i<str.length(); i++)
	{
		st.push(str[i]);
	}
	for(int i = 0; i<str.length(); i++)
	{
		char ch = st.top();
		cout<<ch;
		st.pop();
	}
	
}
