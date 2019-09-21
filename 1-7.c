#include<stdio.h>
#include<math.h>
int N;



int main(int argc, char const *argv[])
{
	scanf("%d", &N);

	for(int i = 0; i < pow(2,N); i++)
	{
		printf("\n %d: ", i);
		for(int j = 0; j < N; j++)
		{
			if((1 << j)&i)
			{
				int k = (i - pow(2, j));
				if(k > i)
				printf(" %d ", k);
		}
			else
			{
				int k = (i + pow(2, j));
				if(k > i)
				printf(" %d ", k);
			}
		}
	}
	
	return 0;
}