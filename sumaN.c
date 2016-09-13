#include <stdio.h>
#include <stdlib.h>

int main(){

	int *numero,ndato,suma=0,i;
	printf("introdusca la cantidad de numeros a sumar: ");
	scanf ("%d", &ndato);

	numero = (int*) malloc(ndato*sizeof(int));

	for(i=0 ; i<ndato;i++){
		printf("Introdusca el numero %d: ",i);
		scanf("%d", (numero+i));
			suma = suma + *(numero+i);
}
	printf("\n La suma de los numero ingresados es: %d\n",suma);

	free(numero);
printf("\n memoria liberada\n");

return 0;

}
