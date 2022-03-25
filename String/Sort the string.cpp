// Sort the string
# include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	// this is for characters sorting
	
	string s1 = "gagan";
	sort(s1.begin(), s1.end(), greater<char>());
	cout<<s1;
	sort(s1.begin(), s1.end());
	cout<<endl<<s1<<endl;

	//this is for integers sorting
	string s = "5262738";
	sort(s.begin(), s.end(), greater<int>());//---------------> in decreasing order.
	cout<<s;
	sort(s.begin(), s.end());//-------------------->in increasing order.
	cout<<endl<<s;
return 0;
}

