
#include <stdio.h>

struct Player {
	
	char pname[20];
	int jerNo;
};

typedef struct Player Cric_Player;

void main() {

	Cric_Player vk = {"Virat Kohli",18};

	printf("%s\n",vk.pname);

	printf("%d\n",vk.jerNo);
	
	Cric_Player *ptr = NULL;

	ptr = &vk;

	printf("%s\n",ptr->pname);
	printf("%d\n",ptr->jerNo);
	
	printf("%s\n",(*ptr).pname);
	printf("%d\n",(*ptr).jerNo);
}
