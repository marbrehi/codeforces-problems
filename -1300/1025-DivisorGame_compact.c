#include <stdio.h>
#include<stdlib.h>
int set_x(int N);
int wins(int N);

main(){
	int N;
	
	printf ("Valor N: ");
	scanf("%d",&N);
	if (wins(N)==1)
		printf("\nTrue");
}

int wins(int N){
	int i=1,x;
		
	do{
		x=set_x(N);//Se propone la 'x' m�s grande
		
		if((N%x)==0){
			N=N-x;
			if (N==0){
				if((i%2)==1){//si el tiro es impar cuando x==0, entonces gana Alicia
					return 1;
					break;
				}
				else{//si el tiro es par cuando x==0, entonces gana Bob
					break;
				}
			}
		}
		i++;
	}while (N>0);
	
}

int set_x(int N){
	if (N==1)
		return 1;
	if ((N%2)==0)
		return (N/2);
	if ((N%3)==0)
		return (N/3);
	if ((N%5)==0)
		return (N/5);
	else
		return N;
}
