#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "UTF-8");
	printf("Номер варианта:%d\n", 30 % 20 + 1);
    int A, B;
    int condition;

    printf("=СИСТЕМА ДОСТУПА В КОВОРКИНГ=\n");

    printf("Введите два целых числа\n");

    scanf("%d %d", &A, &B);


    condition = ((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0));

    puts("Если 1 - доступ разрешен, если 0 - доступ запрещен %d");
    printf("Ваш доступ: %d", condition);

}