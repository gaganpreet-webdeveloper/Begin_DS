//valid expression question in stack.
# include<iostream>
# include<stack>
using namespace std;
int main()
{
	string str = "{[()]}";
	stack<char> st;
	for(int i=0; i<str.length(); i++)
	{
		char ch = str[i];
		if(ch=='{' || ch=='[' || ch=='(' ) //inserting open braces in stack
		{
			st.push(ch);
			cout<<"pushdone : "<< i <<endl;
		}
		else
		{
			if(!st.empty())
			{
				char c = st.top();
				if( (ch=='}' && c=='{') || (ch==']' && c=='[') || (ch==')' && c=='('))
				{
					st.pop();
					cout<<"match"<<endl;
				}
				else
				{
					cout<<"mismatch"<<endl;
				}
			}
			else{
				cout<<"Stack is empty";
			}
			
		}
	}
	
}
