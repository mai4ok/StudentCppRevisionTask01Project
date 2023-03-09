﻿#include "tasks.h"

/*	Task 02. Two Numbers [два числа]
*
*	Даны два целых числа. Программа должна вывести единицу,
*	если первое число больше второго, двойку, если второе больше первого,
*	или ноль, если они равны.
*
*	Примечание
*	При реализации программы постарайтесь не использовать условные конструкции.
*	Данную задачу можно решить с использованием только встроенных в язык C/C++ простых операций.
*
*	Формат входных данных [input]
*	Функция принимает два любых целых числа.
*
*	Формат выходных данных[output]
*	Функция должна вывести результирующее число.
*
*	[Sample function input  1]: 7 6
*	[Sample function output 1]: 1
*
*	[input  2]: 6 7
*	[output 2]: 2
*
*	[input  3]: 7 7
*	[output 3]: 0
*/

int task02(int a, int b) {
	return a > b ? 1 : (a == b ? 0: 2);
}