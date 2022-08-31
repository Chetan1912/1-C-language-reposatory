#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float solve1,solve2,root;
    printf("this program is for solve : ax^2+bx+c=0\n");
    printf("please enter a: ");
    scanf("%d",&a);
    printf("\nplease enter b: ");
    scanf("%d",&b);
    printf("\nplease enter c: ");
    scanf("%d",&c);
    if (((b*b)-4*(a*c))==0)
    {
        solve1=-(float)b/(2*a);
        printf("the soln of eqn %dx^2+(%d)x+(%d)=0 : %0.4f ",a,b,c,solve1);
    }
    
    else if (((b*b)-4*(a*c))>0)
    {    root= sqrt((b*b)-4*(a*c));
         solve1=(-b-root)/(2*a);
         solve2=(-b+root)/(2*a);
        printf("the soln of eqn %dx^2+(%d)x+(%d)=0 : %0.4f \n",a,b,c,solve1);
        printf("the second soln of eqn %dx^2+(%d)x+(%d)=0 : %0.4f ",a,b,c,solve2);
    }
    
    else if (((b*b)-4*(a*c))<0)
    {
        printf("b^2-4ac<0 so no soln for it\n");
    }
    
    return 0;
}