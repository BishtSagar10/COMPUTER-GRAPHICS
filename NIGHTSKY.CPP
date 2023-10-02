#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
void main(){
	int gd=DETECT,gm;
	int i,j;
	int x,y;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("NAME:SAGAR BSISHT\t\tENROLL NO.:05114202021");
		//Night Sky effect
		for(i=0;i<=500;i=i+1){
			x=rand()%650;
			y=rand()%225
			;
			putpixel(x,y,15);
		}
		//moon
		ellipse(440,100,160,330,37,30);
		ellipse(439,100,170,340,35,50);

		//stationary cycle
		circle(100,440,35);
		circle(220,440,35);
		arc(100,440,0,180,39);
		arc(220,440,0,180,39);
		line(100,375,220,375);
		line(220,440,220,370);
		line(200,370,240,372);
		line(100,440,100,370);
		line(100,440,150,440);
		line(150,440,220,385);
		line(85,370,115,370);

		//Hut
		line(350,475,350,330);
		line(440,475,440,330);
		line(600,475,600,330);
		line(350,475,600,475);
		line(350,330,600,330);
		line(440,330,395,280);
		line(350,330,395,280);
		line(395,280,550,280);
		line(600,330,550,280);
		line(365,475,365,400);//door
		line(425,475,425,400);//door
		line(365,400,425,400);//door


	getch();
	closegraph();
}