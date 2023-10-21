#include<iostream>
using namespace std;
int main()
{
	int arr[]={13, 17,7,55,20,2,35,57};
	int max=0;
	int l= sizeof (arr)/ sizeof (arr[0]);
	for (int i=0;i<l;i++)
	{
		if (max<arr[i])
		max=arr[i];
	 } 
	 cout<<max<<endl;
}
