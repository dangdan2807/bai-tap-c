#include <stdio.h>

int main()
{ 
	int x=10; 
	int *xtro;  
	xtro=&x;
	printf("\n1. Dia chi cua bien x la:%p",&x); 
	printf("\n2. Dia chi của bien xtro la:%p",&xtro);
	printf("\n3. Noi dung cua bien x la: %d",x); 
	printf("\n4. Noi dung cua bien xtro la: %p",xtro); 
	printf("\n5. Gia tri ma xtro tro den:%d",*xtro); 
	*xtro = 50 ;  
	printf("\n6. Giá tri x la %d",x); 
	return 0;
}
