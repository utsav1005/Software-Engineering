#include<stdio.h>
//Food billing System
int main()
{
	printf("***************************************************\n");
    printf("*         Welcome to Relex Fast Food Center       *\n");
    printf("*     List of Food Items Available Below:         *\n");
    printf("***************************************************\n");
    printf("*                   === MENU ===                  *\n");
    printf("*                                                 *\n");
    printf("*  1. Dosa          - Rs.180                      *\n");
    printf("*  2. Sandwich      - Rs.100 (4 pcs)              *\n");
    printf("*  3. Idli-Vada     - Rs.120 (2 pcs)              *\n");
    printf("*  4. Pizza         - Rs.200 (Regular Size)       *\n");
    printf("*                                                 *\n");
    printf("***************************************************\n");
	int choise;
	printf("Please Enter Your choise:\n");
	scanf("%d",&choise);
	int quantity;
//	int price;
	int dprice=180,sprice=100,iprice=120,pprice=200;
	char more;
	int bill=0;
	do
	{
	switch(choise)
	{
		case 1: printf("You have selected Dosa.\n");
				printf("Enter the quantity:\n");
				scanf("%d",&quantity);
				printf("Amount is: %drs\n",dprice*quantity);
				bill= bill + dprice*quantity;
				printf("Total Amount is :%d x %drs = %d\n",quantity,dprice,bill);
				printf("Do you want to place more orders ? (y & n) :");
				scanf(" %c",&more);
				if(more =='n' || more== 'N'){
					break;
				}
				printf("======MENU=======\n");
				printf("1.Dosa         price=180rs\n");
				printf("2.Sandwich     price=100rs/4pcs\n");
				printf("3.Idli-vada    price=120rs/2pcs\n");
				printf("4.Pizza        price=200rs/Regular Size\n");
				printf("pleace enter your choise:");
				scanf("%d",&choise);
				break;
		
		case 2: 
				printf("You have selected Sandwich.\n");
				printf("Enter the quantity:\n");
				scanf("%d",&quantity);
				printf("Amount is: %drs\n",sprice*quantity);
				bill= bill + sprice*quantity;
				printf("Total Amount is :%d x %drs = %d\n",quantity,sprice,bill);
				printf("Total Amount is :%drs\n",bill);
				printf("Do you want to place more orders ? (y & n)  :");
				scanf(" %c",&more);
				if(more =='n' || more== 'N'){
					break;
				}
				printf("======MENU=======\n");
				printf("1.Dosa         price=180rs\n");
				printf("2.Sandwich     price=100rs/4pcs\n");
				printf("3.Idli-vada    price=120rs/2pcs\n");
				printf("4.Pizza        price=200rs/Regular Size\n");
				printf("pleace enter your choose:");
				scanf("%d",&choise);
				break;
				
		case 3: printf("You have selected Idli-vada.\n");
				printf("Enter the quantity:\n");
				scanf("%d",&quantity);
				printf("Amount is: %drs\n",iprice*quantity);
				bill= bill + iprice*quantity;
				printf("Total Amount is :%d x %drs = %d\n",quantity,iprice,bill);
				printf("Total Amount is :%drs\n",bill);
				printf("Do you want to place more orders ? (y & n)  :");
				scanf(" %c",&more);
				if(more =='n' || more== 'N'){
					break;
				}
				printf("======MENU=======\n");
				printf("1.Dosa         price=180rs\n");
				printf("2.Sandwich     price=100rs/4pcs\n");
				printf("3.Idli-vada    price=120rs/2pcs\n");
				printf("4.Pizza        price=200rs/Regular Size\n");
				printf("pleace enter your choose:");
				scanf("%d",&choise);
				break;
			
		case 4: printf("You have selected Pizza.\n");
				printf("Enter the quantity:\n");
				scanf("%d",&quantity);
				printf("Amount is: %drs\n",pprice*quantity);
				bill= bill + pprice*quantity;
				printf("Total Amount is :%d x %drs = %d\n",quantity,pprice,bill);
				printf("Total Amount is :%drs\n",bill);
				printf("Do you want to place more orders ? (y & n)  :");
				scanf(" %c",&more);
				if(more =='n' || more== 'N'){
					break;
				}
				printf("======MENU=======\n");
				printf("1.Dosa         price=180rs\n");
				printf("2.Sandwich     price=100rs/4pcs\n");
				printf("3.Idli-vada    price=120rs/2pcs\n");
				printf("4.Pizza        price=200rs/Regular Size\n");
				printf("pleace enter your choose:");
				scanf("%d",&choise);
				break;
	
		default: printf("Sorry!! Not Avaliable"); 
	}
	} while(more=='y'|| more=='Y');
	printf("Total bill is %d\n",bill);
	printf("Thank You For order Food in Relex Fast Food.");
	return 0;
	
}
