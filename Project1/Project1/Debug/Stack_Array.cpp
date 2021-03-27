#include<stdio.h>
void push(int a[],int TOP)
{
	int n;
	printf("Enter the number");
	scanf("%d", &n);
	TOP = TOP + 1;
	a[TOP] = n;
	printf("\nThe entered Element %d is pushed onto the stack.\n", n);
}
void pop(int a[],int TOP)
{
	int n;
	n = a[TOP];
	printf("\nThe elememt %d is poped out of the stack", n);
	TOP = TOP - 1;

}
void display(int a[], int TOP)
int i;
printf("The stack elements are:");
for (i = TOP; i >= 0; i--)
printf("%d", a[i]);
}
int main()
{
	int arr[10], TOP = -1;
	int ch, e = 1;
	while (e)
	{
		printf("\n_______________MENU_______________");
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.Exit\n");
		printf("\n__________________________________");
		printf("Enter your choice:");
		scanf("%d", &ch);
		switch (ch)
			case 1:push(arr, &TOP);
		break;
			case 2:pop(arr, &TOP)
				break;
			case 3:display(arr, &TOP)
				break;
			case 4:n = 0;
				printf("\nExiting from the program");
				break;
			default:printf("please Enter a valid choice");
	}
	return 0;
}