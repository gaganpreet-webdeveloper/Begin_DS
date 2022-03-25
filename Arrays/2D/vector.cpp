// vector
# include<iostream>
# include<vector>
using namespace std;
void input(vector<int>v &a)
{
	int elements;
	cout<<endl<<"Enter the Array elements : ";
	for(int i = 0; i<a.size(); i++)
	{
		cin>>elements;
		v.push_back(elements);
	}
}
int main()
{
	vector<int> v;
	int size, elements;
	cout<<"Enter the Size of the Array : ";
	cin>>size;
	
	for(int i = 0; i<size; i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}

