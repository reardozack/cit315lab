#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//use clock() for gettign the teim


void bubblesort(int array[]);
void pbubblesort(int array[]);
void selectionsort(int array[]);
void pselectionsort(int array[]);
void insertionsort(int array[]);
void pinsertionsort(int array[]);
void binarysearch(int array[], int size, int searchindex);
void pbinarysearch(int array[], int size, int searchindex);
void linearsearch(int array[], int size, int searchindex);
void plinearsearch(int array[], int size, int searchindex);


int main()
{
	int size = 50000;
	int i=0;
	int r=0;
	int searchindex = 0;
		
	srand(time(NULL));
	int array[size];
	int copyarray[size];

	clock_t start_t, end_t, total_t;
	
	//initializing array
	for(i=0;i <= size; i++)
	{
		r = rand() % 100000;
		array[i] = r;
	}

	
	//printing original array unsorted
	//for(i=0;i <= size; i++)
	//{
	//	printf("%d ", array[i]);
	//	
	//}
	//printf("\n bubble sort \n");	
	
	//copy array from array
	for(i=0;i <= size; i++)
	{
		copyarray[i] = array[i];
	}

	//sort and print

	//start_t = clock();
	bubblesort(copyarray);
	//end_t = clock();
	//total_t = (double)(end_t - start_t);
	//printf("time taken: %li\n", end_t);	

	//for(i=0;i <= size; i++)
	//{
	//	printf("%d ", copyarray[i]);
	//	
	//}

	//printf("\n pbubble sort \n");
	//copy array from array	
	for(i=0;i <= size; i++)
	{
		copyarray[i] = array[i];
	}	
	//sort and print
	pbubblesort(copyarray);
//	for(i=0;i <= size; i++)
//	{
//		printf("%d ", copyarray[i]);
//		
//	}
	//printf("\n selection sort \n");
	//copyarray from array
	for(i=0;i <= size; i++)
	{
		copyarray[i] = array[i];
	}	
	//sort and print	
	selectionsort(copyarray);
//	for(i=0;i <= size; i++)
//	{
//		printf("%d ", copyarray[i]);
//		
//	}
//	printf("\n pselection sort \n");
	//copyarray from array
	for(i=0;i <= size; i++)
	{
		copyarray[i] = array[i];
	}

	//sort and print
	pselectionsort(copyarray);
//	for(i=0;i <= size; i++)
//	{
//		printf("%d ", copyarray[i]);
//		
//	}
//
//	printf("\n insertion sort \n");
	//copyarray from array
	for(i=0;i <= size; i++)
	{
		copyarray[i] = array[i];
	}

	//sort and print
	insertionsort(copyarray);
//	for(i=0;i <= size; i++)
//	{
//		printf("%d ", copyarray[i]);
//		
//	}
//	printf("\n pinsertion sort \n");
	//copyarray from array
	for(i=0;i <= size; i++)
	{
		copyarray[i] = array[i];
	}
	//sort and print
	pinsertionsort(copyarray);
//	for(i=0;i <= size; i++)
//	{
//		printf("%d ", copyarray[i]);
//		
//	}
//
//	printf("\n binarysearch \n");
	
	//search
	searchindex = rand() % size+1;
	binarysearch(copyarray,size, searchindex);
	//search
	pbinarysearch(copyarray,size, searchindex);

	searchindex = rand() % size+1;
	linearsearch(copyarray,size, searchindex);
	plinearsearch(copyarray,size,searchindex);
		


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
	for(c=0; c<(n); c++)
	{
		position = c;
		for(d=c+1; d<=n+1; d++)
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
	for(c=0; c<(n); c++)
	{
		position = c;
		for(d=c+1; d<=n+1; d++)
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

void insertionsort(int array[])
{
	int n, c, d, t;
	for(c=1; c<=n; c++)
	{
		d=c;
		while(d >0 && array[d-1] > array[d])
		{
			t = array[d];
			array[d]=array[d-1];
			array[d-1] = t;
			
			d--;
		}
	}
}

void pinsertionsort(int array[])
{
	int n, c, d, t;
	for(c=1; c<=n; c++)
	{
		d=c;
		while(d >0 && array[d-1] > array[d])
		{
			t = *(array+d);
			*(array+d)=*(array+d-1);
			*(array+d-1) = t;
			
			d--;
		}
	}
}

void binarysearch(int array[], int size, int searchindex)
{
	int first, last, middle, n, search, i;
	i = searchindex;
	search = array[i];
	first = 0;
	last = size - 1;
	
	
	while (first <= last)
	{	
		middle = (first+last)/2;
		if (array[middle] < search)
		{
			first = middle +1;
		}
		else if (array[middle] == search)
		{
			printf("%d found at location %d. \n", search, middle+1);
			break;
		}
		else
		{
			last = middle - 1; 

		}
	}	
}

void pbinarysearch(int array[], int size, int searchindex)
{
	int first, last, middle, n, search, i;
	i = searchindex;
	search = *(array+i);
	first = 0;
	last = size - 1;
	
	
	while (first <= last)
	{	
		middle = (first+last)/2;
		if (*(array+middle) < search)
		{
			first = middle +1;
		}
		else if (*(array+middle) == search)
		{
			printf("%d found at location %d. \n", search, middle+1);
			break;
		}
		else
		{
			last = middle - 1; 
		}
	}	
}

void linearsearch(int array[], int size, int searchindex)
{
	int search, c, n;
	search = array[searchindex];
 
  	for (c = 0; c < size; c++)
  	{
    		if (array[c] == search)
    		{
      			printf("%d is present at location %d.\n", search, c+1);
      			break;
    		}
  	}
}

void plinearsearch(int array[], int size, int searchindex)
{
	int search, c, n;
	search = *(array+searchindex);
 
  	for (c = 0; c < size; c++)
  	{
    		if (*(array+c) == search)
    		{
      			printf("%d is present at location %d.\n", search, c+1);
      			break;
    		}
  	}
}




	










