#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 100
typedef struct stack
{
	int item[SIZE];
	int top;
}stack;

stack createstack()
{
    stack s;
    s.top = -1;
    return s;
}
int isempty(stack *s)
{
	if(s->top==-1)
		return 1;
	else
		return 0;
}
int isfull(stack *s)
{
	if(s->top == SIZE-1)
		return 1;
	else
		return 0;
}
void push(stack *s, int n)
{
	s->top++;
	s->item[s->top] = n;
}
char pop(stack *s)
{
	char n;
	n = s->item[s->top];
	s->top--;
	return n;
}
char peek(stack *s)
{
	char n;
	n = s->item[s->top];
	return n;
}
void display(stack *s)
{
	int i;
	for(i=s->top; i>-1; i--)
		printf("%c",s->item[i]);
}
void main()
{
	int i, flag=0;
	char a[SIZE],x;
	stack s;
	clrscr();
	gets(a);
	s = createstack();
	for(i=0;i<strlen(a);i++)
	{
	 if(a[i] == '[' || a[i] == '{' || a[i] == '('){
	  push(&s,a[i]);
	 }
	 else{
		if((a[i]==']'&& peek(&s)== '[') || (a[i] == '}' && peek(&s)=='{') || (a[i] == ')' && peek(&s) == '('))
		{
			x = pop(&s);
		}
		else if(a[i] == '}' || a[i]==')' || a[i]==']')
		{
			flag = 1;
			break;
		}
	 }
	}
	if(isempty(&s) && flag==0){
	 printf("Well formed");
	}
	else{
	 printf("Not well formed");
	}
   getch();
}
