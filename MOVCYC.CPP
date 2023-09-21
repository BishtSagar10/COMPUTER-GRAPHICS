#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main(){
    int gd=DETECT;
    int gm;
    int i;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    for(i=0;i<500;i++){
	circle(100+i,300,35);
	circle(220+i,300,35);
	arc(100+i,300,0,180,39);
	arc(220+i,300,0,180,39);
	line(100+i,245,220+i,245);
	line(220+i,300,220+i,230);
	line(200+i,230,240+i,232);
	line(100+i,300,100+i,235);
	line(100+i,300,150+i,300);
	line(150+i,300,220+i,245);
	line(85+i,235,115+i,235);
	delay(30);
	cleardevice();
    }
    getch();
    closegraph();
}