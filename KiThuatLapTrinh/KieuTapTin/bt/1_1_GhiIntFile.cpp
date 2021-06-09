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
	int n;
	//Bc1: Khai báo bien tep tin: FILE *fp
	FILE *fp; 
	
	//Bc2: Mo tep tin de ghi hoac doc: fopen("Ten tep", "mode");
	fp=fopen("D:\\BTFile\\INTEGER.txt","wt");
	if(fp==NULL)
	{
		printf("\nKhong mo tap tin duoc\n");
		exit(0);
	}

	//Bc3: Ghi hoac doc tep tin (xu lý du lieu) 
	//Ghi ra man hinh: printf("%d", n);
	srand(time(NULL));
	for(int i=1;i<=5;i++)
	{
		n=rand();
		fprintf(fp,"%d\t",n);
	}
	
	
	printf("\nDa ghi xong!\n");
	//Bc4: Ðóng tep tin: fclose(fp);
	fclose(fp);
	
	
}