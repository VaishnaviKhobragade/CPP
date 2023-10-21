#include <iostream>
using namespace std;

int main() {

  int numbers[] = {7, 5, 6, 12, 35,85,56,72,35,97,102};
int sum=0;
float avg;
int l;
l=sizeof(numbers)/sizeof(numbers[0]);
for(int i; i<l; i++)
{
	sum+=numbers[i];
}
  avg=sum/l;
  cout<<"Sum is "<<sum<<endl;
  cout<<"Avg is "<<avg<<endl;
}
