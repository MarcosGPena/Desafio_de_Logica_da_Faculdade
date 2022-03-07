

#include <stdio.h>

int main()
{
	int numero,horario;
	
	int digito1,digito2,digito3,digito4,q2,q3,q4;
	
	int digito01,digito02,digito03,digito04,q02,q03,q04;
	
	int digito001,digito002,digito003,digito004,q002,q003,q004;
	
	int maior1,maior2,maior3,maior4,menor1,menor2,menor3,menor4;
	
	int maiores,menores,diferenca,codigoConfirmacao;
	
	printf("Insira os quatro ultimos digitos do seu cartao :  ");
	scanf("%d",&numero);
	printf("Informe o horario atual, no formato HH:MM, sem pontos: ");
	scanf("%d",&horario);
	
	//separando os digitos do cartao
	
	digito4 = numero % 10;
	q4 = (numero - digito4)/10;
	digito3 = q4 % 10;
	q3 = (q4 - digito3)/10;
	digito2 = q3 % 10;
	q2 = (q3 - digito2)/10;
	digito1 = q2;
	
	//separando os digitos do horario
	
	digito04 = horario % 10;
	q04 = (horario - digito04)/10;
	digito03 = q04 % 10;
	q03 = (q04 - digito03)/10;
	digito02 = q03 % 10;
	q02 = (q03 - digito02)/10;
	digito01 = q02;
	
	
	printf("\nCartao : %d %d %d %d , horario  %d %d h %d %d min\n\n", digito1,digito2,digito3,digito4 , digito01,digito02,digito03,digito04);
	
	//Identificando quais sao os maiores e menores digitos em cada posicao
	
	if( digito1>=digito01){maior1 = digito1; menor1 = digito01;}else{maior1 = digito01; menor1 = digito1;}
	
	if( digito2>=digito02){maior2 = digito2; menor2 = digito02;}else{maior2 = digito02; menor2 = digito2;}
	
	if( digito3>=digito03){maior3 = digito3; menor3 = digito03;}else{maior3 = digito03; menor3 = digito3;}
	
	if( digito4>=digito04){maior4 = digito4; menor4 = digito04;}else{maior4 = digito04; menor4 = digito4;}
	
	//Formando numero so com maiores digitos e numero so com menores digitos
	
	maiores = maior1*10*10*10 + maior2*10*10 + maior3*10 + maior4*1;
	
	menores = menor1*10*10*10 + menor2*10*10 + menor3*10 + menor4*1;
	
	
	diferenca = maiores - menores; 
	
	//separando os digitos do numero formado pela diferenca entre maiores e menores
	
	digito004 = diferenca % 10;
	q004 = (diferenca - digito004)/10;
	digito003 = q004 % 10;
	q003 = (q004 - digito003)/10;
	digito002 = q003 % 10;
	q002 = (q003 - digito002)/10;
	digito001 = q002;
	
	//Formando o invertido da diferenca (Codigo de confirmacao);
	
	codigoConfirmacao = digito004*10*10*10 + digito003*10*10 + digito002*10 + digito001*1;
	
	printf("Codigo de Confirmacao = %d \n\n",codigoConfirmacao);
	
	
}



