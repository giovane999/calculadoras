#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){

	int i,a,b,x;
	float d,c,y;
	
	printf("Calculadora 01 by: Eric Rodrigues");

	
	i = 1;
	
	while(i != 0){
	

		printf(" \n\n\n +------------------------+\n");
		printf(" |	1 - Soma	  |\n");
		printf(" |	2 - Subtrai	  |\n");
		printf(" |	3 - Multiplica	  |\n");
		printf(" |	4 - Divide 	  |\n");
		printf(" |	0 - Sair 	  |\n");
		printf(" +------------------------+\n");
		
		printf("Digite o numero da operacao desejada! ");
	
	scanf("%i",&i);
	
	switch(i){
	
		case 1 :
		
			printf("\nDigite o primeiro valor de 'A': " ,a);
			scanf("%i" ,&a );
			
			printf("\nDigite o segundo valor de 'B': ", b );
			scanf("%i",&b);	
			
			x = a + b;
			printf("\nResultado = %i ",x);
		break;
			
		case 2 :
		
			printf("\nDigite o primeiro valor de 'A': " ,a);
			scanf("%i" ,&a );
			
			printf("\nDigite o segundo valor de 'B': ", b );
			scanf("%i",&b);	
			
			x = a - b;
			printf("\nResultado = %i ",x);
		break;
		
		case 3 :
		
			printf("\nDigite o primeiro valor de 'A': " ,a);
			scanf("%i" ,&a );
			
			printf("\nDigite o segundo valor de 'B': ", b );
			scanf("%i",&b);	
			
			x = a * b;
			printf("\nResultado = %i ",x);
		break;
		
		case 4 :
		
			printf("\nDigite o primeiro valor de 'A': " ,c);
			scanf("%f" ,&c );
			
			printf("\nDigite o segundo valor de 'B': ", d);
			scanf("%f",&d);	
			
			y = c / d;
			printf("\nResultado = %f ",y);
		break;
			
		default :
			printf(" Opcao invalida, digite outro numero! ");
		break;
					
	
	}
	
}
	
	
	return 0;
}
