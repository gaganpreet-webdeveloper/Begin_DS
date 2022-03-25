//convert the string to lowercase

# include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s ;
	cout<<"Enter a string : ";
	getline(cin, s);
//	for(int i = 0; i<s.size(); i++)
//	{
//		if(s[i]>='A' && s[i]<='Z')   ----------> this is our logic there is inbuilt function to do this.
//		{
//			s[i] += 32;
//		}
//	}
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout<<s;

return 0;
}

