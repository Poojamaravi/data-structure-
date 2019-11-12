#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int a[2][2],b[2][2],s[2][2];
  int i,j,k;

  cout<<"Enter first matrix "<<endl;
  for(i=1;i<=2;i++)
    {
      for(j=1;j<=2;j++)
	{
	  cout<<"Enter i and j :"<<endl;
	  cin>>i>>j;
	}
    }
  cout<<"Enter second matrix : "<<endl;
  for(i=1;i<=2;i++)
    {
      for(j=1;j<=2;j++)
	{
	cout<<"Enter the i and j :"<<endl;
	cin>>i>>j;
	}
    }
  for(i=1;i<=2;i++)
    {
      for(j=1;j<=2;j++)
	{
	  s[i][j]=0;
	    for(k=1;k<=2;k++)
	      {
		s[i][j]=s[i][j]+a[i][k]*b[i][j];
	      }
	 }
    }
  cout<<"Matrix multipication is = "<<endl;
  for(i=1;i<=2;i++)
    {
      for(j=1;j<=2;j++)
	{
	cout<<s[i][j];
	}
    }
  getch();
 }