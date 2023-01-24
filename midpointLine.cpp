#include<stdio.h> 
//#include<conio.h>
#include <bits/stdc++.h>
#include<graphics.h>  
using namespace std;
void drawline(int x0, int y0, int x1, int y1)  
{  
    int dx, dy, p, x, y;  
    dx=x1-x0;  
    dy=y1-y0;  
    x=x0;  
    y=y0;  
    p=2*dy-dx;  
//    while(x<x1)  
int k;

if(dx>=dy)
{
	 k=dx;
}

else
{
 k=dy;
}

for(int i=0;i<=k;i++)
    {  
        if(p>=0)  
        {  
        
            cout<<x<<endl;
            cout<<"y"<<y<<endl;
            x=x+1;
            y=y+1;
            putpixel(x,y,7);  
//            y=y+1;  
            p=p+2*dy-2*dx;  
        }  
        else  
        
        {  
               cout<<x<<endl;
            cout<<"y"<<y<<endl;
            x=x+1;
            putpixel(x,y,7);  
            p=p+2*dy;}  
//            x=x+1;  
        }  
}  
int main()  
{  

	int gd=DETECT,gm;
	int i,j,k;
	char pathtodriver[]="";
	
	cout<<"jhgjfg";
	initgraph(&gd,&gm,pathtodriver);
	drawline(20,10,30,18);
	getch();
	closegraph();
	return 0;
 
}  





//
//
//
//
////1. Write a program to implement Bresenhams line drawing algorithm.
//#include<stdio.h>
//#include<graphics.h>
//void midpointline(int x0,int y0,int x1,int y1,int value)
//{
//	double dy=y1-y0;
//	double dx=x1-x0;
//	int d=2*dy-dx;
//	int incrE=2*dy;
//	int increNE=2*(dy-dx);
//	int x=x0;
//	int y=y0;
//	putpixel(x,y,value);
//	while(x<x1)
//	{ //choose E
//		if(d<0)
//		{
//			d+=incrE;
//			x++;
//		}
//		else
//		{
//			d+=increNE;
//			x++;
//			y++;
//		}
//		putpixel(x,y,value);
//	}
//}
//int main()
//{
//	int gd=DETECT,gm;
//	int i,j,k;
//	char pathtodriver[]="";
//	initgraph(&gd,&gm,pathtodriver);
//	midpointline(100,100,100,450,3);
//	getch();
//	closegraph();
//	return 0;
//}



//
//
//#include<iostream>
//#include<graphics.h>
//#include<stdlib.h>
//using namespace std;
//void bresenham(int x,int y,int x2,int y2)
//{
//	int dx,dy;
//	int p;
//	dx=(x2-x);
//	dy=(y2-y);
//	p=2*dy-dx;  		// p = decision point
//	
//	if(dx>=0 & dy>=0) 	//positive slope
//	{
//		if(dy>dx) 		//positive steep slope draw a line from left to rt
//		{
//			if(dx==0)
//			{
//				while(y<=y2)
//				{
//					putpixel(x,y,GREEN);
//					y++;
//					if(p<0){
//						p=p+2*dy;
//					}
//					else{
//							p=p+2*dy-2*dx;
//					}
//				}
//			}
//			else
//			{
//				while(x<=x2)
//				{
//					putpixel(x,y,GREEN);
//					x++;
//					if(p<0){
//						p=p+2*dy;
//					}
//					else{
//							p=p+2*dy-2*dx;
//							y++;	
//					}
//					
//				}
//			}
//		}
//		else if(dx>dy) 			//positive gradual slope
//		{
//			while(x<=x2)
//			{
//				putpixel(x,y,GREEN);
//				x++;
//					if(p<0){
//						p=p+2*dy;
//					}
//					else{
//							p=p+2*dy-2*dx;
//							y++;
//						}
//			}
//		}
//	}
//	else if(dy<0 || dx<0) 			//negative steep and gradual slope
//	{
//		swap(x,x2);
//		swap(y,y2);
//		while(x>x2)
//		{
//			putpixel(x,y,GREEN);
//				x--;
//					if(p<0){
//						p=p-2*dy;
//					}
//					else{
//							p=p-2*dy-2*dx;
//							y++;
//						}
//		}
//	}
//}
//int main()
//{
//	cout<<"\n\n\t --------------------- BRESENHAM'S LINE  DRAW ALGORITHM --------------------- ";
//	int gd=DETECT,gm;
//	
//		initgraph(&gd,&gm,(char*)"");
////		int x1,x2,y1,y2,num;
//
////		cout<<"\n\n\n\t ENTER THE COORDINATES VALUES x1, y1 :: ";
////		cin >> x1>>y1;
////		cout<<"\n\t ENTER THE COORDINATES VALUES x2, y2 :: ";
////		cin >> x2>>y2;
//		bresenham( 100,100,100,450);
//
//	/*  All cases coordinates values :-
//		bresenham( 100,100,200,400);	//steep coordinates value
//		bresenham( 100,400,200,100);	//steep coordinates value
//		bresenham( 50,300,400,200);		//gradual coordinates value
//		bresenham( 50,200,400,300);		//gradual coordinates value
//		bresenham( 100,100,350,100);	//horizontal line coordinates value
//		bresenham( 100,100,100,450);	//vertical line coordinates value*/
//	getch(); 
//	closegraph();
//	return 0;
//}
