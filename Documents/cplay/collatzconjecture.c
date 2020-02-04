#include <stdlib.h>
#include <stdio.h>

int main(void){
	int x;
	printf("Enter a natural number: ");
	fflush(stdin);
	scanf("%d", &x);
	if (x<1){
		printf("invalid input\n");
		return 0;
	
	}else{
		int i = 0;
		while(1){
			if(x == 1){
				printf("%d\n", x);
				break;
			}
			if((x%2) == 0){
				printf("%d\n", x);
				x = x/2;
				i++;
				continue;
			}
			if((x%2) != 0){
				printf("%d\n", x);
				x = (3*x)+1;
				i++;
				continue;
			}
			
		}
	printf("Number of steps taken to reach 1: %d\n", i);
	printf("Final number: %d\n", x);
	}
	return 0;
}
