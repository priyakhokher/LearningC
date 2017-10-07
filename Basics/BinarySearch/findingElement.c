#include <stdio.h>

int BinarySearch(int A[], int n, int x){

	int start = 0;
	int end = n - 1;
	int mid = (start + end)/2;

	while(start <= end){

		
		if(A[mid] == x) return mid;

		else if(x < A[mid])
			end = mid - 1;

		else
			start = mid + 1;
		
	}
	printf("%d\n",mid );
	return -1;

}

int main(){

	int A[] = {1,2,3,4,5};
	printf("Enter the number you want to find: ");
	int x;
	scanf("%d", &x);
	int index = BinarySearch(A,5,x);
	printf("%d\n",index );


}