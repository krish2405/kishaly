#include <graphics.h>
#include<iostream>
#include <math.h>
#include<dos.h>
using namespace std;

void main()
{
    float x,y,x1,y1,x2,y2,dx,dy,m;
    int i,gd=DETECT,gm;

    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    cout<<"Enter the value of x1 and y1";
    cin>>x1>>y1;

    cout<<"Enter the value of x2 and y2";
    cin>>x2>>y2;

    dx=abs(x2-x1);
    dy=abs(y2-y1);


    if(dx>=dy)
    {
        m=dx;
    }
    else
    m=dy;

    dy=dx/m;
    dy=dy/m;

    x=x1;
    y=y1;

    i=1;
    while(i<=m)
    {
        putpixel(x,y,5);
        x=x+dx;
        y=y+dy;
        i=i+1;
        delay(20);
        
    }

    closegraph();
}




