#include<stdio.h>
int main( )
{
	
	//As variaveis de nome 'q' significam os quocientes das divisoes
	
 int digito1,digito2,digito3,digito4,q2,q3,q4,numero,decimal;
 char op;
printf(" Digite um numero ternario qualquer, de ate quatro digitos: ");

scanf("%d", &numero);

	//Separando os digitos do numero inserido

	digito4 = numero % 10;
	q4 = (numero - digito4)/10;
	digito3 = q4 % 10;
	q3 = (q4 - digito3)/10;
	digito2 = q3 % 10;
	q2 = (q3 - digito2)/10;
	digito1 = q2;

if (q4 == 0){
	op = 1;  //numeros com 1 digito
	
	}else if(q4 != 0 && q3 == 0){
	
		op = 2;   //numeros com 2 digitos
		
		}else if(q4 != 0 && q3 != 0 && q2 == 0) {
			op = 3;   //numeros com 3 digitos
			
			}else{
				op = 4;   //numeros com 4 digitos
				
				}
	
switch(op){
	case 1:
  
  
    decimal = digito4 - 1;
    printf("\nO numero inserido, depois de balanceado e convertido para a forma decimal e: %d", decimal);
	break;

case 2:
	
	decimal =  (digito3-1)*3 + (digito4-1)*1;
	printf("\nO numero inserido, depois de balanceado e convertido para a forma decimal e: %d", decimal);
    break;
     
case 3:

      decimal = (digito2-1)*9 + (digito3-1)*3 + (digito4 -1)*1;
      printf("\nO numero inserido, depois de balanceado e convertido para a forma decimal e: %d", decimal);
	  break;
   
case 4:

    decimal = (digito1-1)*27 + (digito2-1)*9 + (digito3-1)*3 + (digito4 -1)*1;
    printf("\nO numero inserido, depois de balanceado e convertido para a forma decimal e: %d", decimal);
    break;
  }
}

			
			
		

