using namespace std;
#include<iostream>
#include<string.h>
int main()
{char str1[20],str2[20];
int i,j;
cout<<"Enter the word : ";
cin>>str1;
cout<<"Enter the word to concatenate with the above word : ";
cin>>str2;
strcat(str1,str2);
cout<<"After concatenation : "<<str1;
return 0;
}
