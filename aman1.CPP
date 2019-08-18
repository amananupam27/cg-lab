#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>
void main()
{
int gd=DETECT,gm,x1,y1,x2,y2,x,y,c;
float m;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter starting points\n");
printf("Enter x1=");
scanf("%d",&x1);

printf("Enter y1=");
scanf("%d",&y1);

printf("\nEnter ending points\n");
printf("Enter x2=");
scanf("%d",&x2);
printf("Enter y2=");
scanf("%d",&y2);

m=float(y2-y1)/(x2-x1);
c=y1-(m*x1);
x=x1;
y=y1;
while(x<=x2 && y<=y2)
{
putpixel(x,y,15);
if(abs(m)<=1)
{
x=x+1;
y=(m*x)+c;
}

else
{
y=y+1;
x=(y-c)/m;
}

}

//line(100,100,200,200);
getch();
}