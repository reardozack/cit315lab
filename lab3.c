#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubblesort(int array[]);
void pbubblesort(int array[]);

int main()
{
	int size = 10;
	int i=0;
	int r=0;
		
	srand(time(NULL));
	int array[size];
	int copyarray[size];
	

	for(i=0;i <= size; i++)
	{
		r = rand() % 1000;
		array[i] = r;
	}

	

	for(i=0;i <= size; i++)
	{
		printf("%d ", array[i]);
		
	}
	printf("\n--------------------------------------------------------------\n");	
	bubblesort(copyarray);
	
	for(i=0;i <= size; i++)
	{
		copyarray[i] = array[i];
	}
	
	for(i=0;i <= size; i++)
	{
		printf("%d ", array[i]);
		
	}

	printf("\n--------------------------------------------------------------\n");
	pbubblesort(array);
	for(i=0;i <= size; i++)
	{
		printf("%d ", array[i]);
		
	}
	
	


}


void bubblesort(int array[])
{
	int n, c, d, swap;
	for (c=0; c < n-1; c++)
	{
		for (d=0; d<n-c; d++)
		{
			if (array[d] > array[d+1])
			{
				swap = array[d];
				array[d] = array[d+1];
				array[d+1] = swap;
			}
		}
	}
}


void pbubblesort(int array[])
{
	int n, c, d, swap;
	for (c=0; c < n-1; c++)
	{
		for (d=0; d<n-c; d++)
		{
			if (*(array+d) > *(array+d+1))
			{
				swap = *(array+d);
				*(array+d) = *(array+d+1);
				*(array+d+1) = swap;
			}
		}
	}
}

void selectionsort(int array[])
{
	int n, c, d, position, swap;
	for(c=0; c<(n-1); c++)
	{
		position = c;
		for(d=c+1; d<n; d++)
		{
			if (array[position] > array[d])
				position = d;
		}
		if (position != c)
		{
			swap = array[c];
			array[c] = array[position];
			array[position] = swap;
		}
	}
}

void pselectionsort(int array[])
{
	int n, c, d, position, swap;
	for(c=0; c<(n-1); c++)
	{
		position = c;
		for(d=c+1; d<n; d++)
		{
			if (*(array+position) > *(array+d))
				position = d;
		}
		if (position != c)
		{
			swap = *(array+c);
			*(array+c) = *(array+position);
			*(array+position) = swap;
		}
	}
}
