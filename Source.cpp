#include "igraphics.h"

int x=100,y=256;

int dy=5;
int aa=0;
int scr=0;
int over=0;
int play=0;
char str[8];

int p1x=340,p1y=390;
int p2x=340,p2y=0;

int p3x=600,p3y=270;
int p4x=600,p4y=0;

int p5x=900,p5y=0;
int p6x=900,p6y=350;

int p7x=1150,p7y=0;
int p8x=1150,p8y=200;


int r1x=356,r1y=390;
int r2x=356,r2y=0;

int r3x=700,r3y=270;
int r4x=700,r4y=0;

int r5x=1000,r5y=0;
int r6x=1000,r6y=350;

int tx=1200,ty=240;

void iDraw()
{
	iClear();
	if(play==0)
	{
		iShowBMP(0,0,"start.bmp");
		iShowBMP(800,80,"play.bmp");
		iShowBMP(280,100,"exit.bmp");
	}
	if(play==1)
	{
		iShowBMP(0,0,"start.bmp");
		iShowBMP(100,270,"easy.bmp");
		iShowBMP(100,170,"medium.bmp");
		iShowBMP(100,70,"hard.bmp");
	}
	if(play==2)
	{
		iShowBMP(0,0,"background4.bmp");

		iSetColor(255,255,80);
		iFilledRectangle(r1x,r1y,35,162);
		iFilledRectangle(r2x,r2y,35,300);

		iSetColor(0,100,255);
		iFilledRectangle(r3x,r3y,35,242);
		iFilledRectangle(r4x,r4y,35,180);

		iSetColor(0,255,100);
		iFilledRectangle(r5x,r5y,35,260);
		iFilledRectangle(r6x,r6y,35,170);

		iSetColor(255,255,255);
		
		iText(900,480,"SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(990,480,str,GLUT_BITMAP_TIMES_ROMAN_24);

		iShowBMP(x,y,"bird2.bmp");

		iShowBMP(10,462,"arrow.bmp");
		if( x+36>=r2x && x+40<=r2x+35 && y<=300 ||
		x>=r2x && x<=r2x+30 && y<=300 ||
		x+36>=r1x && x+36<=r1x+35 && y+36>=r1y ||
		x>=r1x && x<=r1x+35 && y+36>=r1y ||
		x+40>=r4x && x+36<=r4x+35 && y<=180 ||
		x>=r4x && x<=r4x+35 && y<=180 ||
		x+40>=r3x && x+36<=r3x+35 && y+36>=r3y ||
		x>=r3x && x<=r3x+30 && y+36>=r3y ||
		x+40>=r5x && x+36<=r5x+35 && y<=262 ||
		x>=r5x && x<=r5x+30 && y<=262 ||
		x+40>=r6x && x+36<=r6x+35 && y+36>=r6y ||
		x>=r6x && x<=r6x+35 && y+36>=r6y || y==0)
		{
			play=5;
		}
	}


	if(play==3)
	{
		iShowBMP(0,0,"background7.bmp");

		iSetColor(255,255,80);
		iFilledRectangle(p1x,p1y,35,162);
		iFilledRectangle(p2x,p2y,35,300);

		iSetColor(0,100,255);
		iFilledRectangle(p3x,p3y,35,242);
		iFilledRectangle(p4x,p4y,35,170);

		iSetColor(0,255,100);
		iFilledRectangle(p5x,p5y,35,260);
		iFilledRectangle(p6x,p6y,35,170);

		iSetColor(200,0,100);
		iFilledRectangle(p7x,p7y,35,110);
		iFilledRectangle(p8x,p8y,35,370);

		iSetColor(255,255,255);
		iText(900,480,"SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(990,480,str,GLUT_BITMAP_TIMES_ROMAN_24);

		iShowBMP(x,y,"bird6.bmp");

		iShowBMP(10,462,"arrow.bmp");

	}
	if( x+36>=p2x && x+40<=p2x+35 && y<=300 ||
		x>=p2x && x<=p2x+30 && y<=300 ||
		x+36>=p1x && x+36<=p1x+35 && y+36>=p1y ||
		x>=p1x && x<=p1x+35 && y+36>=p1y ||
		x+36>=p4x && x+36<=p4x+35 && y<=170 ||
		x>=p4x && x<=p4x+35 && y<=170 ||
		x+36>=p3x && x+36<=p3x+35 && y+36>=p3y ||
		x>=p3x && x<=p3x+35 && y+36>=p3y ||
		x+36>=p5x && x+36<=p5x+35 && y<=260 ||
		x>=p5x && x<=p5x+35 && y<=260 ||
		x+36>=p6x && x+36<=p6x+35 && y+36>=p6y ||
		x>=p6x && x<=p6x+35 && y+36>=p6y || 
		x+36>=p7x && x+36<=p7x+35 && y+36<=110 ||
		x>=p7x && x<=p7x+35 && y<=110||
		x+36>=p8x && x+36<=p8x+35 && y+36>=p8y||
		x>=p8x && x<=p8x+35 && y+36>=p8y||y==0)
	{
		play=6;
	}


	if(play==4)
	{
		iShowBMP(0,0,"background8.bmp");

		iSetColor(255,255,80);
		iFilledRectangle(p1x,p1y,35,162);
		iFilledRectangle(p2x,p2y,35,300);

		iSetColor(0,100,255);
		iFilledRectangle(p3x,p3y,35,242);
		iFilledRectangle(p4x,p4y,35,170);

		iSetColor(0,255,100);
		iFilledRectangle(p5x,p5y,35,260);
		iFilledRectangle(p6x,p6y,35,170);

		iSetColor(200,0,100);
		iFilledRectangle(p7x,p7y,35,110);
		iFilledRectangle(p8x,p8y,35,370);

		iSetColor(255,255,255);
		iText(900,480,"SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(990,480,str,GLUT_BITMAP_TIMES_ROMAN_24);

		iShowBMP(x,y,"bird.bmp");
		iShowBMP(10,462,"arrow.bmp");
		iShowBMP(tx,ty,"teer.bmp");

		if( x+36>=p2x && x+36<=p2x+35 && y<=300 ||
		x>=p2x && x<=p2x+30 && y<=300 ||
		x+36>=p1x && x+36<=p1x+35 && y+36>=p1y ||
		x>=p1x && x<=p1x+35 && y+36>=p1y ||
		x+36>=p4x && x+36<=p4x+35 && y<=150 ||
		x>=p4x && x<=p4x+35 && y<=150 ||
		x+36>=p3x && x+36<=p3x+35 && y+36>=p3y ||
		x>=p3x && x<=p3x+35 && y+36>=p3y ||
		x+36>=p5x && x+36<=p5x+35 && y<=260 ||
		x>=p5x && x<=p5x+35 && y<=260 ||
		x+36>=p6x && x+36<=p6x+35 && y+36>=p6y ||
		x>=p6x && x<=p6x+35 && y+36>=p6y || 
		x+36>=p7x && x+36<=p7x+35 && y+36<=110 ||
		x>=p7x && x<=p7x+35 && y<=110||
		x+36>=p8x && x+36<=p8x+35 && y+36>=p8y||
		x>=p8x && x<=p8x+35 && y+36>=p8y||
		x+36>=tx && y>=208 && y<=240 || y==0)
	{
		play=7;
	}
	
		
	}
	
	if(play==5||play==6||play==7)
	{
		iShowBMP(0,0,"dead.bmp");
		iShowBMP(608,100,"try again.bmp");
		iShowBMP(280,100,"exit.bmp");

		iSetColor(255,255,255);

		iText(580,400,str,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(412,400,"YOUR SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);

	}


//place your drawing codes here
}
void birdfall()
{
	
	if(play==2||play==3||play==4)
	{
		y-=dy;
	}

	
}
void pillermove()
{
	if(play==2)
	{
		r1x-=5;
		r2x-=5;
		r3x-=5;
		r4x-=5;
		r5x-=5;
		r6x-=5;

		if(r1x<=0)
		{
			r1x=1024;
		}
		if(r2x<=0)
		{
			r2x=1024;
		}
		if(r3x<=0)
		{
			r3x=1024;
		}
		if(r4x<=0)
		{
			r4x=1024;
		}
		if(r5x<=0)
		{
			r5x=1024;
		}
		if(r6x<=0)
		{
			r6x=1024;
		}

	}
	if(play==3)
	{
		p1x-=5;
		p2x-=5;
		p3x-=5;
		p4x-=5;
		p5x-=5;
		p6x-=5;
		p7x-=5;
		p8x-=5;
		
		if(p1x<=0)
		{
			p1x=1024;
		}
		if(p2x<=0)
		{
			p2x=1024;
		}
		if(p3x<=0)
		{
			p3x=1024;
		}
		if(p4x<=0)
		{
			p4x=1024;
		}
		if(p5x<=0)
		{
			p5x=1024;
		}
		if(p6x<=0)
		{
			p6x=1024;
		}
		if(p7x<=0)
		{
			p7x=1024;
		}
		if(p8x<=0)
		{
			p8x=1024;
		}
		
	}
	if(play==4)
	{
		p1x-=5;
		p2x-=5;
		p3x-=5;
		p4x-=5;
		p5x-=5;
		p6x-=5;
		p7x-=5;
		p8x-=5;
		
		tx-=10;
		if(p1x<=0)
		{
			p1x=1024;
		}
		if(p2x<=0)
		{
			p2x=1024;
		}
		if(p3x<=0)
		{
			p3x=1024;
		}
		if(p4x<=0)
		{
			p4x=1024;
		}
		if(p5x<=0)
		{
			p5x=1024;
		}
		if(p6x<=0)
		{
			p6x=1024;
		}
		if(p7x<=0)
		{
			p7x=1024;
		}
		if(p8x<=0)
		{
			p8x=1024;
		}
	
		if(tx<=0)
		{
			tx=1200;
		}
	
	}
	
}

void iMouseMove(int mx, int my)
{
//place your codes here
}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
		if(play==0)
		{
			if (mx >= 800 && mx <= 928 && my >= 80 && my <= 144)
			{
				play=1;
	
			}
			else if(mx>=280 && mx<=408 && my>=100 && my<=164)
			{
				exit(0);
			}
			
		}
		if(play==1)
		{
			if (mx >= 100 && mx <= 228 && my >= 270 && my <= 334)
			{
				play=2;
	
			}
			if (mx >= 100 && mx <= 228 && my >= 170 && my <= 234)
			{
				play=3;
	
			}
			if (mx >= 100 && mx <= 228 && my >= 70 && my <= 134)
			{
				play=4;
	
			}
		}
		if(mx >= 10 && mx <= 60 && my >=462 && my <= 502)
		{
			play=1;
			y=256;
			
			p1x=340,p1y=390;
			p2x=340,p2y=0;

			p3x=600,p3y=270;
			p4x=600,p4y=0;

			p5x=900,p5y=0;
			p6x=900,p6y=350;

			p7x=1150,p7y=0;
			p8x=1150,p8y=200;

			r1x=356,r1y=390;
			r2x=356,r2y=0;

			r3x=700,r3y=270;
			r4x=700,r4y=0;

			r5x=1000,r5y=0;
			r6x=1000,r6y=350;

			tx=1200,ty=240;
		}

		if(mx >= 608 && mx <= 736 && my >=100 && my <= 164)
		{
			play=1;
			y=256;
			x=100;
			
			p1x=340,p1y=390;
			p2x=340,p2y=0;

			p3x=600,p3y=270;
			p4x=600,p4y=0;

			p5x=900,p5y=0;
			p6x=900,p6y=350;

			p7x=1150,p7y=0;
			p8x=1150,p8y=200;

			r1x=356,r1y=390;
			r2x=356,r2y=0;

			r3x=700,r3y=270;
			r4x=700,r4y=0;

			r5x=1000,r5y=0;
			r6x=1000,r6y=350;

			tx=1200,ty=240;
		}
		else if(mx>=280 && mx<=408 && my>=100 && my<=164)
		{
			exit(0);
		}
	}

//place your codes here
}

void iKeyboard(unsigned char key)
{
//place your codes here
}

void iSpecialKeyboard(unsigned char key)
{
	if(key==GLUT_KEY_UP)
	{
		y+=20;
		if(y+36>=512)
		{
			y=512-36;
		}
	
	}
	if(key==GLUT_KEY_DOWN)
	{
		y-=20;
		if(y<=0)
		{
			y=0;
		}
	}
	if(key==GLUT_KEY_RIGHT)
	{
		x+=15;
	
	}
	if(key==GLUT_KEY_LEFT)
	{
		x-=15;
		
	}
}

void score()
{
	if (play==2)
	{
		sprintf(str,"%d",scr);
		if(x>r2x+35 && x<r2x+41 || x>r4x+35 && x<r4x+41  || x>r5x+35 && x<r5x+41  )
		{
			sprintf(str,"%d",scr);
			scr++;
		}
	}
	
	if(play==3||play==4)
	{
		sprintf(str,"%d",scr);
		if(x>p2x+35 && x<p2x+41 || x>p4x+35 && x<p4x+41  || x>p5x+35 && x<p5x+41
			||x>p7x+35 && x<p7x+41)
		{
			sprintf(str,"%d",scr);
			scr++;
		}
	}
	if(play==1)
	{
		scr=0;
	}
	
}

int main()
{   
	iSetTimer(50,score);
	iSetTimer(50,birdfall);
	iSetTimer(50,pillermove);
	srand(time(NULL));
	PlaySound("gaan\\fbs",NULL,SND_LOOP|SND_ASYNC);
//place your own initialization codes here.
	iInitialize(1024, 512);
return 0;
}