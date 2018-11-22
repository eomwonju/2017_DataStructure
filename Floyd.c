//floyd  알고리즘 
#include <stdio.h> 
#include <limits.h> 

#define TRUE      1 
#define FALSE     0 
#define VERTICES  7  /* 정점의 수 */ 
#define INF  10000 /* 무한대 (연결이 없는 경우) */ 

/* 인접행렬 */ 
int weight[VERTICES][VERTICES]={ 
        {   0,   7,  INF,   5, INF, INF, INF }, 
        {   7,   0,    8,   9,   7, INF, INF }, 
        { INF,   8,    0, INF,   5, INF, INF }, 
		{   5,   9,  INF,   0,  15,   6, INF }, 
		{ INF,   7,    5,  15,   0,   8,   9 }, 
        { INF, INF,  INF,   6,   8,   0,  11 }, 
        { INF, INF,  INF, INF,   9,  11,   0 }}; 

int A[VERTICES][VERTICES];
int B[VERTICES][VERTICES];

void printA(int n) 
{       int i, j, k; 
        printf("===============================\n"); 
        for(i=0; i<n; i++){ 
                for(j=0; j<n; j++){ 
                        if( A[i][j] == INF ) 
                                printf("INF "); 
                                else printf("%3d ", A[i][j]); 
                } 
                printf("\n"); 
        } 
        printf("===============================\n"); 
}

void print_path(int (*P)[VERTICES], int q, int r){
	if(P[q][r]!=-1){
		print_path(P, q, P[q][r]);
		printf("%c->", P[q][r]+65);
		print_path(P, P[q][r], r);
	}
}

void floyd(int n)   
{       int i, j, k;

		for(i=0; i<n ;i++){
			for(j=0; j<n ;j++)
				B[i][j]=-1;
		}

        for(i=0; i<n; i++)
                for(j=0; j<n; j++) 
                        A[i][j]=weight[i][j]; 
                for(k=0; k<n; k++){
                printA(n); 
                for(i=0; i<n; i++) 
                       for(j=0; j<n; j++) 
                       if (A[i][k]+A[k][j] < A[i][j]){
						   A[i][j] = A[i][k]+A[k][j];
						   B[i][j] = k;
						   printf("(%c, %c) %c->", i+65, j+65, i+65);
						   print_path(B, i, j);
						   printf("%c", j+65);
						   printf("\n");
					   }
                } 
} 

main() 
{ 

 printf("\n     <Floyd 알고리즘>        \n"); 
 printf("\n "); 
 
 floyd(VERTICES); 
} 
