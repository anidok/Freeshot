/*
Copyright (c) 2014 Vinayak Mehta <vmehta94@gmail.com>

This file is licensed under the MIT License.
*/
#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<process.h>
#include<math.h>
void setgraph()
{
	int mode,driver=DETECT;
	initgraph(&driver,&mode," ");
}
void instructions();
void game();
void main()
{
	//MAIN SCREEN
	setgraph();
	setbkcolor(15);
	setcolor(RED);
	settextstyle(4,0,8);
	outtextxy(20,20,"NBA Live 2011");
	settextstyle(3,0,4);
	outtextxy(300,420,"c MacroSoft Inc.2011");

	circle(307,445,10);

	setfillstyle(1,BLUE);
	bar(200,350,400,370);
	for(int x=2;x<10;x++)
	{
		if(x%2==0)
			setfillstyle(1,GREEN);
		else
			setfillstyle(1,15);
		for(int i=205;i<395;i+=15)
		{	bar(i,353,i+10,367);
			delay(50);
		}
	}
	settextstyle(4,0,3);
	outtextxy(123,380,"PRESS ANY KEY TO CONTINUE");
	getch();
	cleardevice();
	settextstyle(3,0,4);
	outtextxy(300,420,"c Macrosoft Inc.2011");

	circle(307,445,10);

	settextstyle(4,0,8);
	outtextxy(140,20,"Main Menu");
	setcolor(BLUE);
	settextstyle(1,0,4);
	outtextxy(195,200," 1. Start Game");
	outtextxy(195,230," 2. Instructions");
	outtextxy(195,260," 3. Exit");

	circle(80,380,45);
	setfillstyle(1,6);
	floodfill(50,385,1);
	line(80,335,80,425);
	arc(30,380,300,63,30);
	arc(130,380,117,240,30);

	circle(560,380,45);
	setfillstyle(1,6);
	floodfill(560,380,1);
	line(560,335,560,425);
	arc(510,380,300,63,30);
	arc(610,380,117,240,30);


	char c=getch();
	if(c=='1')
		game();
	else if(c=='2')
		instructions();
	else if(c==27||'4')
		exit(0);
	closegraph();

}
void instructions()
{
	clrscr();
	setgraph();
	setbkcolor(15);
	setcolor(RED);
	settextstyle(4,0,5);
	outtextxy(25,30,"INSTRUCTIONS:");
	setcolor(BLUE);
	settextstyle(0,0,2);
	outtextxy(25,100,"The aim of the game is to score");
	outtextxy(25,130,"a total of 10 baskets.");
	outtextxy(25,160,"Difficulty increases with each successful basket.");
	settextstyle(0,0,1);
	outtextxy(25,200,"Baskets can be scored by throwing");
	outtextxy(25,220,"the ball with appropriate power.");
	outtextxy(25,250,"Press 'X' or 'ENTER' at the right time to choose power");
	outtextxy(25,270,"The Points increase by 2 with every Consecutive Basket.");
	outtextxy(25,320,"If you are able to stop the ball in the right area,");
	outtextxy(25,340,"then choose the right angle at which the ball has to be shot.");
	outtextxy(25,360,"Appropriate Area=GREEN Band.");
	outtextxy(25,380,"PRESS X TO START THE GAME");

	setfillstyle(1,YELLOW);
	bar(600,350,610,390);
	setfillstyle(1,GREEN);
	bar(600,390,610,400);
	setfillstyle(1,RED);
	bar(600,400,610,440);
	getch();
    	if(getch()=='x'||getch()=='X')
	    game();
	else if(getch()==27)
	    exit(0);
	closegraph();
}
void game()
{
	//GAME SCREEN
	setgraph();

	setbkcolor(0);
	setcolor(RED);
	settextstyle(4,0,5);
	outtextxy(25,30,"CHOOSE YOUR TEAM :");
	setcolor(1);
	settextstyle(0,0,2);
	outtextxy(25,100,"1. New York Knicks");
	setcolor(2);
	outtextxy(25,130,"2. Boston Celtics");
	setcolor(3);
	outtextxy(25,160,"3. Orlando Jazz");
	setcolor(5);
	outtextxy(25,190,"4. Pheonix Suns");
	setcolor(11);
	outtextxy(25,220,"5. New Orleans Hornets");
	setcolor(12);
	outtextxy(25,250,"6. Miami Heat");
	setcolor(14);
	outtextxy(25,280,"7. Los Angeles Lakers");
	setcolor(15);
	outtextxy(25,310,"8. Chicago Bulls");
	char e=getch();
	cleardevice();
	int col;
	settextstyle(0,0,2);
	switch (e)
	{
		case '1':col=1;
			setcolor(col);
			outtextxy(10,10,"New York Knicks");
			break;
		case '2' :col=2;
			setcolor(col);
			outtextxy(10,10,"Boston Celtics");
			break;
		case '3' :col=3;
			setcolor(col);
			outtextxy(10,10,"Orlando Jazz");
			break;
		case '4' :col=5;
			setcolor(col);
			outtextxy(10,10,"Pheonix Suns");
			break;
		case '5' :col=11;
			setcolor(col);
			outtextxy(10,10,"New Orleans Hornets");
			break;
		case '6' :col=12;
			setcolor(col);
			outtextxy(10,10,"Miami Heat");
			break;
		case '7' :col=14;
			setcolor(col);
			outtextxy(10,10,"Los Angeles Lakers");
			break;
		case '8' :col=15;
			setcolor(col);
			outtextxy(10,10,"Chicago Bulls");
			break;
	}





	int k=0;
	setfillstyle(1,6);
	bar(0,280,640,480);//COURT
	setfillstyle(1,YELLOW);
	bar(200,300,210,340);
	setfillstyle(1,GREEN);
	bar(200,340,210,350);
	setfillstyle(1,RED);
	bar(200,350,210,390);
	setcolor(15);
	line(320,280,320,480);
	ellipse(0,360,0,360,50,50);
	ellipse(320,360,0,360,50,30);
	ellipse(640,360,0,360,50,50);
	setfillstyle(1,RED);
	bar(0,230,640,280);//NBA
	settextstyle(0,0,2);
	setcolor(15);
	for(int i=80;i<=500;i+=80)
	       outtextxy(i,255,"NBA");
	setfillstyle(1,14);
	bar(600,120,610,360);//BASKET
	setcolor(15);
	for(i=10,k=0;i>0;i--,k+=5)
	       ellipse(575,120+k,0,360,15+i,10);//BASKET
	bar(30,120,40,360);//BASKET
	setcolor(15);
	for(i=10,k=0;i>0;i--,k+=5)
	       ellipse(65,120+k,0,360,15+i,10);//BASKET
	//PLAYER
	circle(145,240,12);
	setfillstyle(1,col);
	floodfill(145,240,15);
	rectangle(145,252,147,390);
	floodfill(146,260,15);
	line(146,260,165,295);
	line(165,295,178,295);
	setfillstyle(1,15);

	circle(50,437,30);
	circle(50,437,33);
	settextstyle(6,0,2);
	outtextxy(40,406,"EA");
	outtextxy(25,426,"Sports");
	rectangle(30,45,150,80);
	settextstyle(4,0,2);
	outtextxy(34,47,"SCORE: ");

	//game loop
	char str[5],quit;
	int m=0,g=1;
	for(int end=1;end>0,g<=10;end++)
	{
	int x=317,y=0;
	for(;;x+=y)
	{
			setcolor(15);
			circle(173,x,16);
			setfillstyle(1,15);
			floodfill(173,x,15);
			delay(120-10*g);
			circle(173,x,16);
			setfillstyle(1,6);
			floodfill(173,x,6);

		 if(x>=385)
			y=-2;
		 else if(x<=317)
			y=2;
		 if(kbhit())
		 {
			char ch=getch();
			if(ch=='x'||ch=='X'||ch==13)
			break;
			else if(ch==27)
			{
				cleardevice();
				setbkcolor(BLUE);
				setcolor(GREEN);
				settextstyle(4,0,2);
				outtextxy(150,100,"GAME OVER");
				outtextxy(150,150,"YOUR FINAL SCORE IS : ");
				itoa(m,str,10);
				outtextxy(150,200,str);
				delay(2000);
				outtextxy(150,250,"WANNA PLAY AGAIN ? (Y/N) : ");
				quit=getch();
				if(quit=='y'||quit=='Y')
					game();
				else if(quit=='n'||quit=='N')
					exit(0);
			}
		 }

	 }


	 int t,o;
	 if(x<340)
		t=13;
	 else if(x<350)
		t=17;
	 else
		t=19;
		o=t;
	int xx=160,yy=125,b=0;
	char v[2];
	if(t==17)
	{
		arc(145,210,0,90,100);
		line(145,210,145,110);
		line(145,210,245,210);


		for(;xx>0;)
		{
			xx+=b;
			yy+=b;
			setcolor(RED);
			line(150,205,xx,yy);
			if(xx==200)
				delay(100);
			else
				delay(250);
			setcolor(0);
			line(150,205,xx,yy);
			if(xx==200)
				delay(100);
			else
				delay(250);
			if(xx==160)
				b=40;
			else if(xx==240)
				b=-40;
			if(kbhit())
		 {
			char ang=getch();
			if(ang=='x'||ang=='X'||ang==13)
			{
				setfillstyle(1,0);
				bar(145,110,245,210);
				break;
			}
			else if(ang==27)
			{
				cleardevice();
				setbkcolor(15);
				setcolor(RED);
				settextstyle(4,0,2);
				outtextxy(150,100,"GAME OVER");
				outtextxy(150,150,"YOUR FINAL SCORE IS : ");
				itoa(m,str,10);
				outtextxy(150,200,str);
				delay(2000);
				outtextxy(150,250,"WANNA PLAY AGAIN ? (Y/N) : ");
				quit=getch();
				if(quit=='y'||quit=='Y')
					game();
				else if(quit=='n'||quit=='N')
					exit(0);
			}
		}
	}


	 if(xx==240)
		t=13;
	 else if(xx==200)
		t=17;
	 else if(xx==160)
		t=19;
	 o=t;
	}


	int p=145,q=200;
	for(int kk=0;q<210&&p<550;t-=1)
	{
	      setcolor(15);
	      p+=15;
	      q-=t;
	      circle(p,q,16);
	      setfillstyle(1,15);
	      floodfill(p,q,15);
	      delay(100);
	      circle(p,q,16);
	      setfillstyle(1,0);
	      floodfill(p,q,0);

	}
	if(o==17)
	{

	      circle(575,195,16);
	      setfillstyle(1,15);
	      floodfill(575,195,15);
	      delay(150);
	      circle(575,195,16);
	      setfillstyle(1,0);
	      floodfill(575,195,0);

	      circle(575,255,16);
	      setfillstyle(1,15);
	      floodfill(575,255,15);
	      delay(150);
	      circle(575,255,16);
	      setfillstyle(1,RED);
	      floodfill(575,255,RED);
	      settextstyle(6,0,2);
	      outtextxy(200,100,"2 POINTS !!");
	      delay(1000);
	      setfillstyle(1,0);
	      bar(190,90,450,150);

	      setcolor(15);
	      bar(120,50,148,75);

	      m+=2;
	      itoa(m,str,10);
	      settextstyle(4,0,2);
	      outtextxy(121,47,str);
	      g++;
	}
	else
	{
	      settextstyle(6,0,2);
	      outtextxy(200,100,"MISSED SHOT...");
	      delay(1000);
	      bar(190,90,480,150);
	}

	}

	cleardevice();
	setbkcolor(BLUE);
	setcolor(2);
	outtextxy(150,50,"CONGRATS!! YOU COMPLETED ALL LEVELS");
	outtextxy(150,100,"GAME OVER");
	outtextxy(150,150,"YOUR FINAL SCORE IS : ");
	itoa(m,str,10);
	outtextxy(150,200,str);
	delay(2000);
	outtextxy(150,250,"WANNA PLAY AGAIN ? (Y/N) : ");
	quit=getch();
	if(quit=='y'||quit=='Y')
		game();
	else if(quit=='n'||quit=='N')
		exit(0);
	getch();
	closegraph();

 }
