﻿/*
Лабораторная работа 8. Вариант 4.
Дано целое число типа unsigned short, выведите на экран содержимое каждого из его байтов, используя знания по указателям. Дайте обоснование полученному результату.
*/

#include <iostream>

int main() {
	// дано целое число типа unsigned short
	unsigned short value = USHRT_MAX;

	// приводим адрес к значению unsigned char*
	unsigned char* ucPtr = (unsigned char*)&value;

	// выводим содержимое каждого из байтов
	// unsigned short занимает 2 байта, поэтому цикл выполняется 2 раза
	for (int i = 0; i < 2; i++) {
		// перемещаем указатель вперед на индекс итерации
		ucPtr += i;

		// выводим
		std::cout << +(*ucPtr) << std::endl;
	}
}