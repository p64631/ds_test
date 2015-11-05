#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(  )
{
  	node_t *tree = creat( );
	stack_t *stack;	

    stack = ( stack_t* )malloc( sizeof( stack_t ) );
    stack->top = -1;

    int data;
    while ( scanf("%d",&data) ){
        if(data == -1)	break;
        insert( tree , data );
    }

	preorder( tree , stack );
	pop( stack );

	system("PAUSE");	
	return 0;
}
