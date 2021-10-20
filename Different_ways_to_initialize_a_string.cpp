#include<iostream>
using namespace std;
int main()
{char str1[]="HELLO";  
char str2[]={'H','E','L','L','O','\0'};
char str3[6];
str3[0]='H';
str3[1]='E';
str3[2]='L';
str3[3]='L';
str3[4]='O';
str3[5]='\0';
cout<<"str1 = "<<str1<<" and size = "<<sizeof(str1);  //size will be same for all = 6 bytes here
cout<<"\nstr2 = "<<str2<<" and size = "<<sizeof(str2);
cout<<"\nstr3 = "<<str3<<" and size = "<<sizeof(str3);
return 0;
}
