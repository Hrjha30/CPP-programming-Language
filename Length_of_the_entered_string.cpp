#include<iostream>
using namespace std;
#include<string.h>
int main()
{char str[50];
int len;
cout<<"Enter the word : ";
gets(str);
len=strlen(str);
cout<<"Length of "<<str<<" is : "<<len;
return 0;
}
