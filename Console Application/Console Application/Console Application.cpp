#include <stdio.h>

float getFullRepaymentAmount(float creditAmount, float percentage, float repayment_periods) {
	return creditAmount + (percentage / 100) * ((repayment_periods + 1) / 2) * creditAmount;
}

float getPercentRepaymentAmount(float restCreditBodyAmount, float percentage) {
	return restCreditBodyAmount * (percentage / 100);
}

float getCreditBodyRepaymentAmount(float creditAmount, float repaymentPeriods) {
	return creditAmount / repaymentPeriods;
}

int main()
{
	float price, creditAmount, pr_payment, percentage, repayment_periods;

	printf("Enter a credit amount: ");
	scanf_s("%f", &price);

	printf("Enter the primary payment: ");
	scanf_s("%f", &pr_payment);

	printf("Enter a credit percentage: ");
	scanf_s("%f", &percentage);

	printf("Enter the amount of repayment periods: ");
	scanf_s("%f", &repayment_periods);

	creditAmount = price - pr_payment;
	float creditBodyRepaymentAmount = getCreditBodyRepaymentAmount(creditAmount, repayment_periods);
	float restRepaymentAmount = getFullRepaymentAmount(creditAmount, percentage, repayment_periods);

	printf("Month		Payment        Percent amount        Rest amount\n");
	for (int i = 0; i < repayment_periods; i++) {
		printf("%5i", i + 1);

		float restCreditBodyAmount = creditAmount - creditBodyRepaymentAmount * i;
		float percentRepaymentAmount = getPercentRepaymentAmount(restCreditBodyAmount, percentage);
		float repaymentAmount = creditBodyRepaymentAmount + percentRepaymentAmount;

		printf("%18f", repaymentAmount);
		printf("%22f", percentRepaymentAmount);
		printf("%19f\n", restRepaymentAmount);

		restRepaymentAmount -= repaymentAmount;
	}

	return 0;
}

