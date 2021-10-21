//#include <stdio.h>
//#include <stdbool.h>
//int main(void)
//{
//	int hours = 0;
//	float rate = 0;
//	float money = 0;
//	int overtime = 0;
//	
//	while (true)
//	{
//		printf("Enter # of hours worked (-1 to end): ");
//		scanf_s("%d", &hours);
//		if (hours == -1)
//		{
//			break;
//		}
//		printf("Enter hourly rate of the worker ($00.00): ");
//		scanf_s("%f", &rate);
//		if (hours <= 40)
//		{
//			money = hours * rate;
//		}
//		else
//		{
//			overtime = hours - 40;
//			money = ((overtime * 1.5) + 40) * rate;
//		}
//		printf("Salary is $%.2f\n", money);
//		printf("\n");
//	}
//}