#include<iostream>
using namespace std;
int main()
{
int i,j,a[3][3],b[3][3],c[3][3];
cout<<"Enter the elements of matrix 1 : ";
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{cin>>a[i][j];
	}
		cout<<"\n";
}

printf("\nEnter the elements of matrix 2 : ");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{cin>>b[i][j];
	}
	cout<<"\n";
}
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{c[i][j]=a[i][j]+b[i][j];
	}
		cout<<"\n";
}
cout<<"\nSum of matrix 1 and 2 is : ";
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{cout<<c[i][j]<<" "; 
	}
	cout<<"\n";
}
return 0;
}
