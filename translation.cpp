#include <graphics.h> 
#include <cmath>
#include<iostream>

void translation()
{ int gd = DETECT,gm,left=100,top=200,right=200,bottom=200,x= 150,y=150,radius=50,degrees=0;
   initgraph(&gd,&gm,NULL);

   rectangle(50,50,150,120);
   delay(2000);
   cleardevice();
   int constant = 200;
   rectangle(50+constant,50+constant,150+constant,120+constant);
   delay(10000);
   closegraph();

}
void scalingUsingMultiplication()
{  int gd = DETECT,gm,left=100,top=200,right=200,bottom=200,x= 150,y=150,radius=50,degrees=0;
   initgraph(&gd,&gm,NULL);
   rectangle(200,200,400,300);

   delay(5000);
   double constant = 1.3;
   cleardevice();
   rectangle(200*constant,200*constant,400*constant,300*constant);
   delay(5000);
   closegraph();

}
void scaling()
{  int gd = DETECT,gm,left=100,top=200,right=200,bottom=200,x= 150,y=150,radius=50,degrees=0;
   initgraph(&gd,&gm,NULL);
//    rectangle(200,200,400,300);

//    delay(500);
//    double constant = 50;
//    cleardevice();
   for (int i = 1; i < 100; i+=3)
   {
    rectangle(200-i,200-i,400+i,300+i);
    circle(((200-i)+(400+i))/2, ((200-i)+(300+i))/2,((300+i)-(200-i))/2);
     delay(2000);
    /* code */
   }
   
   
//    delay(5000);
   closegraph();

}


using namespace std;
int main()
{  int gd = DETECT,gm,left=100,top=200,right=200,bottom=200,x= 150,y=150,radius=50,degrees=0;
   initgraph(&gd,&gm,NULL);
   while (1)
   {
    cout<<"Choose the choice: 1) Translation, 2) scaling 3) exit "<<endl;
    int ch;
    cin>>ch;

    switch (ch)
    {
    case 1:
        translation();
       
        break;
    case 2:
         scalingUsingMultiplication();
      
        break;
    case 3:
        goto hi;
        break;            
    
    default:
        cout<<"Please provide correct input"<<endl;
        break;
    }
    /* code */
   }

   hi:
   
   

   // /*rectangle(left, top, right, bottom);
   // circle(x, y, radius);
   // bar(left + 300, top, right + 300, bottom);
   // line(left - 10, top + 150, left + 410, top + 150);
   // ellipse(x, y + 200, 0, 360, 100, 50);*/


   return 0;
}