#include<stdio.h>
#include<math.h>
int N = 22;
int  X;
int arr[30];
long long int cost;

	int i;
int min = 2000000000;
int answer;

int main(int argc, char const *argv[])
{

	int d;
	scanf("%d", &N);
	scanf("%d",&X);
	int k = N;


	while(k--)
	{
		scanf("%d", &d);
		arr[i++] = d;
	}

	for(int i = 0; i< pow(2,N); i++)
	{
		cost = 0;
		for (int j = 0; j < N; ++j)
		{
			if((1 << j)&i)
			{
				cost+= arr[j];
			}
		}
		if(cost > X)
			continue;

		if((X-cost) < min)
		{
			// printf("debug: %d %d\n", cost,i);	
			min = X-cost;
			answer = i;
		}

	}
	// printf("\n %d \n", answer);
	for (int j = 0; j < N; ++j)
		{
			if((1 << j)&answer)
			{
				printf("%d\t", j+1);
			}
		}


	return 0;
}