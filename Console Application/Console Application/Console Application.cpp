#include <stdio.h>

int main(){	
	int day, month, year;
	printf("Your date of birth:\n");
	printf("Day? ");
	scanf_s("%i", &day);
	printf("Month? ");
	scanf_s("%i", &month);
	printf("Year? ");
	scanf_s("%i", &year);

	if (year % 4 == 0) {
		printf("Високосный год\n");
	}
	else {
		printf("Невисокосный год\n");
	}

	printf("Год по китайскому календарю:\n");
	switch(year%12)
	{
	case 0:
	{
		printf("Обезьяны");
	}
	break;
	case 1:
	{
		printf("Петуха");
	}
	break;
	case 2:
	{
		printf("Собаки");
	}
	break;
	case 3:
	{
		printf("Свиньи");
	}
	break;
	case 4:
	{
		printf("Крысы");
	}
	break;
	case 5:
	{
		printf("Быка");
	}
	break;
	case 6:
	{
		printf("Тигра");
	}
	break;
	case 7:
	{
		printf("Кролика");
	}
	break;
	case 8:
	{
		printf("Дракона");
	}
	break;
	case 9:
	{
		printf("Змеи");
	}
	break;
	case 10:
	{
		printf("Лошади");
	}
	break;
	case 11:
	{
		printf("Овцы");
	}
	}
	printf("\nЗнак зодиака\n");
	if ((month == 12 and day > 19) || (month == 1 and day < 22)) {
		printf("Козерог");
	}
	else if ((month == 1 and day > 19) || (month == 2 and day < 22)) {
		printf("Водолей");
	}
	else if ((month == 2 and day > 19) || (month == 3 and day < 22)) {
		printf("Рыбы");
	}
	else if ((month == 3 and day > 19) || (month == 4 and day < 22)) {
		printf("Овен");
	}
	else if ((month == 4 and day > 19) || (month == 5 and day < 22)) {
		printf("Телец");
	}
	else if ((month == 5 and day > 19) || (month == 6 and day < 22)) {
		printf("Близнецы");
	}
	else if ((month == 6 and day > 19) || (month == 7 and day < 22)) {
		printf("Рак");
	}
	else if ((month == 7 and day > 19) || (month == 8 and day < 22)) {
		printf("Лев");
	}
	else if ((month == 8 and day > 19) || (month == 9 and day < 22)) {
		printf("Девы");
	}
	else if ((month == 9 and day > 19) || (month == 10 and day < 22)) {
		printf("Весы");
	}
	else if ((month == 10 and day > 19) || (month == 11 and day < 22)) {
		printf("Скорпион");
	}
	else if ((month == 11 and day > 19) || (month == 12 and day < 22)) {
		printf("Стрелец");
	}
	else {
		printf("Error");
	}
}

