#include <iostream>
using namespace std;
#include<string.h>

int main() {
 string word;
 cout<<"enter the word"<<endl;
 cin>>word;
 getline(cin,word);
 int l=word.length();
 for(int i=l;i>=0;i--)
//int l=strlen(word);
//string copy=strcpy(word);
//string reve=strrev(word);
 
 	cout<<word<<endl;
 	cout<<l<<endl;
 	cout<<copy<<endl;
 	cout<<reve<<endl;
}

