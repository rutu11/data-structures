#include<conio.h>
#include<stdio.h>
#define SIZE 100
typedef struct queue
{
	int item[SIZE];
	int front, rear;
}queue;

queue createqueue()
{
	queue q;
	q.rear =  -1;
	q.front=0;
	return q;
}

void enqueue(queue *q, int n)
{
	q->rear++;
	q->item[q->rear]=n;
}
int dequeue(queue *q)
{
	int n;
	n = q->item[q->front];
	q->front++;
	return n;
}
int isempty(queue *q)
{
	if(q->rear< q->front)
		return 1;
	else
		return 0;
}
int isfull(queue *q)
{
	if(q->rear == SIZE-1)
		return 1;
	else
		return 0;
}
int peek(queue *q)
{
	int n;
	n = q->item[q->front];
	return n;
}

void display(queue *q)
{
	int i;
	for(i=q->front; i<=q->rear; i++)
		printf("%d\t", q->item[i]);
}
void main()
{
	int a[10];
	queue q;
	clrscr();
	q = createqueue();
	enqueue(&q,5);
	enqueue(&q,6);
	display(&q);
	getch();

}