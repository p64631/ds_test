#include <stdlib.h>
#include <stdio.h>
#include "tree.h"

node_t *creat(  )
{
    node_t *root;
    root = ( node_t* )malloc( sizeof( node_t ) );
    root->left = NULL;
    root->right  = NULL;
    root->data = -1;
    return root;
}

void insert( node_t *root , int data )
{
    node_t *newNode;
    newNode = creat();
    newNode->data = data;

    if( root->data == -1 )
	{
        root->data = data;
        return ;
    }
    if( root->data == data)
	{
        return ;
    }
    if( root->data < data )
	{
        if(root->right == NULL)
		{
			root->right = newNode;
		}
        else
		{
			insert( root->right , data );
		}
    }
    else if( root->data > data )
	{
        if( root->left == NULL )
		{
			root->left = newNode;
		}
        else
		{
			insert( root->left , data );
		}
    }
}

void preorder( node_t *node , stack_t *stack )
{
	int p , i = 1, temp = 0;
	if( !node )
	{
		return ;
	}

	p = node->data;
	
	for(i; i <= p/2 ;i++)
	{
		if( p%i == 0 )
		{
			temp++;
		}
	}
	if( temp == 1) 
	{
		stack->data[ (stack->top)+1 ] = node->data;
    	stack->top++;
	}

	preorder( node->left , stack );
	preorder( node->right , stack );	
} 

void pop( stack_t *stack )
{
    while( stack->top != -1 )
	{
        printf( "%d ", stack->data[ stack->top ] );
        stack->top--;
    }
}
