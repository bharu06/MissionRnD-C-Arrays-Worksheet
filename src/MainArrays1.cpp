#include "FunctionHeadersArrays1.h"
#include <stdio.h>

struct student {
	char *name;
	int score;
};
int main(){

	//Test RemoveArraysDuplicates
	/*
	int arr[3] = { 1, 2, 7 };
	int len = removeArrayDuplicates(arr, 3);
	printf("%d", len);
	*/

	//Test Students Count
	
	//int arr2[3]={1,4,10};
	
	//int Arr[8] = { 1, 1, 2, 2, 3, 3 ,3,3};
	//int len = removeArrayDuplicates(Arr, 8);
	
	//int Arr1[5] = { 10, 20, 31, 40, 50 };
	//studentsCount(Arr1, 5, 30, &lessCount, &moreCount);
	int i;
	//int *newarray=sortedArrayInsertNumber(arr, 3, 3);
	//printf("%d %d %d %d", newarray[0], newarray[1], newarray[2],newarray[3]);
	struct student students[3] = { { "stud1", 60 }, { "stud2", 70 }, { "stud3", 50 } };
	struct student **result = topKStudents(students, 3, 2);
	for (i = 0; i < 3; i++)
	{
		printf("%d  ",result[i]->score);
	}
	return 0;
}
