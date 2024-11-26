#include <stdio.h>
void exibirImpares(int n) {
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0 && i % 7 != 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}
int main() {
	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);
	printf("Números ímpares de 1 até) %d, exceto múltiplos de 7:\n", numero);
	exibirImpares(numero);
	return 0;
}

