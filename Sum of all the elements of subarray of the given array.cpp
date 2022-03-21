//it gives maximum sum of the subarrays of the given Array and also return the indexes of elements who gave us mamimum sum.
// this is the bruteforce approch and time coplexity is [O(n3)].
//#include<iostream>
//#include<math.h>
//#include<climits>
//using namespace std;
//
//int main()
//{
//    int size = 5;
//    int t1, t2;
//    int maxno = INT_MIN;
//    int arr[] = {-1, 2, 3, 8, 1};
//    for(int i = 0; i<size; i++) // starting position
//    {
//        for(int j = i; j<size; j++) //ending position
//        {
//            int sum = 0;
//            for(int k = i; k<=j; k++) //printing elements between starting and ending elements.
//            {
//                cout<<arr[k]<<" ";
//                sum += arr[k];
//            }
//            if(sum>maxno){
//                maxno = sum;
//                t1 = i;
//                t2 = j;
//            }
//            cout<<endl<<"sum is : "<<sum<<endl;
//            cout<<endl;
//        }
//    }
//    cout<<"maxno : "<<maxno;
//    cout<<endl<<t1<<" "<<t2;
//    return 0;
//}



//optimal way---------------> based on kadane's algorithm.
#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
	int size = 5;
	int current_sum = 0;
	int maxno = INT_MIN;
	int arr[] = {3, 5, -3, 5, 1};
	for(int i = 0; i<size; i++)
	{
		current_sum += arr[i];
		if(current_sum<0)
		{
			current_sum = 0;
		}
		maxno = max(maxno, current_sum);
	}
	cout<<"Maximum sum is : "<<maxno;
}
