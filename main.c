#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
int sumTwo(int a, int b)
{
	return(a+b);
}

int square(int n)
{
	return(n*n);
}

int get_max(int x, int y)
{
	if(x>y)
	   return x;
	else
	   return y;
}

int main(int argc, char *argv[]){
	
	printf("sumTwo :%i\n", sumTwo(5,6));
	printf("square :%i\n", square(7));
	printf("get_max :%i\n", get_max(15,20));
	
	return 0;
}

