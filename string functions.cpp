// String Functions
# include<iostream>
# include<string>
using namespace std;
int main()
{
	string s = "Hello gagan";  /*----> if we put string value by ourself then we did not require  'getline()', 
	                                       otherwise if we take input from user than we require getline() method.*/
	cout<<s;
	
//	Methods

/*1. getline()---------> this is use when we take input from user beacuse it accepts all the sentence otherwise 
                      if we did not use then it read only value before space.*/

string s;
cout<<"Enter a string : ";
getline(cin, s);
cout<<s;

/* 2. compare() -------------> it compares the two strings*/
string s1 = "Ab";
string s2 = "AB";
if(s1.compare(s2)==0)
{
	cout<<"strings are equal";
}
else{
	cout<<"strings are not equal";
}

/* 3. clear() --------------> it clears the string value*/

string s = "this clear method clears the string value";
cout<<s;
s.clear();
cout<<s;

/* 4. erase() -----------> it erase the particular indexes values*/

string s = "it erase the particular indexes values";
cout<<s<<endl;
s.erase(3, 7);
cout<<s;


/* 5. substr() ------------>it will take out substring value from string*/

string s = "my name is khan";
cout<<s<<endl;
string s2 = s.substr(3, 5);
cout<<endl<<s2;

/* 6. insert() --------> this wil insert the value in the string*/

string s = "this wil insert the value in the string";
cout<<s<<endl;
s.insert(4, " Gagan is the best");
cout<<endl<<s;

/* 7. find()  -----------> this will find the index value of the finding string which we want to search in the string*/

string s = "this will find the value in the string which we want to search in the string";
int c = s.find("will");
cout<<c;

/* 8. empty()----------->this tell us wheater a string is empty or not*/

string s = "";
if(s.empty())
{
	cout<<"String is empty";
}
else{
	cout<<"string is not empty";
}

return 0;
}

