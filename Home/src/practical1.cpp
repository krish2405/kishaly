#include<iostream>

#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
outtextxy(10,10,"write a program to print pixel on the screen");
outtextxy(30,30,"Kishlay kumar, URN: 1905013 , CSE-A2");
putpixel(125,366,WHITE);
getch();
closegraph();
return 0;
}
