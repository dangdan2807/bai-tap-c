#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Bc1: Khai báo bien tep tin: FILE *fp
 	Bc2: Mo tep tin de ghi hoac doc: fopen("Ten tep", "mode");
	Bc3: Ghi hoac doc tep tin (xu lý du lieu) 
	Bc4: Ðóng tep tin: fclose(fp);
*/
int main(int argc, char *argv[])
{
	float n;
	//Bc1: Khai báo bien tep tin: FILE *fp
	FILE *fp; 
	
	//Bc2: Mo tep tin de ghi hoac doc: fopen("Ten tep", "mode");
	fp=fopen("D:/BTFile/REAL.txt","wt"); //fp=fopen("D:\\BTFile\\REAL.txt","wt");
	// Thay tao file nhe Thay
	if(fp==NULL)
	{
		printf("\nKhong tao tap tin duoc\n");
		exit(0);
	}

	//Bc3: Ghi hoac doc tep tin (xu lý du lieu) 
	//Ghi ra man hinh: printf("%d", n);
	srand(time(NULL));
	for(int i=1;i<=5;i++)
	{
		n = rand()*1.0/RAND_MAX;
		fprintf(fp,"%f\t",n);
	}
	
	
	printf("\nDa ghi xong!\n");
	//Bc4: Ðóng tep tin: fclose(fp);
	fclose(fp);
	
	
}
