#include <stdio.h>
#include <string.h>
void swap(char *x, char *y){
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char *a, int s, int e){

	if(s == e)
	{
		printf("\n%s", a);
	}

	for(int i = s; i<=e;i++){
		swap(a+i, a+s);
		permute(a,s+1,e);
		swap(a+i,a+s);

	}

}

char arr[15];

int main(int argc, char const *argv[])
{
	scanf("%s", arr);
	
	int len = strlen(arr);
	permute(arr, 0, len-1);

	// for (int i = 0; i < len; ++i)
	// {
	// 	for (int j = 0; j < len; ++j)
	// 	{
	// 		if(i!=j)
	// 		{ 
	// 			swap((arr+i),(arr+j));
	// 			printf("\n%s", arr);
	// 			swap((arr+i),(arr+j));		
	// 		}
	// 	}

	// }

	
	return 0;
}