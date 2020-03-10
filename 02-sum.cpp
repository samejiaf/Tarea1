#include<iostream>
#include<math>
#include<conio>
#include<iomanip>

void main()
{
 float N,f,i,t;

 cout<<"--------------------------"<<endl;
 cout<<"  N"<<setw(13)<<"f(N)"<<endl;
 cout<<"--------------------------"<<endl;

 for (N=1;N<=1000;N++)
  {
   t=0;

   for (i=1;i<=N;i++)
    {
     f=(1/i);
     t+=f;
    }
   cout<<setw(7)<<N<<setw(13)<<t<<endl;
  }

 getch();
}
