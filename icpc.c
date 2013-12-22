#include<stdio.h>
int main() {
	int first, second, n, third;
	printf("Enter the value of one:\n");
	scanf("%d",&first);
	printf("Enter the value of two:\n");
	scanf("%d", &second);
	
	//Addition function
	int add(int a, int b) {
		return a + b;
	}

	//Subtraction function
	int sub(int a, int b) {
		return a - b;
	}

	//Multiplication function
	int mul(int a, int b) {
		return a * b;
	}

	//Division function
	int div(int a, int b) {
		return a / b;
	}
	printf("1.Add\n 2.Subtract\n 3.Multiple\n 4.Divide\n");
	scanf("%d",&n);
	switch(n){
		case 1 : printf("%d\n", add(first, second));
			break;
		case 2 : printf("%d\n", sub(first,second));
			break;
		case 3 : printf("%d\n", mul(first, second));
			break;
		case 4 : printf("%d\n", div(first, second));
			break;
		default :
			printf("Invalid input");
	}
	return 0;
}