#include <stdio.h>
#include <stdlib.h>

int oddSumHelp(int count, int bound, int value)
{
	//fill in your code below
	
	int sum_n[count];

	int sum = 0;
	int i_;

	for (int i = 0; i_ < count && i < 30; i++)
	{
		if (i%2 != 0)
		{	
			sum_n[i_] = i;
			i_++;
		}
	}
}

//Do not change the code below
void oddSum(int count, int bound, int value)
{
    	if(value <= 0 || count <= 0 || bound <= 0) return;
    
    	if(bound % 2 == 0) bound -= 1;

    	if(!oddSumHelp(count, bound, value)) printf("No solutions.\n");
	else printf("\n");
}

int main(int argc, char *argv[])
{
	if(argc != 4) return -1;

	int count = atoi(argv[1]);
	int bound = atoi(argv[2]);
	int value = atoi(argv[3]);

	//oddSum(12,30,200);
	//oddSum(10,20,100);
	//oddSum(20,20,200);
	oddSum(count, bound, value);
	return 0;
}
