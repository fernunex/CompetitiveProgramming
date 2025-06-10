/* Calculates a broker's commission */

#include <stdio.h>
#define COM_2500 0.017f
#define COM_6250 0.0066f
#define COM_20000 0.0034f
#define COM_50000 0.0022f
#define COM_500000 0.0011f
#define COM_MAXIMUM 0.0009f

#define TRA_SIZE_2500 2500
#define TRA_SIZE_6250 6250
#define TRA_SIZE_20000 20000
#define TRA_SIZE_50000 50000
#define TRA_SIZE_500000 500000


int main(){
	int value_trade; 
	float commision;

	printf("Enter value of trade: ");
	scanf("%d", &value_trade);

	if (value_trade < TRA_SIZE_2500)
		commision = 30 + value_trade * COM_2500;	
	else if (value_trade < TRA_SIZE_6250)
		commision = 56 + value_trade * COM_6250;
	else if (value_trade < TRA_SIZE_20000)
		commision = 76 + value_trade * COM_20000;
	else if (value_trade < TRA_SIZE_50000)
		commision = 100 + value_trade * COM_50000;
	else if (value_trade < TRA_SIZE_500000)
		commision = 155 + value_trade * COM_500000;
	else
		commision = 255 + value_trade * COM_MAXIMUM;

	printf("Commission: $%.2f\n", commision);
	return 0;
}
