#include <stdio.h>
struct point
{
    float x;
    float y;
};
struct rect
{
    struct point lleft;
    struct point uright;
};
float area(struct rect r)
{
    float length, width;
    length = r.uright.x - r.lleft.x;
    width = r.uright.y - r.lleft.y;
    return length * width;
}
int main()
{
    struct rect rs;
    float arear;
    printf("please enter the uper right points (x,y) in rectangle :  ");
    scanf("%f %f", &rs.uright.x, &rs.uright.y);

    printf("\nplease enter the lover left points (x,y) in rectangle : ");
    scanf("%f %f", &rs.lleft.x, &rs.lleft.y);
    arear = area(rs);
    printf("AREA = %0.4f", arear);
}