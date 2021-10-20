#include<iostream>
using namespace std;
int main()
{char str[20];
int i=0;
cout<<"Enter the string : ";
cin>>str;
while(str[i]!='\0')
{cout<<str[i];
i++;
}
return 0;
}
