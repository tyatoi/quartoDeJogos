#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	float l1 = 0.0, l2 = 0.0, l3 = 0.0;
	printf("Qual a medida do primeiro lado? ");
	scanf("%f", &l1);
	printf("Qual a medida do segundo lado? ");
	scanf("%f", &l2);
	printf("Qual a medida do terceiro lado? ");
	scanf("%f", &l3);
	if ((l1 + l2 + l3) / 2 >= 12) {
		printf("Voce pode construir o quarto de jogos");
	} else {
		printf("Voce nao pode construir o quarto de jogos");

	}
	return 0;
}