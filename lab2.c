#include<stdio.h>



int factorial(int);
int fibonacci(int);
void runHanoi(int, char, char, char);


int main()
{
	char selection;
	//be careful of input variable causing errors	
	int input;
	int input2;
	int i=0;
	int i2;
	
	while(1)
	{
	printf("\n Which program would you like to run?: 1.Factorial 2.Fibonacci 3.Hanoi Towers");
	scanf("%c", &selection);
	
	switch(selection)
	{
		case '1' :			
			printf("Please enter a whole number you would like to be factored:");
			scanf("%d", &input);
			printf("%d", factorial(input));
			printf("\n");
			break;
			
		case '2' :
			printf("Please enter a whole number for Fibonacci:");		
			scanf("%d", &input2);
			printf("\n");
			while(1)
			{
				if(fibonacci(i) > input2 && fibonacci(i-1) < input2)
				{
					for(i2=0; i2 < i; i2++)
					{
						printf(", %d", fibonacci(i2));
					}
					break;
				}
				else
					i++;
			}
			break;
		
			
		case '3' :
			printf("Please enter the amount of discs you would like to move");
			scanf("%d ", &input);
			runHanoi(input, 'A', 'B', 'C');
			break;
			
	}
	}


}








int factorial(int n)
{
	if (n==0)
		return 1;
	else
		return n * factorial(n-1);
}


int fibonacci(int n)
{
	if(n <= 1)
		return n;
	else	
		return fibonacci(n-1) + fibonacci(n-2);
		
}	

void runHanoi(int n, char x, char y, char z)
{
	if(n == 1)	
	{
		printf("\n Move disc 1 from pole %c to pole %c", x, y);
	}
	else
	{
		runHanoi(n-1, x, y, z); 
    		printf("\n Move disk %d from pole %c to pole %c", n, x, y);
		runHanoi(1, x, y, z);  
    		runHanoi(n-1, x, y, z); 
		
	}
}
	
