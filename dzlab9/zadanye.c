#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_CTYPE, "RUS");
	int shirina = 2;
	char input;
	printf("¬ведите символ, которым будет нарисована фигура\n");
	scanf("%c", &input);
	char symbol = input;
	int R;
	printf("¬ведите радиус окружности\n");
	scanf("%d", &R);
	for (int y = R + 1; y >= -R; y--)
	{
		for (int x = - R*shirina; x <= R*shirina + 1; x++)
		{
			double xa = (double)x/shirina;
			double ya = (double)y;
			if (pow(xa, 2) + pow(ya, 2) <= pow(R, 2)) {
				if (xa > 0 && ya > 0) {
					printf(" ");
				}
				else printf("%c", symbol);

			}
			else printf(" ");
		}
		printf("\n");
	}
}