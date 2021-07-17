#include<stdio.h>

typedef struct Movie {

	char* movie_name;
	char* lead_actor;
	float rating;

}movie;

void main() {

	movie m1 = {"Chhichhore","Sushant Singh Rajput",8.2};
	movie m2 = {"KGF Chapter 1","Yash",8.1};
	movie m3 = {"Sakuntala Devi","Vidya Balan",7.4};

	movie arr[3] = {m1,m2,m3};

	for(int i = 0; i < 3; i++){

		printf("Movie Name:- %s\n",arr[i].movie_name);
		printf("Actor Name:- %s\n",arr[i].lead_actor);
		printf("Rating:- %.2f\n",arr[i].rating);

		printf("\n");
		
	}

}
