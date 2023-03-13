#include <stdio.h>

void mover(int n,int a,int c,int b){
	if(n==1){

		printf("\nMova o Disco 1 para a Torre %d",c);

		return;
	}
	mover(n-1,a,b,c);

	printf("\nMova o Disco %d para a Torre %d",n,c);

	mover(n-1,b,c,a);
}

int main(){
	int n;
 
	printf("Digite o numero de discos: ");
	scanf("%d",&n);

	mover(n,1,3,2);
	return 0;
}
