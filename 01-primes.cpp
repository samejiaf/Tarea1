#include <iostream>
#include <math>
#include <conio>

double prime (void);

void main()
{
 cout<<endl<<"Cantidad de numeros primos entre 500 y 12100 es "<<prim()<<endl;

 getch();
}

double prime (void)
{

 float p,n=0;
 int i,d,t;

 for (p=501;p<=12100;p++)
  {
   t=p;
   for (i=3;i<=p;i++)
    {
     d=t%i;

     if (d==0)
      {
       n++;
      }
    }
  }

return(n);
}
