#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	printf("Program wspomaga poszukiwanie rozwiazania Problrmu Odpowiedniosci Posta (POP)\n");
	printf("Uzytkownik wczytuje elementy list A oraz B i manualnie dobiera kolejnosc indeksow\n");
	printf("Program akceptuje lancuchy {0, 1}\n\n");
	int n;
	int m;
	int tmp[100];
	int a[100];
	int b[100];
	int mi[100];
	int temp;

	printf("Liczba elementow list A i B: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d element listy A: ", i);
		scanf_s("%d", &temp);
		a[i - 1] = temp;
		tmp[i - 1] = temp;
		printf("%d element listy B: ", i);
		scanf_s("%d", &temp);
		b[i - 1] = temp;
	}
	int suma = 0;
	int sumb = 0;
	printf("\n");
		printf("Podaj liczbe indeksow: m =  ");
		scanf_s("%d", &m);
		for (int i = 1; i < m + 1; i++) {
			printf_s("i%d = ", i);
			scanf_s("%d", &temp);
			mi[i - 1] = temp;
			for (int j = a[temp - 1]; j > 0; j /= 10)
			{
				if (j % 10 == 1) {
					suma++;

				}
			}
			for (int j = b[temp - 1]; j > 0; j /= 10)
			{
				if (j % 10 == 1) {
					sumb++;

				}

			}
		}
		printf("\n");
		if (suma == sumb) {
			printf("POP ma rozwiazanie:  ");
			for (int i = 0; i < m; i++)
				printf_s("w%d", mi[i]);
			printf_s(" = ");
		}
		else
			printf("POP nie ma rozwiazania\n");
		if (suma == sumb) {
			for (int i = 0; i < m; i++)
				printf_s("x%d", mi[i]);
			printf_s(" = ");
		}
		if (suma == sumb) {
			for (int i = 0; i < m; i++)
				printf_s("%d", tmp[mi[i] - 1]);
			printf("\n");
		}
	

	

	return 0;
}