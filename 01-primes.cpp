#include <iostream>
#include <math>
#include <conio>

float prime (void);
float sum (void);

void main()
{
 cout<<endl<<"Cantidad de numeros primos entre 500 y 12100 es "<<prime()<<endl;

 cout<<endl<<"La suma de los numeros primos entre 500 y 12100 es "<<sum()<<endl;

 getch();
}

float prime (void)
{
 float p,n=0,f;
 int i,d,t;

 for (p=501;p<=12100;p++)
  {
   f=0,
   t=p;
   for (i=3;i<=p;i++)
    {
     d=t%i;

     if (d==0)
      {
       f++;
      }
    }
   if (f==1) n++;
  }

return(n);
}

float sum (void)
{
 float p,n=0,f;
 int i,d,t;

 for (p=501;p<=12100;p++)
  {
   f=0,
   t=p;
   for (i=3;i<=p;i++)
    {
     d=t%i;

     if (d==0)
      {
       f++;
      }
    }
   if (f==1) n=n+p;
  }

return(n);
}
