#include <stdio.h>
#include<math.h>
int main() 
{
  float a,b,c,r1,r2,d,real,img;
  printf("Enter 3 non zero coefficients\n");
  scanf("%f%f%f",&a,&b,&c);
  if(a==0)
  {printf("coefficient cannot be zero.....\n");
  printf("please try again....\n");
  return 1;
  }
  d=(b*b)-(4.0*a*c);
  if(d==0)
  {printf("the roots are real and equal\n");
  r1=r2=(-b)/(2.0*a);
  printf("the roots are r1=r2=%f\n",r1);
  }
  else if (d>0)
  {
    printf("the roots are real and distinct\n");
    r1=(-b+sqrt((d)/(2.0*a)));
    r2=(-b-sqrt((d)/(2.0*a))); 
    printf("the roots are r1=%f and r2=%f\n",r1,r2);
  }
  else
  {
    printf("the roots are imaginary\n");
    real=(-b)/(2.0*a);
    img=sqrt(-d)/(2.0*a);
    printf("the roots are r1=%f+i%f\n",real,img);
    printf("r2=%f-i%f\n",real,img);
  }
  return 0;
}