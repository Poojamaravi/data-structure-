#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int a[100],n,item,loc=-1;
  cout<<"Enter the number of element :"<<endl;
  cin>>n;
  cout<<"Enter the item number :"<<endl;
  for(int i=0;i<n-1;i++)
  {
   cin>>a[i];
  }
  cout<<"Enter the no. to be search :"<<endl;
  cin>>item;
  for(i=0;i<n-1;i++)
  {
    if(item==a[i])
    {
      loc=i;
      break;
    }

  }
  if(loc>=0)
    {
       cout<<"Dis found in position "<<item<<"\nLocation is "<<loc+1<<endl;
    }
  else
    {
      cout<<"Item does not exist "<<endl;
    }
   getch();
   }