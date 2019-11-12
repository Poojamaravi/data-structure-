#include<iostreame.h>
#include<conio.h>
 void main()
 {
 int a[10][10],b[10][10],i,j,m,n;
 clsrcr();
 cout<<"Enter the order of the matrix :"<<endl;
 cout<<"No. of rows: "<<endl;
 cin>>n;
 cout<<"Columns :\n"<<endl;
 cin>>m;
 cout<<"Enter the matrix elements \n"<<endl;
 for(i=0;i<n-1;i++)
    {
    for(j=0;j<m-1;j++)
       {
       cin>>a[i][j];
       b[i][j]=a[i][j];
       }
    }
  cout<<"Matrix A was\n";
  for(i=0;i<n-1;i++)
     {
      for(j=0;j<m-1;j++)
	 {
	 cout<<"\n"<<a[i][j];
	 }
     }
  cout<<"Transpose of matrix a is \n");
     for(i=0;i<m-1;i++)
     {
      for(j=0;j<n-1;j++)
	 {
	 cout<<"\n"<<b[i][j];
	 }
     }
  getch();
  }