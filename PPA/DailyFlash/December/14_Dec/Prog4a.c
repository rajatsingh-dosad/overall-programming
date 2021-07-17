
#include<stdio.h>


float crudePrice = 49.96;    //in Rupees and for 1 litre

void petrolMaharashtra() {

	float VAT = 14.53;
	float excise_duty = 21.54;
	float transport = 5.49;

	float price = crudePrice + VAT+ excise_duty + transport;
	printf("Petrol price in Maharashtra is Rs-%.2f\n",price);
}
void petrolPunjab() {

	float VAT = 13.33;
	float excise_duty = 19.54;
	float transport = 3.49;

	float price = crudePrice + VAT+ excise_duty + transport;
	printf("Petrol price in Punjab is Rs-%.2f\n",price);

}
void petrolGujarat() {

	float VAT = 11.50;
	float excise_duty = 20.49;
	float transport = 4.6;

	float price = crudePrice + VAT+ excise_duty + transport;
	printf("Petrol price in Gujarat is Rs-%.2f\n",price);

}

void main() {
	
	petrolMaharashtra();
	petrolPunjab();
	petrolGujarat();
}

