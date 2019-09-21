#include<stdio.h>
#include<string.h>

char str[1005];
int cnt;
int is_pal(char *s)
{
	int k = strlen(s);
	// printf("%d\n", k);
	int flag = 1;
	if(k%2)
	{	
		for(int i = 0; i < k/2; i++)
		{
			if(!(s[i] == s[k-i-1]))
			{
				// printf("returned\n");
				return 0;
			}
		}
		return 1;
	}
	else
	{
		for(int i = 0; i < (k/2 + 1); i++)
		{
			if(!(s[i] == s[k - i - 1]))
				return 0;
		}
		return 1;
	}	
}




int main(int argc, char const *argv[])
{
	int i = 0;
	char c;
	int j = 0;
	char str1[1005] = {'\0'}, s[1005] = {'\0'};
	while(c!= '\n')
	{
		
		scanf("%c", &c);
		
		if(c == ' ' || c == '\n')
		{
			int k = 0;
			for(; j < i; j++)
			{
				str1[k++] =str[j];
			}
			str1[k] = '\0';
			// printf("%s\n", );
			j = i;
			// int freq[1005];
			int n = strlen(str1);
			// printf("\n%s", str1);
			// printf("%d\n", is_pal(str1));
			if(is_pal(str1)){
				printf("%s ", str1);
				continue;
			}
			// printf("\n====%s",str1);
			for(int p = 1; p <= n-1; p++)
			{
				for(int l = 0; l < n; l++)
				{
					s[(l+p)%n] = str1[l];
				}
				// 
				if(is_pal(s))
				{
					printf(" %s", s);
					break;
				}

			}

			for (int p = 0; p < n; ++p)
			{
				s[p] = '\0';
				str1[p] = '\0';
			}		

		}
		else
			str[i++] = c;

	// for(int j = 0; j < i; j++)
	// {
	// 	printf("%c", str[j]);
	}
	return 0;
}

