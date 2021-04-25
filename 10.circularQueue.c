#include<stdio.h>
#define size 5
/* Function for insert an element into the circular queue */
void Insertion( int q[], int *front, int *rear )
{
	if( ( *rear + 1 ) % size != *front )
	{
		*rear = ( *rear + 1 ) % size;
		printf( "\n Enter an element: " );
		scanf( "%d", &q[ *rear ] );
		if( *front == -1 ) /* Active when first element is going to insert */
			*front = *rear;
	}
	else
		printf( "\n Memory overflow \n" );
}

/* Function for displaying circular queue contents */
void Display( int q[], int *front, int *rear )
{
	if( *front == -1 && *rear == -1 )
		printf( "\n Queue is empty\n" );
	else
	{
		if( *front == *rear )
			printf( "\n The queue element is: %d", q[ *front ] );
		else
		{
			printf( "\n The queue elements are: " );
			int temp = *front;
			while( temp != *rear )
			{
				printf( " %d ", q[ temp ] );
				temp = ( temp + 1 ) % size;
			}
			printf( " %d ", q[ *rear ] ); /* For display last element */
		}
	}	
}
/* Function for delete an element from the circular queue */
void Delete( int q[], int *front, int *rear )
{
	if( *front == -1 && *rear == -1 )
		printf( "\n Memory underflow \n" );
	else
	{
		if( *front == *rear )
		{
			printf( "\n The deleted element is: %d ", q[ *front ] );
			*front = *rear = -1;
		}
		else
		{
			printf( "\n The deleted element is: %d ", q[ *front ] );
			*front = ( *front + 1 ) % size;
		}
	}
}
/* Main function */		
int main()
{
	int q[ size ], front, rear;
	front = rear = -1; 
	int ele = 1, ch;
		
	while( ele ) /* Menu implementation for interactively invoke functions for circular queue manipulations */
	{
		printf( "\n--------------MENU--------------\n" );
		printf( "\n\t1. Inertion\n\t2. Display\n\t3. Deletion\n\t4. Exit\n" );
		printf( "\n--------------------------------\n" );
		printf( "\n Enter your choice:" );
		scanf( "%d", &ch );
		
		switch( ch )
		{
			case 1 : Insertion( q, &front, &rear );
				 break;
			case 2 : Display( q, &front, &rear );
				 break;
			case 3 : Delete(q, &front, &rear );
				 break; 
			case 4 : ele = 0;
				 break;
			default: printf( "\n Invalid choice \n" );
		}
		
	}
	return 0;
}

