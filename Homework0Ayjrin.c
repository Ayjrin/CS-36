#include <stdio.h>

int main()
{
	puts("Ayjrin\nCourse ID: 60000\nThis is my first programming college course, but I've taken Udemy courses to get my \nISTQB foundation"
		" level certification and practiced C++ and Unreal Engine in my free time. \n\nIf you know of any internships, let me know ;)\n\n");

	puts("gimme a number");
	float number1 = 0;
	scanf_s("%f", &number1);

	puts("gimmer a second number");
	float number2 = 0;
	scanf_s("%f", &number2);

	float sum = 0;
	sum = number1 + number2;
	printf("sum: %.2f + %.2f = %.2f\n",number1, number2, sum);

	float difference = 0;
	difference = number1 - number2;
	printf("difference: %.2f - %.2f = %.2f\n", number1, number2, difference);

	float product = 0;
	product = number1 * number2;
	printf("product: %.2f * %.2f = %.2f\n", number1, number2, product);

	float quotient = 0;
	quotient = number1 / number2;
	printf("quotient: %.2f / %.2f = %.2f\n", number1, number2, quotient);

	return 0;
}