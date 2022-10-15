#include<stdio.h>
int main()
{


int base1,base2,height1,height2,height3,longbase,shortbase,side,majorradius,      minorradius,r,area1,area2,area3,area4,area5;
printf("Enter the base and height for parallelogram:\n");
scanf("%d %d",&base1,&height1);
area1=base1*height1;
printf("Area of parallelogram is:%d\n",area1);
printf("Enter the height, longbase, shortbase for trapezoid:\n");
scanf("%d %d %d",&height2,&longbase,&shortbase);
area2=0.5*(longbase+shortbase)*height2;
printf("Area of trapezoid is:%d\n",area2);
printf("Enter the base and side for rhombus:\n");
scanf("%d %d",&base2,&side);
area3=base2*side;
printf("Area of rhombus is:%d\n",area3);
printf("Enter the major radius and minor radius for ellipse:\n");
scanf("%d %d",&majorradius,&minorradius);
area5=3.14*majorradius*minorradius;
printf("Area of ellipse is:%d\n",area5);
printf("Enter the radius of sphere:\n");
scanf("%d %d",&r,&r);
area4=4*3.14*r*r;
printf("Area of sphere is:%d\n",area4);
return 0;
}

