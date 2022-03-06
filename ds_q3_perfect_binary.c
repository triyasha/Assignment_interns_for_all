/*

Print all nodes of a perfect binary tree in a specific order.
Given a perfect binary tree, print the values of alternating left and right nodes for each level in a top-down and bottom-up manner.
For example, there are two ways to print the following tree:
Variation 1: Print Top-Down
(1, 2, 3, 4, 7, 5, 6, 8, 15, 9, 14, 10, 13, 11, 12)
 
Variation 2: Print Bottom-Up
(8, 15, 9, 14, 10, 13, 11, 12, 4, 7, 5, 6, 2, 3, 1)


*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *lptr;
	struct node *rptr;
};

void top_down(struct node *);
void bottom_up(struct node *);
void inorder(struct node *);

int count;

int main()
{
	struct node *head=NULL, *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m, *n, *o;
	//int count=0;

	a = (struct node *)malloc(sizeof(struct node));
	b = (struct node *)malloc(sizeof(struct node));
	c = (struct node *)malloc(sizeof(struct node));
	d = (struct node *)malloc(sizeof(struct node));
	e = (struct node *)malloc(sizeof(struct node));
	f = (struct node *)malloc(sizeof(struct node));
	g = (struct node *)malloc(sizeof(struct node));
	h = (struct node *)malloc(sizeof(struct node));
	i = (struct node *)malloc(sizeof(struct node));
	j = (struct node *)malloc(sizeof(struct node));
	k = (struct node *)malloc(sizeof(struct node));
	l = (struct node *)malloc(sizeof(struct node));
	m = (struct node *)malloc(sizeof(struct node));
	n = (struct node *)malloc(sizeof(struct node));
	o = (struct node *)malloc(sizeof(struct node));

	head = a;

	a->data = 1;
	a->lptr = b;
	a->rptr = c;
	++count;

	b->data = 2;
	b->lptr = d;
	b->rptr = e;
	++count;

	c->data = 3;
	c->lptr = f;
	c->rptr = g;
	++count;

	d->data = 4;
	d->lptr = h;
	d->rptr = i;
	++count;

	e->data = 5;
	e->lptr = j;
	e->rptr = k;
	++count;

	f->data = 6;
	f->lptr = l;
	f->rptr = m;
	++count;

	g->data = 7;
	g->lptr = n;
	g->rptr = o;
	++count;

	h->data = 8;
	h->lptr = NULL;
	h->rptr = NULL;
	++count;

	i->data = 9;
	i->lptr = NULL;
	i->rptr = NULL;
	++count;

	j->data = 10;
	j->lptr = NULL;
	j->rptr = NULL;
	++count;

	k->data = 11;
	k->lptr = NULL;
	k->rptr = NULL;
	++count;

	l->data = 12;
	l->lptr = NULL;
	l->rptr = NULL;
	++count;

	m->data = 13;
	m->lptr = NULL;
	m->rptr = NULL;
	++count;

	n->data = 14;
	n->lptr = NULL;
	n->rptr = NULL;
	++count;

	o->data = 15;
	o->lptr = NULL;
	o->rptr = NULL;
	++count;

	printf("Total no of nodes in tree are: %d\n",count);

	printf("Inorder\n");
	inorder(head);
	printf("\n");

	printf("top-down approach\n");
	top_down(head);
	printf("\n");

	printf("bottom-up approach\n");
	bottom_up(head);
	printf("\n");

	return 0;
}

void inorder(struct node *h)
{
	if(h == NULL)
	{
		printf("Tree is empty!\n");
	}

	if(h->lptr != NULL)
	{
		inorder(h->lptr);
	}

	printf("%d ",h->data);

	if(h->rptr != NULL)
	{
		inorder(h->rptr);
	}
}

void top_down(struct node *h)
{
	printf("In top down\n");

	if(h == NULL)
	{
		printf("Tree is Empty!\n");
	}

	printf("%d ",h->data);

	if(h->lptr != NULL)
		printf("%d %d ",h->lptr->data,h->rptr->data);

	if(h->lptr->lptr == NULL)
		return;

	if(h->lptr->lptr != NULL)
	{	
		printf("%d ",h->lptr->lptr->data);	
		printf("%d ",h->rptr->rptr->data);
		printf("%d ",h->lptr->rptr->data);
		printf("%d ",h->rptr->lptr->data);
	}

	if(h->lptr->lptr->lptr == NULL)
		return;

	if(h->lptr->lptr->lptr != NULL)
	{	
		printf("%d ",h->lptr->lptr->lptr->data);	
		printf("%d ",h->rptr->rptr->rptr->data);
		
		printf("%d ",h->lptr->lptr->rptr->data);
		printf("%d ",h->rptr->rptr->lptr->data);

		printf("%d ",h->lptr->rptr->lptr->data);
		printf("%d ",h->rptr->lptr->rptr->data);

		printf("%d ",h->lptr->rptr->rptr->data);
		printf("%d ",h->rptr->lptr->lptr->data);
	}

	if(h->lptr->lptr->lptr->lptr == NULL)
		return;

}

void bottom_up(struct node *h)
{
	printf("In Bottom up\n");

	if(h == NULL)
	{
		printf("Tree is Empty!\n");
	}

	if(h->lptr->lptr->lptr != NULL)
	{	
		printf("%d ",h->lptr->lptr->lptr->data);	
		printf("%d ",h->rptr->rptr->rptr->data);
		
		printf("%d ",h->lptr->lptr->rptr->data);
		printf("%d ",h->rptr->rptr->lptr->data);

		printf("%d ",h->lptr->rptr->lptr->data);
		printf("%d ",h->rptr->lptr->rptr->data);

		printf("%d ",h->lptr->rptr->rptr->data);
		printf("%d ",h->rptr->lptr->lptr->data);
	}

	if(h->lptr->lptr != NULL)
	{	
		printf("%d ",h->lptr->lptr->data);	
		printf("%d ",h->rptr->rptr->data);
		printf("%d ",h->lptr->rptr->data);
		printf("%d ",h->rptr->lptr->data);
	}

	if(h->lptr != NULL)
		printf("%d %d ",h->lptr->data,h->rptr->data);

	printf("%d ",h->data);

}

