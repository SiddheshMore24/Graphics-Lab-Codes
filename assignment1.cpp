#include <graphics.h>
#include <libguile.h>


//int gd=DETECT,gm; 
//initgraph(&gd,&gm,NULL);

/*  demo.c*/
#include<graphics.h> 
int main()
{
   int gd = DETECT,gm,left=100,top=200,right=200,bottom=200,x= 300,y=150,radius=50;
   initgraph(&gd,&gm,NULL);
   
   
   line(100,50,50,100);
   line(100,50,150,100);
   line(400,50,450,100);
   line(50,100,450,100);
   line(100,50,400,50);
   rectangle(50, 300, 150, 100);// left rect
   rectangle(150, 100, 450, 300);//right big rect
   rectangle(75, 300, 125, 200);//door
   rectangle(250, 250, 350, 150);//windoew
   
   /*rectangle(left, top, right, bottom);
   circle(x, y, radius);
   bar(left + 300, top, right + 300, bottom);
   line(left - 10, top + 150, left + 410, top + 150);
   ellipse(x, y + 200, 0, 360, 100, 50);*/


   delay(5000);
   closegraph();
   return 0;
}
