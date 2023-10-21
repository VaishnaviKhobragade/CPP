#include<iostream>
using namespace std;
int main()
{
	int arr[]={13, 17,7,55,20,2,35,57};
	int max=0;
	 int second_max=0;
	int l= sizeof (arr)/ sizeof (arr[0]);
	for (int i=0;i<l;i++)
	{
		if (max<arr[i])
		max=arr[i];
	 } 
	 cout<<max<<endl;
	
	for (int i=0;i<l;i++)
	{
		if (second_max<arr[i] && arr[i]!=max )
		second_max=arr[i];
       
//       	if( second_max!=max ){
//       		if(arr[i]>second_max){
//       		   second_max=arr[i];	
//			}
//       	   	
//		}


	 } 
	 cout<<second_max<<endl;
	 
}
