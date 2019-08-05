#include <stdio.h>

int main()
{

	int soma, A, B;	
	while(scanf("%i %i",&A,&B) != EOF){
		//scanf("%i %i",&A,&B);
		soma = A + B;
		printf("X = %i\n",soma);
	}
	return 0;	
}
