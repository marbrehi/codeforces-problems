#include <stdio.h>
#include <stdlib.h>
int set_x(int N);

void main(){
	int i=1,x,N;
	
	printf ("¿Qué valor tiene N? ");
	scanf("%d",&N);
	
	do{
		if ((i%2)==1)//tiro impar es turno de Alicia
			printf ("%d >> Alice's turn \n",i);
		else
			printf ("%d >> Bob's turn \n",i);//tiro par es turno de Bob
			
		x=set_x(N);//Se propone la 'x' más grande
		printf ("Try: x: %d",x);
		
		if((N%x)==0){
			N=N-x;
			if (N==0){
				if((i%2)==1){//si el tiro es impar cuando x==0, entonces gana Alicia
					printf ("\nN=0\nAlice wins!!!!\nTrue\n");
					break;
				}
				else{//si el tiro es par cuando x==0, entonces gana Bob
					printf ("\nN=0\nBob wins!!!\nFalse");
					break;
				}
			}
			printf ("\nNuevo número:\n N=N-x=%d-%d: %d\n\n",N+x,x,N);
		}
		
		printf ("\nNext turn!\n");
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
