#include <stdio.h>

int main() {

	int num = 10, num2 = 20;
	//initializing the pointer and pointing him at the correct adress
	int *ptr = &num2;
  int *ptr2 = &num;

	printf("value of num: %d\n", num);
	printf("value of num: (using pointer): %d\n", *ptr);

  printf("\nvalue of num2: %d\n", num2);
	printf("value of num2: (using pointer): %d\n", *ptr2);
  
  	//updating the values of num, num2
	*ptr2 = 20;
  *ptr = 10;

	printf("\nvalue of num: %d\n", num);
	printf("value of num (using pointer): %d\n", *ptr2);

	printf("\nvalue of num2: %d\n", num2);
	printf("value of num (using pointer): %d\n", *ptr);

	return 0;
}
