#include <stdio.h>
#include <math.h>

//make sure sure you use -lm when compiling 

int main()
{
	double tubwidth;
	double tubdepth;
	double length;
	double width;
	double shallowdepth;
	double deepdepth;
	double deependL;
	double shallowendL;
	double walkinL;
	double length3;
	char id;
	
	/*
	while(1)	
	{	
	printf("Would you like to calculate the Hot Tub or Pool(h or p)");
	scanf("%c", &id);
	if(id == 'h' || id == 'p')
		break;
	else
		printf("Invalid input: Out of range");
	}
	*/
	
		while(1)
		{		
			printf("What is the length of the pool?(35-60 feet)");
			scanf("%lf", &length);
			if(length < 35 || length >70)
				{
					printf("Invalid input: Out of range");
				}
			else
				{
					length3 = length/3;				
					break;
				}
		}	
		
		while(1)	
		{			
			printf("What is the width of the pool?(15-30 feet)");
			scanf("%lf", &width);
			if(width < 15 || width > 30)
				{
					printf("Invalid input: Out of range");
				}
			else
				{
					break;
				}
		}	
	
		while(1)	
		{			
			printf("What is the length of the pool walk in?(5-%lf feet)", length3);
			scanf("%lf", &walkinL);
			if(walkinL < 5 || walkinL > length3)
				{
					printf("Invalid input: Out of range");
				}
			else
				{
					break;
				}
		}	
	
		while(1)	
		{			
			printf("What is the length of the pool shallowend?(10-%lf feet)", length3);
			scanf("%lf", &shallowendL);
			if(shallowendL < 10 || shallowendL >length3)
				{
					printf("Invalid input: Out of range");
				}
			else
				{
					break;
				}
		}	
	
		while(1)	
		{			
			printf("What is the length of the pool deepend?(12-%lf feet)", length/2);
			scanf("%lf", &deependL);
			if(deependL < 12 || deependL >length/2)
				{
					printf("Invalid input: Out of range");
				}
			else
				{
					break;
				}
		}	

		while(1)
		{			
			printf("What is the depth of the shallowend?(2-5 feet)");
			scanf("%lf", &shallowdepth);
			if(shallowdepth < 2 || shallowdepth >5)
				{
					printf("Invalid input: Out of range");
				}
			else
				{
					break;
				}
		}
		while(1)
		{			
			printf("What is the depth of the deepend?(6-12 feet)");
			scanf("%lf", &deepdepth);
			if(deepdepth < 6 || deepdepth >12)
				{
					printf("Invalid input: Out of range");
				}
			else
				{
					break;
				}
		}

				
	
		while(1)
		{		
			printf("What is the width of the hottub?(8-14 feet)");
			scanf("%lf", &tubwidth);
			if(tubwidth < 8 || tubwidth >14)
				{
					printf("Invalid input: Out of range");
				}
			else
				{
					break;
				}
		}
		while(1)
		{		
			printf("What is the depth of the hottub?(3-5 feet)");
			scanf("%lf", &tubdepth);
			if(tubdepth < 3 || tubdepth >5)
				{
					printf("Invalid input: Out of range");
				}
			else
				{
					break;
				}
		}
	
		
	
	
	
	
	
}

