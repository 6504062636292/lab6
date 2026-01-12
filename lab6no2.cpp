#include<stdio.h>

int main(){
	int A[10][10];
	int i,j,a,b;
	
	scanf("%d %d",&a,&b);
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&A[i][j]);
		}	
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d ",A[i][j]+1);
		}
	printf("\n");
	}
}
