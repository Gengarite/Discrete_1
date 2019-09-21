#include<stdio.h>
#include<string.h>
int n;
char arr[27];
int a1[27],a2[27];
int count;


int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	int k = n;
	int p = 0;
	while(k--)
	{
		char c;
		scanf("\n%c", &c);
		if(c == 'M' || c == 'B')
			continue;
		arr[p++] = c;
	}

	// for(int i = 0; i < strlen(arr); i++)
	// {
	// 	printf("%c\t", arr[i]);
	// }
	

	for(int i = 0; i < pow(2,n-2); i++)
	{
		int temp = 0, temp1 = 0;

		for(int j = 0; j < n-2 ; j++)
		{
			if((1<<j)&i)
				a1[temp++] = j;
			else
				a2[temp1++] = j;
		}
		if((temp == (n-2)/2) && (temp1 == (n-2)/2))
		{
			count++;
			printf("\nM: ");
			for(int k = 0; k < (n-2)/2; k++)
			{
				// if(a1[k]);
				{
					printf(" %c", arr[a1[k]]);
				}
			}
			printf("  |  B: ");
			for(int k = 0; k < (n-2)/2; k++)
			{
				// if(a2[k])
				{	
					printf(" %c", arr[a2[k]]);
				}
			}

		}
		
	}
	printf("\n%d", count);
	return 0;
}