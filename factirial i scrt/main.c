#include <stdio.h>
#include <locale.h>
#include "factorials.h"
#include "koren.h"

#define НИЧЕГО_НЕ_ВОЗВРАЩАЕТ void
#define true 1
#define symbol symbol_
#define чар char
#define инт int
#define равно =
#define кавычка "N"
#define тчка_зпт ;
#define НАЧАЛО_ФУНКЦИИ {
#define КОНЕЦ_ФУНКЦИИ }
#define принтеф printf
#define сканф_с scanf_s
#define рашн setlocale(LC_ALL,"Russian");
#define ыф if
#define ылсе else
НИЧЕГО_НЕ_ВОЗВРАЩАЕТ main()
НАЧАЛО_ФУНКЦИИ
рашн
инт mode = 0;
while (true) НАЧАЛО_ФУНКЦИИ

принтеф("\nВыберете режим: \n1 - факториал; \n2 - корень;\n")тчка_зпт
сканф_с("%d", &mode);

ыф(mode == 1) НАЧАЛО_ФУНКЦИИ
инт x;
принтеф("\nВведите число:")тчка_зпт
	сканф_с("%d", &x);
	принтеф("\nФакториал числа %d равен %f", x, fact(x))тчка_зпт
		КОНЕЦ_ФУНКЦИИ
ылсе ыф(mode == 2) НАЧАЛО_ФУНКЦИИ
инт y;
	принтеф("\nВведите число:")тчка_зпт
	сканф_с("%d", &y);
	принтеф("\nКорень от числа %d равен %f", y, koren(y))тчка_зпт
		КОНЕЦ_ФУНКЦИИ
ылсе
НАЧАЛО_ФУНКЦИИ
	принтеф("\nВы ввели что-то не то!")тчка_зпт
		КОНЕЦ_ФУНКЦИИ
		КОНЕЦ_ФУНКЦИИ



system("pause");
КОНЕЦ_ФУНКЦИИ

