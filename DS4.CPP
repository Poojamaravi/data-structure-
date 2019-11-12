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
	  cout<<"Enter i and j :"<<i<<j<<endl;
	  cin>>a[i][j];
	}
    }
  cout<<"Enter second matrix : "<<endl;
  for(i=1;i<=2;i++)
    {
      for(j=1;j<=2;j++)
	{
	cout<<"Enter the i and j :"<<i+1<<" "<<j+1<<endl;
	cin>>b[i][j];
	}
    }
  for(i=1;i<=2;i++)
    {
      for(j=1;j<=2;j++)
	{
	  s[i][j] = a[i][j] + b[i][j];
	}
     }
  cout<<"Matrix Addition is = \n";
  for(i=1;i<=2;i++)
    {
      for(j=1;j<=2;j++)
	{
	cout<<s[i][j];
	}
    }
  getch();
 }