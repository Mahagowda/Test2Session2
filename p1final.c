#include<stdio.h>
#include<math.h>
void input(float*x1,float*y1,float*x2,float*y2)
{
  printf("enter 2 points\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  *area= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("the distance between %0.1f %0.1f and %0.1f %0.1f is %0.1f\n",x1,y1,x2,y2,area);
}
int main()
{
  float x1,y1,x2,y2,area;
input(&x1,&y1,&x2,&y2);
find_distance(x1,y1,x2,y2,&area);
output(x1,y1,x2,y2,area);
return area;
}
