#include <stdio.h>
#include <locale.h>
#include "factorials.h"
#include "koren.h"

#define ������_��_���������� void
#define true 1
#define symbol symbol_
#define ��� char
#define ��� int
#define ����� =
#define ������� "N"
#define ����_��� ;
#define ������_������� {
#define �����_������� }
#define ������� printf
#define �����_� scanf_s
#define ���� setlocale(LC_ALL,"Russian");
#define �� if
#define ���� else
������_��_���������� main()
������_�������
����
��� mode = 0;
while (true) ������_�������

�������("\n�������� �����: \n1 - ���������; \n2 - ������;\n")����_���
�����_�("%d", &mode);

��(mode == 1) ������_�������
��� x;
�������("\n������� �����:")����_���
	�����_�("%d", &x);
	�������("\n��������� ����� %d ����� %f", x, fact(x))����_���
		�����_�������
���� ��(mode == 2) ������_�������
��� y;
	�������("\n������� �����:")����_���
	�����_�("%d", &y);
	�������("\n������ �� ����� %d ����� %f", y, koren(y))����_���
		�����_�������
����
������_�������
	�������("\n�� ����� ���-�� �� ��!")����_���
		�����_�������
		�����_�������



system("pause");
�����_�������

