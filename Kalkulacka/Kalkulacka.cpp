// Kalkulacka.cpp : Defines the entry point for the application.
//

#include "Kalkulacka.h"

int main(void)
{
	int volba, zaokrouhl;
	double cislo, vysledek;
	
	printf("\nZadejte cislo:");
	scanf("%lf", &cislo);

	do
	{

		printf("\n1. Druha mocnina\n");
		printf("2. Druha odmocnina\n");
		printf("3. Zaokrouhlena hodnota\n");
		printf("4. Faktorial ze zaokrouhlene hodnoty\n");
		printf("Volba:");
		scanf("%d", &volba);
		switch (volba)
		{
		case 1:
			vysledek = pow(cislo, 2);
			printf("%lf", vysledek);
			break;
		case 2:
			vysledek = sqrt(cislo);
			printf("%lf",vysledek);
			break;
		case 3:
			zaokrouhl = round(cislo);
			printf("%d", zaokrouhl);
			break;
		case 4:
			vysledek = 1;
			for (int i=1; i<= zaokrouhl; i++)
			{
				vysledek = vysledek * i;
			}
			printf("Faktorial: %.lf",vysledek);
			break;
		default:
			break;
		}
	} while (volba != 0);

	return 0;
}
