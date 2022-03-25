//ess code de ander appa pehla stack de elements nu ek ek karke dusre stack vich payea and uss to baad jdo
//pehla stack empty ho gyea ta frr appa uss vich required element payea and uss to baad dusre stack cho sare
//elements nu ekk karke pehle stack vich paa taa.

# include<iostream>
# include<stack>
using namespace std;
int main()
{
	stack<int>s;
	stack<int>s1;
	s.push(100);
	s.push(200);
	s.push(300);
	s.push(400);
	cout<<"stack before size :"<<s.size()<<endl;

	while(!s.empty())
	{
		int ans = s.top();
		cout<<ans<<endl;
		s.pop();
		s1.push(ans);	
	}
	if(s.empty())
	{
		s.push(12200);
	}
	while(!s1.empty())
	{
		int answer = s1.top();
		cout<<answer<<" ";
		s1.pop();
		s.push(answer);
	}
	cout<<"stack1 top element is :"<<s.top()<<endl;
	cout<<s.size();
}
