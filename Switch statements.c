#include <stdio.h>
main()
{
	printf("Choose an item :\n1. Pizza, Rs 239\n2. Pasta, Rs 179\n3. Burger, Rs 129\n4. French Fries, Rs 99\n5. Sandwich, Rs 149");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("you chooce  Pizza, Rs 239 ");
			break;
			case 2:
				printf("you chooce  Pasta, Rs 179 ");
				break;
				case 3:
					printf("you chooce  Burger, Rs 129 ");
					break;
					case 4:
						printf("you chooce  French Fries, Rs 99 ");
						break;
						case 5:
							printf("you chooce  Sandwich, Rs 149 ");
							break;
							default: printf("Invalid Choice");
	}
}
