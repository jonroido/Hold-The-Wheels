#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>

#define keyup 72
#define keydown 80
#define keyleft 75
#define keyright 77
#define keyesc 27
#define p printf
#define g gotoxy
void menu();
int enter();
 int xcoor=300,ycoor=400,ycoor1=0,ycoor2=-30,ycoor3=-60,i;
 int randomx( void )
    {
	int x;
	x = random( 422);
	if ( x <179)
	{
	x=x +(179);
	}
	return ( x );
    }
void maincar()
    {      i += 1;
	setcolor( WHITE );
	setfillstyle( 1,i);
	bar3d( xcoor,ycoor,xcoor + 30, ycoor+30, 0, 0 );
	bar3d( xcoor+3,ycoor-7,xcoor+27,ycoor,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor-5,ycoor+3,xcoor,ycoor+10,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor-5,ycoor+17,xcoor,ycoor+24,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor+30,ycoor+3,xcoor+35,ycoor+10,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor+30,ycoor+17,xcoor+35,ycoor+24,0,0);
	setcolor(GREEN);
	setfillstyle( 1, GREEN);
	bar3d(164,1,174,700,0,0);bar3d(457,1,467,500,0,0);

	return ;
    }
void car1( int xcoor1 )
    {
	if ( ycoor1 < 600 )
	{
	ycoor1 += 15;
	setcolor(WHITE);
	setfillstyle( 1,RED);
	bar3d( xcoor1, ycoor1, xcoor1 + 30,ycoor1 +30, 0, 0 );
	bar3d( xcoor1+3,ycoor1-7,xcoor1+27,ycoor1,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor1-5,ycoor1+3,xcoor1,ycoor1+10,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor1-5,ycoor1+17,xcoor1,ycoor1+24,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor1+30,ycoor1+3,xcoor1+35,ycoor1+10,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor1+30,ycoor1+17,xcoor1+35,ycoor1+24,0,0);
	}
	else
	{
	ycoor1 = 0;
	}
	return ;
    }
void car2( int xcoor2 )
    {
	if ( ycoor2 < 600 )
	{
	ycoor2 += 15;
	setcolor(WHITE);
	setfillstyle( 1,GREEN);
	bar3d( xcoor2, ycoor2,xcoor2 + 30, ycoor2 +30, 0, 0 );
	bar3d( xcoor2+3,ycoor2-7,xcoor2+27,ycoor2,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor2-5,ycoor2+3,xcoor2,ycoor2+10,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor2-5,ycoor2+17,xcoor2,ycoor2+24,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor2+30,ycoor2+3,xcoor2+35,ycoor2+10,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor2+30,ycoor2+17,xcoor2+35,ycoor2+24,0,0);
	}
	else
	{
	ycoor2 = 0;
	}
	return ;
    }
void car3( int xcoor3 )
    {
	if ( ycoor3 < 600 )
	{
	ycoor3 += 15;
	setcolor(WHITE);
	setfillstyle( 1,BLUE);
	bar3d( xcoor3, ycoor3, xcoor3 + 30, ycoor3+30,0, 0);
	bar3d( xcoor3+3,ycoor3-7,xcoor3+27,ycoor3,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor3-5,ycoor3+3,xcoor3,ycoor3+10,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor3-5,ycoor3+17,xcoor3,ycoor3+24,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor3+30,ycoor3+3,xcoor3+35,ycoor3+10,0,0);
	setcolor(WHITE);
	setfillstyle(1,3);
	bar3d( xcoor3+30,ycoor3+17,xcoor3+35,ycoor3+24,0,0);
	}
	else
	{
	ycoor3 = 0;
	}
	return ;
    }
void gamecleared(int s, int hs){
	cleardevice();
	setbkcolor(LIGHTBLUE);
	settextstyle( 0, 0, 7 );
	setcolor(YELLOW);
	outtextxy( 40, 100, "GAME CLEARED" );
	if (s>hs){
	gotoxy(33,15);printf("New High Score:%d",s );}
	else {gotoxy (36,15);printf("Score:%d", s);}
	gotoxy(27,25); printf("Press Enter to return to menu");
	enter();
    }

void over(int s, int hs){
	cleardevice();
	setbkcolor(GREEN);
	settextstyle( 0, 0, 7 );
	setcolor( RED );
	outtextxy( 85,100, "GAME OVER" );
	if (s > hs) {
	gotoxy(33,15);printf("New High Score:%d",s );}
	else {gotoxy(36,15); printf("Score:%d", s);}
	gotoxy(27,25);printf("Press Enter to return to menu");
	enter();
    }
int highscore1 (int s) {
	FILE *h_s;
	int hscore= 0;
	h_s = fopen("C:\\TURBOC3\\HS1.txt", "r"); //File open in directory
	if (h_s == NULL){gotoxy(10,6);printf(" ");}
	else {
	while (!feof(h_s)){
	fscanf(h_s, "%d", &hscore);
	}
	fclose(h_s);
	}
	if(s > hscore){
	h_s = fopen ("C:\\TURBOC3\\HS1.txt", "w");
	fprintf(h_s, "%d", s);
	fclose(h_s);
	}
	return hscore;
	}
int highscore2 (int s) {
	FILE *h_s;
	int hscore= 0;
	h_s = fopen("C:\\TURBOC3\\HS2.txt", "r");
	if (h_s == NULL){gotoxy(10,6);printf("ERROR");}
	else {
	while (!feof(h_s)){
	fscanf(h_s, "%d", &hscore);
	}
	fclose(h_s);
	}
	if(s > hscore){
	h_s = fopen ("C:\\TURBOC3\\HS2.txt", "w");
	fprintf(h_s, "%d", s);
	fclose(h_s);
	}
	return hscore;
	}
int highscore3 (int s) {
	FILE *h_s;
	int hscore= 0;
	h_s = fopen("C:\\TURBOC3\\HS3.txt", "r");
	if (h_s == NULL){gotoxy(10,6);printf("ERROR");}
	else {
	while (!feof(h_s)){
	fscanf(h_s, "%d", &hscore);
	}
	fclose(h_s);
	}
	if(s > hscore){
	h_s = fopen ("C:\\TURBOC3\\HS3.txt", "w");
	fprintf(h_s, "%d", s);
	fclose(h_s);
	}
	return hscore;
	}
int startplay1( void )
    {
	int life = 3, keys, xcoor1, xcoor2, xcoor3,score=0,hscore1 = 0;
	re:setcolor(BLUE);
	setfillstyle(1,BLUE);
	bar3d(1,1,164,600,0,0);bar3d(467,1,700,600,0,0);
	while ( life )
	{
	setfillstyle(1,RED);
	bar3d(550,150,560,350,0,0);
	settextstyle(0,0,1);
	outtextxy(565,150,"FINISH");
	outtextxy(565,350,"START");
	outtextxy(470,50,"Press ESC for exit");
	setcolor(WHITE);setfillstyle(1,DARKGRAY);
	bar3d(174,1,467,600,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,1,325,50,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,100,325,150,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,200,325,250,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,300,325,350,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,400,325,450,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,500,325,550,0,0);
	if(score<2000){
		setfillstyle(1,15);
		bar3d(550,350-score/10,560,350,0,0);
		}
	if(score>2000){
		life = 0;
		gamecleared(score,hscore1);
		}
	if ( ycoor1 == 0 )
	{
	    xcoor1 = randomx();
	    ycoor1++;
	}
	else
	{
	    car1( xcoor1 );
	}
	if ( ycoor2 == 0 || ycoor2 < 1 )
	{
	    xcoor2 = randomx();
	    ycoor2++;
	}
	else
	{
	    car2( xcoor2 );
	}
	if ( ycoor3 == 0 || ycoor3 < 1 )
	{
	    xcoor3 = randomx();
	    ycoor3++;
	}
	else
	{
	    car3( xcoor3 );
	}
	setcolor( 10 );
	maincar();
	setcolor(YELLOW);
	settextstyle(0,0,1);
	outtextxy(10,10,"LIFE:");
	if(life==3){
	setcolor(RED);
	settextstyle(0,0,1);
	outtextxy(60,10,"<3 <3 <3");
	}
	if(life==2){
	setcolor(RED);
	settextstyle(0,0,1);
	outtextxy(60,10,"<3 <3   ");
	}
	if(life==1){
	setcolor(RED);
	settextstyle(0,0,1);
	outtextxy(60,10,"<3      ");
	}
	settextstyle(0,0,1);
	setcolor(RED);
	outtextxy(10,40,"SCORE:");
	gotoxy(10,3);printf("%d",score);


	if((xcoor1<xcoor+30&&xcoor1+30>xcoor&&ycoor1+30>ycoor&&ycoor1<ycoor+30)||(xcoor2<xcoor+30&&xcoor2+30>xcoor&&ycoor2+30>ycoor&&ycoor2<ycoor+30)||(xcoor3<xcoor+30&&xcoor3+30>xcoor&&ycoor3+30>ycoor&&ycoor3<ycoor+30)){
		life--;
		if(life==0){
			over(score,hscore1);
		}
		ycoor1 = 0;
		ycoor2 = -30;
		ycoor3 = -60;
		goto re;
	}

	while( kbhit() )
	{
	    keys = getch();
	    switch(keys){
		case keyleft: if(xcoor > 180){
				xcoor -=20;
				} break;
		case keyright: if(xcoor < 420){
				xcoor += 20;
				} break;
		case keyesc: life=0;
		}
	}
	delay(30);
	score++;
	hscore1 = highscore1(score);
	gotoxy(1,6); printf("High Score:%d",hscore1);
	}
    return 0;
}
int startplay2( void )
    {
	int life = 3, keys, xcoor1, xcoor2, xcoor3,score=0,hscore2 = 0;
	re:setcolor(BLUE);
	setfillstyle(1,BLUE);
	bar3d(1,1,164,600,0,0);bar3d(467,1,700,600,0,0);
	while ( life )
	{
	setfillstyle(1,RED);
	bar3d(550,150,560,350,0,0);
	outtextxy(565,150,"FINISH");
	outtextxy(565,350,"START");
	outtextxy(470,50,"Press ESC for exit");
	setcolor(WHITE);setfillstyle(1,DARKGRAY);
	bar3d(174,1,467,600,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,1,325,50,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,100,325,150,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,200,325,250,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,300,325,350,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,400,325,450,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,500,325,550,0,0);
	if(score<5000){
		setfillstyle(1,15);
		bar3d(550,350-score/25,560,350,0,0);
		}
	if(score>5000){
		life = 0;
		gamecleared(score,hscore2);
		}
	if ( ycoor1 == 0 )
	{
	    xcoor1 = randomx();
	    ycoor1++;
	}
	else
	{
	    car1( xcoor1 );
	}
	if ( ycoor2 == 0 || ycoor2 < 1 )
	{
	    xcoor2 = randomx();
	    ycoor2++;
	}
	else
	{
	    car2( xcoor2 );
	}
	if ( ycoor3 == 0 || ycoor3 < 1 )
	{
	    xcoor3 = randomx();
	    ycoor3++;
	}
	else
	{
	    car3( xcoor3 );
	}
	setcolor( 10 );
	maincar();
	setcolor(BLACK);
	settextstyle(0,0,1);
	outtextxy(10,10,"LIFE:");
	if(life==3){
	setcolor(LIGHTMAGENTA);
	settextstyle(0,0,1);
	outtextxy(60,10,"<3 <3 <3");
	}
	if(life==2){
	setcolor(LIGHTMAGENTA);
	settextstyle(0,0,1);
	outtextxy(60,10,"<3 <3   ");
	}
	if(life==1){
	setcolor(LIGHTMAGENTA);
	settextstyle(0,0,1);
	outtextxy(60,10,"<3      ");
	}
	setcolor(DARKGRAY);
	settextstyle(0,0,1);
	outtextxy(10,40,"SCORE:");
	gotoxy(10,3);printf("%d",score);


	if((xcoor1<xcoor+30&&xcoor1+30>xcoor&&ycoor1+30>ycoor&&ycoor1<ycoor+30)||(xcoor2<xcoor+30&&xcoor2+30>xcoor&&ycoor2+30>ycoor&&ycoor2<ycoor+30)||(xcoor3<xcoor+30&&xcoor3+30>xcoor&&ycoor3+30>ycoor&&ycoor3<ycoor+30)){
		life--;
		if(life==0){
			over(score,hscore2);
		}
		ycoor1 = 0;
		ycoor2 = -30;
		ycoor3 = -60;
		goto re;
	}

	while( kbhit() )
	{
	    keys = getch();
	    switch(keys){
		case keyleft: if(xcoor > 180){
				xcoor -=20;
				} break;
		case keyright: if(xcoor < 420){
				xcoor += 20;
				} break;
		case keyesc: life=0;
		}
	}
	delay(20);
	score++;
	hscore2 = highscore2(score);
	gotoxy(1,6); printf("High Score:%d",hscore2);
    }
    return 0;
}
int startplay3( void )
    {
	int life = 3, keys, xcoor1, xcoor2, xcoor3,score=0,hscore3 = 0;
	re:setcolor(BLUE);
	setfillstyle(1,BLUE);
	bar3d(1,1,164,600,0,0);bar3d(467,1,700,600,0,0);
	while ( life )
	{
	setfillstyle(1,RED);
	bar3d(550,150,560,350,0,0);
	outtextxy(565,150,"FINISH");
	outtextxy(565,350,"START");
	outtextxy(470,50,"Press ESC for exit");
	setcolor(WHITE);setfillstyle(1,DARKGRAY);
	bar3d(174,1,467,600,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,1,325,50,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,100,325,150,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,200,325,250,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,300,325,350,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,400,325,450,0,0);
	setcolor(WHITE);setfillstyle(1,WHITE);
	bar3d(315,500,325,550,0,0);
	if(score<10000){
		setfillstyle(1,15);
		bar3d(550,350-score/50,560,350,0,0);
		}
	if(score>10000){
		life = 0;
		gamecleared(score,hscore3);
		}
	if ( ycoor1 == 0 )
	{
	    xcoor1 = randomx();
	    ycoor1++;
	}
	else
	{
	    car1( xcoor1 );
	}
	if ( ycoor2 == 0 || ycoor2 < 1 )
	{
	    xcoor2 = randomx();
	    ycoor2++;
	}
	else
	{
	    car2( xcoor2 );
	}
	if ( ycoor3 == 0 || ycoor3 < 1 )
	{
	    xcoor3 = randomx();
	    ycoor3++;
	}
	else
	{
	    car3( xcoor3 );
	}
	setcolor( 10 );
	maincar();
	setcolor(BLACK);
	settextstyle(0,0,1);
	outtextxy(10,10,"LIFE:");
	if(life==3){
	setcolor(LIGHTRED);
	settextstyle(0,0,1);
	outtextxy(60,10,"<3 <3 <3");
	}
	if(life==2){
	setcolor(LIGHTRED);
	settextstyle(0,0,1);
	outtextxy(60,10,"<3 <3   ");
	}
	if(life==1){
	setcolor(LIGHTRED);
	settextstyle(0,0,1);
	outtextxy(60,10,"<3      ");
	}
	setcolor(CYAN);
	settextstyle(0,0,1);
	outtextxy(10,40,"SCORE:");
	gotoxy(10,3);printf("%d",score);


	if((xcoor1<xcoor+30&&xcoor1+30>xcoor&&ycoor1+30>ycoor&&ycoor1<ycoor+30)||(xcoor2<xcoor+30&&xcoor2+30>xcoor&&ycoor2+30>ycoor&&ycoor2<ycoor+30)||(xcoor3<xcoor+30&&xcoor3+30>xcoor&&ycoor3+30>ycoor&&ycoor3<ycoor+30)){
		life--;
		if(life==0){
			over(score,hscore3);
		}
		ycoor1 = 0;
		ycoor2 = -30;
		ycoor3 = -60;
		goto re;
	}

	while( kbhit() )
	{
	    keys = getch();
	    switch(keys){
		case keyleft: if(xcoor > 180){
				xcoor -=20;
				} break;
		case keyright: if(xcoor < 420){
				xcoor += 20;
				} break;
		case keyesc: life=0;
		}
	}
	delay(5);
	score++;
	hscore3 = highscore3(score);
	gotoxy(1,6); printf("High Score:%d",hscore3);
    }
    return 0;
}
void border2()
{
	int x,y;
	for(x=25;x<=60;x++)
	{
	g(x,10);p("%c",219);
	g(x,19);p("%c",219);
	}
	for(y=10;y<=19;y++)
	{
	g(25,y);p("%c",219);
	g(60,y);p("%c",219);
	}
}
int enter()
{
 char ch;
 re1:
 ch=getch();
 switch(ch){
 case 13:
menu();break;
default: goto re1;
		  }
return 0;
}

int loading()
{
int x;
border2();
g(30,13); p("Initializing...");
for(x=26;x<=59;x++)
{
g(x,15);
p("-");
g(x,17);
p("-");
}
	for(x=26;x<=59;x++)
	{
	g(x,16);p("%c",177);delay(300);
	}

return 0;
}
void designing()
{
setcolor(LIGHTCYAN);
circle(310,250,80);
settextstyle(0,0,3);
outtextxy(265,220,"^  ^");
outtextxy(280,255,"\__/");
}
int arrowhere(int realPosition,int arrowPosition)
{

	if(realPosition==arrowPosition)
	{
		printf("%c", 3);
	}
	else{
	p(" ");
	}
   return ;
}

void instruction()
{
cleardevice();
setbkcolor(GREEN);
 g(6,3);p("Hello there!");
 g(8,5);p("This is the Hold the Wheel game, a car race game,as you hold your");
 g(6,6);p("wheels to avoid all the obstacles and reach the required distance.");
 g(6,7);p("This is a fun game to play. Just remember these rules:");
 g(6,9);p("1. The Controls: Use LEFT and RIGHT arrow keys to move the car from");
 g(6,10);p("   left to right");
 g(6,12);p("2. Avoid Each Car Approaching: Your car is already accelerating from");
 g(6,13);p("   the start. Avoid other cars by pressing the left or right arrow key.");
 g(6,14);p("   If your car collided with another car, you lose one life.");
 
 g(6,16);p("3. Life and Score: If you lose three lives without reaching the required");
 g(6,17);p("   distance, the game is over. Reach the end and the game is cleared.");
 g(6,18);p("   The highest score for each level will be saved. Go to Reset to reset");
 g(6,19);p("   the high scores.");
 g(6,21);p("LETS' SEE WHO HAS THE HIGHEST SCORE!");
 g(30,25);  p("Press Enter to return menu\n");
}
void developers()
{
cleardevice();
setbkcolor(BLACK);
setcolor(LIGHTBLUE);
settextstyle(10,0,2);
outtextxy(170,50,"GAME DEVELOPERS");
setcolor(GREEN);
settextstyle(10,0,1);
outtextxy(100,100,"BACHELOR OF SCIENCE");
outtextxy(100,150,"IN COMPUTER ENGINEERING 1-2");
g(20,14);p("Leader: Nick Lagarnia");
g(20,16);p("MEMBERS:");
g(20,18);p("Nicolle Interior");
g(20,20);p("John Lloyd Trinidad");

g(20,25);p("Press ENTER to return menu");
}
void score_reset(){
	FILE *h_s1;
	FILE *h_s2;
	FILE *h_s3;

	int hs1,hs2,hs3;

	h_s1 = fopen ("C:\\TURBOC3\\HS1.txt", "w");
	fprintf(h_s1, "0");
	fclose(h_s1);

	h_s2 = fopen ("C:\\TURBOC3\\HS2.txt", "w");
	fprintf(h_s2, "0");
	fclose(h_s2);

	h_s3 = fopen ("C:\\TURBOC3\\HS3.txt", "w");
	fprintf(h_s3, "0");
	fclose(h_s3);
	cleardevice();
	loading();
	cleardevice();
	setcolor(YELLOW);
	settextstyle(0,0,5);
	outtextxy(50,100,"Reset Complete");
	setcolor(RED);
	settextstyle(1,0,2);
	outtextxy(170,400,"Press ENTER to return menu");
	designing();
}
void level(){
	int position=1;
	int keypressed=0;
	 cleardevice();
		setbkcolor(3);
		settextstyle(1,0,3);
		outtextxy(180,150,"PLEASE SELECT DIFFICULTY");

		while(keypressed !=13){
		gotoxy(30,15);arrowhere(1,position);p("L E V E L 1");
		gotoxy(30,16);arrowhere(2,position);p("L E V E L 2");
		gotoxy(30,17);arrowhere(3,position);p("L E V E L 3");
		gotoxy(28,19);printf("Prest ESC to return to menu");
		keypressed=getch();
		if(keypressed==80&&position != 3){
		position++;sound(800);delay(50);nosound();
		}
		if(keypressed==72&&position != 1){
		position--;sound(800);delay(50);nosound();
		}
		if(keypressed== 27){
		 menu();
		}
		else{
		position=position;
		}
				}
		switch(position){
			case 1: startplay1();break;
			case 2: startplay2();break;
			case 3:	startplay3();break;
			}

}
void reset()
{
int position=1;
int keypressed=0;
cleardevice();
setbkcolor(LIGHTMAGENTA);
border2();
while(keypressed!=13){
g(29,13);p("Do you really want to reset?");
gotoxy(33,15);arrowhere(1,position);p("YES");
gotoxy(33,16);arrowhere(2,position);p("NO");
	keypressed=getch();
		if(keypressed==80&&position != 2){
		position++;sound(800);delay(50);nosound();
		}
		if(keypressed==72&&position != 1){
		position--;sound(800);delay(50);nosound();
		}
		if(keypressed== 27){
		 menu();
		}
		else{
		position=position;
		}
	}
	switch(position)
	{
	case 1: score_reset(); enter(); break;
	case 2: menu();break;
	}
}
void display_HS(){

FILE *h_s1;
FILE *h_s2;
FILE *h_s3;
int hscore1,hscore2,hscore3;

h_s1 = fopen("C:\\TURBOC3\\HS1.txt", "r");
	if (h_s1 == NULL){gotoxy(10,1);printf("0");}
	else {
	while (!feof(h_s1)){
	fscanf(h_s1, "%d", &hscore1);
	}
	fclose(h_s1);
	}
h_s2 = fopen("C:\\TURBOC3\\HS2.txt", "r");
	if (h_s2 == NULL){gotoxy(10,1);printf("0");}
	else {
	while (!feof(h_s2)){
	fscanf(h_s2, "%d", &hscore2);
	}
	fclose(h_s2);
	}
h_s3 = fopen("C:\\TURBOC3\\HS3.txt", "r");
	if (h_s3 == NULL){gotoxy(10,1);printf("0");}
	else {
	while (!feof(h_s3)){
	fscanf(h_s3, "%d", &hscore3);
	}
	fclose(h_s3);
	}
	setbkcolor(LIGHTRED);
	setcolor(YELLOW);
	settextstyle(10,0,5);
	outtextxy(150,30,"HIGH SCORES");
	g(20,10);p("Level 1 High Score: %d", hscore1);
	g(20,15);p("Level 2 High Score: %d", hscore2);
	g(20,20);p("Level 3 High Score: %d", hscore3);
	g(20,25);p("Press ENTER to return menu");
}
void menu()
{

	int position=1;
	int keypressed=0;
	cleardevice();
	setbkcolor(LIGHTBLUE);
	setcolor(WHITE);
	settextstyle(10,0,5);
	outtextxy(240,70,"MENU");

	g(32,25);p("Press ESC to exit");

	while(keypressed!=13)
	{
	gotoxy(32,15);arrowhere(1,position);p("S T A R T  G A M E");
	gotoxy(35,16);arrowhere(2,position);p("R E S E T");
	gotoxy(31,17);arrowhere(3,position);p("H I G H  S C O R E S");
	gotoxy(30,18);arrowhere(4,position);p("I N S T R U C T I O N");
	gotoxy(27,19);arrowhere(5,position);p("G A M E  D E V E L O P E R S");

	keypressed=getch();
		if(keypressed==80&&position != 5){
		position++;sound(800);delay(50);nosound();
		}
		if(keypressed==72&&position != 1){
		position--;sound(800);delay(50);nosound();
		}
		if(keypressed== 27){
		 exit(1);
		}
		else{
		position=position;
		}
	}

       switch(position)
       {
       case 1: level();menu();break;
       case 2: reset();
			menu();
			break;
       case 3: cleardevice(); display_HS();
			enter();
			menu();
			break;
       case 4: instruction();
			enter();
			menu();
			break;
       case 5: developers(); enter();
	menu();
	break;
       }
}
void design()
{
setbkcolor(BLACK);
setcolor(WHITE);
outtextxy(10,20,"----------");
setcolor(WHITE);
outtextxy(10,30,"--------");
setcolor(LIGHTGRAY);
outtextxy(10,40,"-------");
setcolor(LIGHTGRAY);
outtextxy(10,50,"-------");
setcolor(DARKGRAY);
outtextxy(10,60,"------");
setcolor(DARKGRAY);
outtextxy(10,70,"------");
setcolor(LIGHTMAGENTA);
circle(550,300,60);
setcolor(BROWN);
circle(550,300,40);
setcolor(MAGENTA);
circle(70,300,60);
setcolor(GREEN);
circle(70,300,40);

}

void front()
{
int x,y;
setcolor(LIGHTRED);
settextstyle(0,0,8);
outtextxy(10,120,"HOLD THE");
setcolor(RED);
settextstyle(0,0,10);
outtextxy(90,180,"WHEELS");
design();
setcolor(YELLOW);
settextstyle(1,0,2);
outtextxy(180,400,"PRESS ENTER TO CONTINUE");
enter();
menu();
  }
void main()
    {
	int gdriver = DETECT, gmode;
	initgraph( &gdriver, &gmode, "C:\\turboc3\\bgi" );
	cleardevice();
	front();

    }
