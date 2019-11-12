#include<iostreame.h>
#include<conio.h>
 void main()
 {
    int a[100],n,i,j,temp;
    clrscr();
    cout<<"How many elements enters "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array :"<<endl;
	 for(i=0;i<=n-1;i++)
	    {
	    cin>>a[i];
	    }
	 for(i=0;i<=n-1;i++)
	 {
	    for(j=0;j<=n-1;j++)
		{
		if(a[j]<a[j+1])
		    {
		    temp=a[j];
		    a[j]=a[j+1];
		    a[j+1]=temp;


		    }
		}
	 }
  cout<<"Element of the array after the sorting :\n";
  for(i=0;i<=n-1;i++)
      {
      cout<<"\n"<<a[i];
      }
  getch();
  }