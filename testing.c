#include <stdio.h>
#include <stdlib.h>

/*
add comments here
testing123456
*/

typedef struct struct_main
{
	int x;
	//double ts;	
	//char *z;
	int a;

} STRUCT_MAIN;

enum values {ZERO=-5, ONE=0, TWO};

//void update(STRUCT_MAIN **buf)
void update(int **buf)
{
	//(**buf).x = ZERO;
	//(**buf).a = ONE;
	//printf("%d\n", (**buf).x);
	//printf("%d\n", (**buf).a);
	
	**buf = 99;
}

int main (void)
{
	//STRUCT_MAIN *tmp;
	//tmp = (STRUCT_MAIN *)malloc(sizeof(STRUCT_MAIN));
	//update(&tmp);
	
	//printf("%d\n", tmp->x);
	//printf("%d\n", tmp->a);
	//printf("%d\n", sizeof(STRUCT_MAIN));
	
	//free(tmp);
	
	int *test;
	test = (int*)malloc(sizeof(int));
	update(&test);
	printf("%d\n", *test);
	free(test);
	return 0;
}


//TESTING ADD
//TESTING ADD
//TESTING ADD
