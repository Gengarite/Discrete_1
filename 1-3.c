#include<stdio.h>
#include<string.h>

char s[100005];
int M;

// char *replace(char *c, char u, char v)
// {
// 	char * output = (char*)malloc(strlen(c));

// for (int i = 0; i < strlen(c); i++)
// {
//     if (c[i] == u) output[i] = v;
//     else output[i] = c[i];
// }

// output[strlen(input)] = '\0';

// return output;
// }

int main(int argc, char const *argv[])
{
	scanf("%s", s);
	scanf("%d", &M);
	// char a,b;
	// scanf("%c %c", &a, &b);

	int n = strlen(s);
	// printf("%d", n);

	// &s = replace(&s , a , b);

	while(M--)
	{
		char a,b;
		scanf("\n%c %c", &a, &b);
		// printf("lol:%c %c\n",a,b);
		for(int i = 0; i < n; i++)
		{
			// printf("no %c %c\n",s[i],a);
			if(s[i] == a)
			{
				// printf("boo\n");
				*(s+i) = b;
				// printf("%c\n",s[i]);
			}
		}
	}

	printf("\n%s", s);
	return 0;
}