#include<stdio.h>
#include<stdlib.h>


int main(){
	
		
	int n1,n2,iguais;
		
		printf("Insira o primeiro numero:\n");
		scanf("%d",&n1);
		
		printf("Insira o segundo numero:\n");
		scanf("%d",&n2);
		
		
		if(n1>n2 ){
			
			printf("Primeiro numero maior!\n");
		}
			
		if(n1<n2 ){
			
			printf("Segundo numero maior!\n");
		}
		
		if(n1==n2 ){
			
			printf("Os numeros são iguais!\n");
		}
				


	
	
	return 0;
}

