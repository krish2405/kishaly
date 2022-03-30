#include<iostream>
#include<conio.h>
#include<graphics.h>
int main() 
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtextxy(20,20,"Kishlay Kumar, URN: 1905013 , CSE-A2");

line(100,200,100,400);
line(100,200,200,400);

circle(100,200,50);
circle(100,400,50);
circle(200,200,50);
circle(200,400,50);
line(200,200,200,400);

getch();
closegraph();
return 0;
}