#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// Windows
	setbuf(stdout,NULL); // Limpia el buffer de la consola

	int a;
	float f;
	char c;

	printf("Dame un numero:\n");

	fflush(stdin); // Limpia el buffer antes de un scanf

	scanf("%d",&a);

	printf("Tu numero es: %d",a);

	printf("\nPROGRAMA FINALIZADO");



	return EXIT_SUCCESS;
}
