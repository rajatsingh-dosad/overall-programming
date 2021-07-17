
#include <stdio.h> 

struct Movies {

	char movie_name[20];
	char movie_director[20];
	char movie_type[20];
	float rating;
};

void main() {

	struct Movies obj1 = {"Phir hera pheri","Neeraj Vora","Comedy",6.9};
	struct Movies obj2 = {"Bahubali","S.S RajaMouli","Action",8};
	struct Movies obj3 = {"Tanaji","Om Raut","Action",7.6};
	
	struct Movies arr[] = {obj1,obj2,obj3};
	
	printf("Size of the structure is : %ld\n",sizeof(struct Movies));

	for(int i=0;i<3;i++) {

		printf("Name of the movie : %s\n",arr[i].movie_name);
		printf("Name of the director : %s\n",arr[i].movie_director);
		printf("Movie Type: %s\n",arr[i].movie_type);
		printf("Movie Rating: %.2f\n\n",arr[i].rating);
	}
}
		
