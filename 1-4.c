#include<stdio.h>
int n,m;

int arr[505][505];
// int i;

int main()
{
	int flag1=1, flag2 = 1, flag3 = 1;
	scanf("%d %d", &n, &m);
	int k = m;
	while(k--)
	{
		int a,b;
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
	}

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i == j)
			{
				if(!arr[i][j])
					flag1 = 0;
			}
			else if(arr[i][j] && arr[j][i])
			{
				flag2 = 1;
			}
			else
				flag2 = 0; 
			
		}
	}


	for (int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; j++)
		{
			if(arr[i][j])
			{
				int k = 1;

				for(; k <= n; k++)
				{
					if(arr[j][k])
					{
						if(!arr[i][k])
							flag3 = 0;
					}
				}
			}
		}
	}


	if(flag1 && flag2 && flag3)
	{
		printf("Reflexive\nSymmetric\nTransitive\nEquivalence");

	}
	else if(flag1 && flag2)
	{
		printf("Reflexive\nSymmetric");
	}
	else if(flag2 && flag3)
	{
		printf("Symmetric\nTransitive");
	}

	else if(flag1 && flag3)
	{
		printf("Reflexive\nTransitive");
	}
	else if(flag1)
	{
		printf("Reflexive\n");
	}
	else if(flag2)
	{
		printf("Symmetric\n");
	}
	else if(flag3)
	{
		printf("Transitive\n");
	}
	else
	printf("-1\n");



	
}