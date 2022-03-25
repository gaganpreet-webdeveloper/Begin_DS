# include<iostream>
# include<stack>
using namespace std;
int main()
{
	stack<int>s;
	s.push(100);
	s.push(200);
	s.push(300);
	s.push(300);
	s.push(300);
	int size = s.size();
	cout<<"size is ; "<<s.size();
	for(int i = 0; i<size; i++)
	{
		if(size%2!=0)
		{
			int result = (size/2)+1;
			s.pop();	
		}
	}

	cout<<"size is ; "<<s.size();
}
