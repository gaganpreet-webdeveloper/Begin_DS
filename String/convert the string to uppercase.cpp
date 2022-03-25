//convert the string to uppercase

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
//		if(s[i]>='a' && s[i]<='z')      ----------> this is our logic there is inbuilt function to do this.
//		{
//			s[i] -= 32;
//		}
//	}
//	cout<<s;

transform(s.begin(), s.end(), s.begin(), ::toupper); //---------> remember to add algorithm header file
cout<<s;

return 0;
}

