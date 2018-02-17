#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f,g,h,i,j,sum;
    clrscr();
    printf("                     PERSONALITY TEST                    \n");
    printf("                     ----------------                    \n");
    printf("\n");
    printf("Rate the questions below from 1-5\n");
    printf("1-never agree  2-disagree  3-slightly agree  4-agree  5-strongly agree\n");
    printf("1.I am a cheerful person.\n");
    scanf("%d",&a);
    printf("2.When I am really sad or down,I seek the company of others.\n");
    scanf("%d",&b);
    printf("3.I like to attend gatherings where I can meet new people.\n");
    scanf("%d",&c);
    printf("4.I go out of my way to try new things.\n");
    scanf("%d",&d);
    printf("5.I do research on topics that interest me.\n");
    scanf("%d",&e);
    printf("6.I pride myself on being different.\n");
    scanf("%d",&f);
    printf("7.I get a sense of satisfaction from helping people.\n");
    scanf("%d",&g);
    printf("8.I look for ways to improve my performance at work.\n");
    scanf("%d",&h);
    printf("9.In an argument,I can see the other person's point of view.\n");
    scanf("%d",&i);
    printf("10.I am good at brainstorming.\n");
    scanf("%d",&j);
    sum=a+b+c+d+e+f+g+h+i+j;
    printf("RESULT:\n");
    if(sum>=40)
    printf("*You are a METICULOUS,CHEERFUL and DETERMINED person.\n");
    else if(sum>=30)
    printf("*You are a RESPONSIBLE and AMBITIOUS person.\n");
    else if(sum>=20)
    printf("*You are an ARTICULATE and CALM person.\n");
    else if(sum>=10)
    printf("*You are a DILIGENT and AMBIVERT person.\n");
    else
    printf("*You are an INTROVERT and SENSITIVE person.\n");
    getch();
}


