#include<stdio.h>
int main(){
	int a ;
	printf("Enter Your Number of Food Item : ",'\n');
	scanf("%d", &a);
	switch(a)
	{
		case 1:
			printf("Pizza Rs 239");
			break ;
				case 2:
			printf("Burger Rs 129");
			break ;
				case 3:
			printf("Pasta Rs 179");
			break ;
				case 4:
			printf("French Frise Rs 99");
			break ;
				case 5:
			printf("Sandwich Rs 149");
			break ;
			
	}
	return 0;
}
