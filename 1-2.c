#include<stdio.h>

int N;
int arr[15];
int course[11];
int visited[11];
int adj[11][11];
int P[50], C[50];
int M;
int order[11];

int main()
{
	scanf("%d", &N);
	//printf("loool%d\n", N);

	for (int i = 1; i <= N; ++i)
	{
		int a;
		scanf("%d",&a);
		course[a] = 1;
	}

	for(int i =1; i<=10;i++){
		if(course[i] ){
			visited[i] = 0;
		}
		else 
			visited[i] = 1;
	}

	// for(int i =1; i<= 10; i++)
	// {
	// 	printf("%d %d\n",course[i], visited[i] );
	// }
	scanf("%d",&M);
	//printf("lol%d\n", M);
	while(M--){
		int p,q;
		scanf("%d%d", &p , &q);
		// printf("%d %d \n", p,q);
		adj[p][q] = 1;
	}

	int in = 0;
	while(in < N) {
		//printf("in :%d\n", in);
		for(int j = 1; j<= 10; j++)
		{
			int flag = 1;
			if(visited[j])
				continue;

			for(int  i = 1; i <= 10; i++){
				if(adj[i][j]!= 0) {
					//traverse order arr to check if prereq is there
					int k;
					for(k = 0; k < in; k++) {
						//checking if node is in order array
						if(order[k] == i) {
							break;
						}
					}
					if(k == in) {
						flag = 0;
					}
				}
				//one case didnt satisfy, so no need to check rest
				if(!flag) {
					break;
				}
			}
			if(flag){
				visited[j] = 1;
				order[in++] = j;
			} 
		}
	}

	for(int k = 0; k < in; k++) {
		printf("%d ", order[k]);
	}

	return 0;
}