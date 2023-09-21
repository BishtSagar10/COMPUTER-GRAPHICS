#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main(){
    int gd=DETECT;
    int gm;
    int i;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    for(i=20;i<160;i=i+10){
	setcolor(i/10);
	circle(220,200,10+i);
    }
    getch();
    closegraph();
}