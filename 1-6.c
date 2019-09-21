#include<stdio.h>
#include<stdlib.h>

int N;
int arr[100005];
int div1[100005];

// int is_prime(int n)
// {
// 	for( int i = 2; i <= pow(n,0.5); i++)
// 	{
// 		if(n%i == 0)
// 		{
// 			return 0;
// 		}
// 	}
// 	return 1;
// }

int cmpfc(const void *a, const void *b)
{
	return(*((int *)a)-(*((int *)b)));
}

int main(int argc, char const *argv[])
{
	scanf("%d", &N);

	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	qsort(arr, N, 4, cmpfc );

// for (int i = 0; i < N; ++i)
// {
// 	printf("\t %d", a[i]);
// }
	int flag = 1;
	for(int i = 0; i < N; i++)
	{
		// int temp = 0;
		int j = 0;
		for(; j < N; j++)
		{
			// printf("%d ", arr[j]%arr[i]);
			if(i == j)
				continue;
			if(!(arr[j] % arr[i]))
				break;
			
			
		}
		if(j == N)
			div1[i] = 1;
	}

	for(int i = 0; i < N; i++)
	{
		if(div1[i])
			printf(" %d ", arr[i]);
	}


	
	return 0;
}