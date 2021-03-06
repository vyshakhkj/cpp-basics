#include <stdio.h>
#include <stdlib.h>

int compare(const void* p1, const void* p2) {
	return (*(int*)p1 - *(int*)p2);
}

int main(int argc, char **argv) {
	if(argc <= 1) {
		printf("Please enter the arguments");
		return 0;
	}
	
	int len = argc - 1;
	int *arr = new int(len);
	for(int i = 1; i < argc; i++) {
		arr[i - 1] = atoi(argv[i]);
	}
	
	qsort(arr, len, sizeof(int), compare);
	
	printf("Sorted values : \n");
	for(int i = 0; i < len; i++) {
		printf("%d \n", arr[i]);
	}
}
