#include<stdio.h>
#include<malloc.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int size, sum = 0;
	printf("Введите размер массива: "); scanf_s("%d", &size);
	int* mas; mas = (int*)malloc(size * sizeof(int));//создание динамического массива
	for (int i = 0; i < size; i++) { scanf_s("%d", &mas[i]); }//ввод всех чисел масива
	for (int i = 0; i < size; i++) { if (mas[i] > 0) { sum += mas[i]; } }//проверка условия задания
	printf("Ответ: %d", sum); printf(" - сумма всех чисел масива больше нуля.");//ввывод ответа
}