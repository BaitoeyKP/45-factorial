//64010045 KANYARAT PHOOKOSOT
#include<stdio.h>
int main(){
	int m, n, f = 1;
	printf("Enter number : ");
	scanf("%d", &n);
	m = n;
	for(; m >= 1; m--){
		f *= m;
	}
	printf("%d! = %d", n, f);
	return 0;
}
