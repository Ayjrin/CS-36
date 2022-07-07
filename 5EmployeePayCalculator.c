#include <stdio.h>

int main()
{
	//initialize employees
	char name1[10] = "employee1";
	char name2[10] = "employee1";
	char name3[10] = "employee1";
	char name4[10] = "employee1";
	char name5[10] = "employee1";

	//gets employees names
	puts("employee 1 name: ");
	gets(name1);
	puts("employee 2 name: ");
	gets(name2);
	puts("employee 3 name: ");
	gets(name3);
	puts("employee 4 name: ");
	gets(name4);
	puts("employee 5 name: ");
	gets(name5);

	//initializes the hourly rate of the employees $
	float rate1 = 0;
	float rate2 = 0;
	float rate3 = 0;
	float rate4 = 0;
	float rate5 = 0;

	// initializes hours worked in a week
	float hr1 = 0;
	float hr2 = 0;
	float hr3 = 0;
	float hr4 = 0;
	float hr5 = 0;

	//gets how much the employee gets paid and how many hours they worked
	printf("how much does %s get paid hourly? ", name1);
	scanf_s("%f", &rate1);
	puts("how many hours did they work last week? ");
	scanf_s("%f", &hr1);

	printf("how much does %s get paid hourly? ", name2);
	scanf_s("%f", &rate2);
	puts("how many hours did they work last week? ");
	scanf_s("%f", &hr2);

	printf("how much does %s get paid hourly? ", name3);
	scanf_s("%f", &rate3);
	puts("how many hours did they work last week? ");
	scanf_s("%f", &hr3);

	printf("how much does %s get paid hourly? ", name4);
	scanf_s("%f", &rate4);
	puts("how many hours did they work last week? ");
	scanf_s("%f", &hr4);

	printf("how much does %s get paid hourly? ", name5);
	scanf_s("%f", &rate5);
	puts("how many hours did they work last week? ");
	scanf_s("%f", &hr5);


	//calculates the overtime pay pre-tax
	float pay1 = 0;
	if (hr1 == 40.0f) {
		pay1 = hr1 * rate1;
	}
	else if(hr1 > 40.0f) {
		pay1 = ((40.0f * rate1) + ((hr1 - 40.0f) * (rate1 * 1.5f)));
	}
	else {
		printf("error: please put valid values for hourly rate and hours worked last week for the employee '%s: ", name1);
		puts("hourly rate: ");
		scanf_s("%f", &rate1);
		puts("hours worked: ");
		scanf_s("%f", &hr1);
	}


	
	float pay2= 0;
	if (hr2 <= 40.0f) {
		pay2 = hr2 * rate2;
	}
	else if (hr2 > 40.0f) {
		pay2 = ((40.0f * rate2) + ((hr2 - 40.0f) * (1.5 * rate2)));
	}
	else {
		printf("error: please put valid values for hourly rate and hours worked last week for the employee '%s': ", name2);
		puts("hourly rate: ");
		scanf_s("%f", &rate2);
		puts("hours worked: ");
		scanf_s("%f", &hr2);
	}	

	float pay3 = 0;
	if (hr3 <= 40.0f) {
		pay3 = hr3 * rate3;
	}
	else if (hr3 > 40.0f) {
		pay3 = ((40.0f * rate3) + ((hr3 - 40.0f) * (rate3 * 1.5f)));
	}
	else {
		printf("error: please put valid values for hourly rate and hours worked last week for the employee '%s': ", name3);
		scanf_s("%f", &rate3);
		puts("hours worked: ");
		scanf_s("%f", &hr3);
	}

	float pay4 = 0;
	if (hr4 <= 40.0f) {
		pay4 = hr4 * rate4;
	}
	else if (hr4 > 40.0f) {
		pay4 = ((40.0f * rate4) + ((hr4 - 40.0f) * (rate4 * 1.5)));
	}
	else {
		printf("error: please put valid values for hourly rate and hours worked last week for the employee '%s': ", name4);
		puts("hourly rate: ");
		scanf_s("%f", &rate4);
		puts("hours worked: ");
		scanf_s("%f", &hr4);
	}

	float pay5 = 0;
	if (hr5 <= 40.0f) {
		pay5 = hr5 * rate5;
	}
	else if (hr5 > 40.0f) {
		pay5 = ((40.0f * rate5) + ((hr5 - 40.0f) * (rate5 * 1.5f)));
	}
	else {
		printf("error: please put valid values for hourly rate and hours worked last week for the employee '%s:", name5);
		puts("hourly rate: ");
		scanf_s("%f", &rate5);
		puts("hours worked: ");
		scanf_s("%f", &hr5);
	}
	
	//pt stands for post tax
	float pt1 = pay1 * 0.8f;		
	float pt2 = pay2 * 0.8f;
	float pt3 = pay3 * 0.8f;
	float pt4 = pay4 * 0.8f;
	float pt5 = pay5 * 0.8f;


	/* taxes = gross pay - take home pay... I know it's awkward, but it's not stupid if it works.
	I already did those 5 lines of code right above. it would he a shame to redo it.
	why do something right when you can do it once?  */
	float tax1 = pay1 - pt1;
	float tax2 = pay2 - pt2;
	float tax3 = pay3 - pt3;
	float tax4 = pay4 - pt4;
	float tax5 = pay5 - pt5;

	// mmmmm it's so satisfying. 
	//prints all those values
	printf("Pay to %s\n", name1);
	printf("Hourly Rate: $%.2f\n", rate1);
	printf("Hours Worked: %f\n", hr1);
	printf("Gross Pay: $%.2f\n", pay1);
	printf("Taxes Paid: $%.2f\n", tax1);
	printf("Take Home Pay: $%.2f\n\n", pt1);

	printf("Pay to %s\n", name2);
	printf("Hourly Rate: $%.2f\n", rate2);
	printf("Hours Worked: %f\n", hr2);
	printf("Gross Pay: $%.2f\n", pay2);
	printf("Taxes Paid: $%.2f\n", tax2);
	printf("Take Home Pay: $%.2f\n\n", pt2);

	printf("Pay to %s\n", name3);
	printf("Hourly Rate: $%.2f\n", rate3);
	printf("Hours Worked: %f\n", hr3);
	printf("Gross Pay: $%.2f\n", pay3);
	printf("Taxes Paid: $%.2f\n", tax3);
	printf("Take Home Pay: $%.2f\n\n", pt3);

	printf("Pay to %s\n", name4);
	printf("Hourly Rate: $%.2f\n", rate4);
	printf("Hours Worked: %f\n", hr4);
	printf("Gross Pay: $%.2f\n", pay4);
	printf("Taxes Paid: $%.2f\n", tax4);
	printf("Take Home Pay: $%.2f\n\n", pt4);

	printf("Pay to %s\n", name5);
	printf("Hourly Rate: $%.2f\n", rate5);
	printf("Hours Worked: %f\n", hr5);
	printf("Gross Pay: $%.2f\n", pay5);
	printf("Taxes Paid: $%.2f\n", tax5);
	printf("Take Home Pay: $%.2f\n\n", pt5);


	return 0;
}