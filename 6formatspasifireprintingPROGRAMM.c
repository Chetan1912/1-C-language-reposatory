#include <stdio.h>
int main()
{  float i1,i2;
  printf("please enter the float no you want to convert into integer and frictional value\n");
  scanf("%f",&i2);
  i1=i2-(int)i2;
  printf("THE INTEGER OF YOUR FLOAT NO IS %d\n",(int)i2);
  printf("THE FRICTIONAL VALUE OF YOUR FLOAT NO IS %f\n\n",i1);
  //THE PROGRAM FOR FLLOATING POINT NO TO CLOASET INTEGER
  printf("**********************************************************\n\n");
  if (i1>=0.5)
  {
      printf("your cloasest integer is %d",(int)i2+1);
  }
  else
  {
      printf("your cloasest integer is %d",(int)i2);
  }
  

    return 0;
}