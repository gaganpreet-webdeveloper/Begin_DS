#include<iostream>
#include<vector>
using namespace std;
void input(vector<int> v, int element)
{
    cout<<"eneter a number : ";
    for(int i = 0; i<4; i++)
    {
        //cin>>element;
        v.push_back(element);
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++)
    {
        /* code */cout<<v[i]<<endl;
    }
    
}
int main()
{
    vector<int> v;
    int element=12;
    // v.push_back(23);
    // v.push_back(3);
    // v.push_back(43);
    // for(int i = 0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    input(v , element);

    return 0;
}