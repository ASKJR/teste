#include <stdio.h>
#include <stdlib.h>

int fatorial (int n){
	int i,fat=1;
	if(n==0)
		return 1;
	for(i=n;i>=1;i--){
		   	fat*=i;
	}
	return fat;
}

int main(){
	int num;
	printf("Digite um numero > ");
	scanf("%d",&num);
	printf("O fatorial do numero digitado eh: %d\n",fatorial(num));
	return 0;
}