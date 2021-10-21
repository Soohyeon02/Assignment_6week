//#include <stdio.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	unsigned long long population = 0;
//	double rate = 0;
//
//	unsigned long long pop1 = 0;     // world population after one years.
//	unsigned long long pop2 = 0;     // world population after two years.
//	unsigned long long pop3 = 0;     // world population after three years.
//	unsigned long long pop4 = 0;     // world population after four years.
//	unsigned long long pop5 = 0;     // world population after five years.
//
//	printf("Enter the current world population: ");
//	scanf_s("%llu", &population);
//	printf("Enter the annual world population growth rate: ");
//	scanf_s("%lf", &rate);
//
//	pop1 = population + (population /100 * rate);
//	pop2 = pop1 + (pop1 /100 * rate);
//	pop3 = pop2 + pop2 /100 * rate;
//	pop4 = pop3 + pop3 /100 * rate;
//	pop5 = pop4 + pop4 /100 * rate;
//
//	printf("world population after one years is %llu\n", pop1);
//	printf("world population after two years is %llu\n", pop2);
//	printf("world population after three years is %llu\n", pop3);
//	printf("world population after four years is %llu\n", pop4);
//	printf("world population after five years is %llu\n", pop5);
//}