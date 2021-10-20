// copy a string into another string using inbuilt function (strcpy)
#include<iostream>
#include<string.h>
using namespace std;
int main()
{char str1[]="Harsh Raj Jha";
char str2[20];
strcpy(str2,str1);
cout<<"str1 = "<<str1;
cout<<"\nAfter copying str2 = "<<str2;
return 0;
}
