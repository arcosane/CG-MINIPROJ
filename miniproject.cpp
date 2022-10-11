#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd,&gm,"");
    int i=0 , j=0 , k=5 , l=0;
    while(!kbhit())
    {
        circle(320,240,55);
        pieslice(320,240,0+i,1+i,55);
        pieslice(320,240,90+i,91+i,55);
        pieslice(320,240,180+i,181+i,55);
        pieslice(320,240,270+i,271+i,55);
        line(320,240,300,450);
        line(320,240,340,450);

        circle(120,290,15);
        pieslice(120,290,0+i,6+i,55);
        pieslice(120,290,90+i,95+i,55);
        pieslice(120,290,180+i,185+i,55);
        pieslice(120,290,270+i,275+i,55);
        line(120,290,100,450);
        line(120,290,140,450);

        circle(520,290,15);
        pieslice(520,290,0+i,6+i,55);
        pieslice(520,290,90+i,95+i,55);
        pieslice(520,290,180+i,185+i,55);
        pieslice(520,290,270+i,275+i,55);
        line(520,290,500,450);
        line(520,290,540,450);

        i++;
        line(0,450,640,450);
        delay(15);

        line(400+l,150,380+l,130+k);
        line(400+l,150,420+l,130+k);

        line(450+l,180,430+l,160+k);
        line(450+l,180,470+l,160+k);

        line(500+l,150,480+l,130+k);
        line(500+l,150,520+l,130+k);

        l++;
        if (l>200)
        {
            l=0;
        }
        k=-k;

        circle(100+j*3,180-j,25);
        setfillstyle(1,YELLOW);
        floodfill(100+j*3,180-j,WHITE);

        if(j>190)
            j=0;
        else
            j++;
        
        setfillstyle(6,6);
        floodfill(50,470,WHITE);
        delay(25);
        cleardevice();
    }
    closegraph();
    getch();
    return 0;
}