// change the character of the entered index by the User.
#include <iostream>

using namespace std;

int main()
{
    int index;
    char ch;
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    cout<<"Enter a index number : ";
    cin>>index;
    cout<<"Enter a character : ";
    cin>>ch;
    for(int  i = 0; i<s.size(); i++)
    {
        if(index == i)
        {
            s[i] = ch;
        }
    }
    cout<<endl<<"Ater update string is : "<<s;
    
    return 0;
}

