#include<stdio.h>
int main() {
	int var1;
	int var2;
	scanf("%d" ,&var1);
	scanf("%d" ,&var2);
	if ( var1 > var2) {
		printf("var1 More than var2 \n");
		printf("Differant = %d",(var1-var2));
	} else {
		printf("var2 More than var1 \n");
		printf("Differant = %d",(var2-var1));
	}
	
}
