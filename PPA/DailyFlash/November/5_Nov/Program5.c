#include<stdio.h>

typedef struct Bank {

	char* cust_name;
	long ac_num;
	float balance;

}bank;

void main() {

	bank b1 = {"Mr. P.Singh",12365478990,150000.32};
	bank b2 = {"Ms. R.Agarwal",1203000369,1300.00};
	bank b3 = {"Mrs. K Shah",10005478990,1000.50};

	bank arr[3] = {b1,b2,b3};

	printf("Customer Detiails with A/c balance less than 1500:\n");
	for(int i = 0; i < 3; i++){

		if(arr[i].balance < 1500){

			printf("Customer Name:- %s\n",arr[i].cust_name);
			printf("A/c No.:- %ld\n",arr[i].ac_num);
			printf("Account Balance:- %.2f\n",arr[i].balance);

			printf("\n");

		}
		
	}

}
