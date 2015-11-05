#ifndef _TREE_H
#define _TREE_H

#define size 100

typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}node_t;

typedef struct stack{
    int top;
    int data[size];
}stack_t;

#endif
