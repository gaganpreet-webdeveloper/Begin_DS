
//it is done by ncr (combination).
#include <iostream>
#include<cmath>
using namespace std;
int fact(int n){
	int f = 1;
	for(int i = 1; i<=n; i++){
		f = f * i;
	}
	return f;
}
int main()
{
    int num;
    cin>>num;
    for(int i = 0; i<num; i++){
        cout<<endl;
        for(int j = 0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
    }
}
