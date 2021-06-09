#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	Bc1: Khai b�o bien tep tin: FILE *fp
 	Bc2: Mo tep tin de ghi hoac doc: fopen("Ten tep", "mode");
	Bc3: Ghi hoac doc tep tin (xu l� du lieu) 
	Bc4: ��ng tep tin: fclose(fp);
*/
int main(int argc, char *argv[])
{
	int n;
	//Bc1: Khai b�o bien tep tin: FILE *fp
	FILE *fp; 
	
	//Bc2: Mo tep tin de ghi hoac doc: fopen("Ten tep", "mode");
	fp=fopen("D:\\BTFile\\INTEGER_B.txt","rb");
	if(fp==NULL)
	{
		printf("\nKhong mo tap tin duoc\n");
		exit(0);
	}

	//Bc3: Ghi hoac doc tep tin (xu l� du lieu) 
	for(int i=1;i<=5;i++)
	{
		fread(&n, sizeof(int),1, fp);
		printf("%d\t",n);
	}
	printf("\nDa doc xong!\n");
	//Bc4: ��ng tep tin: fclose(fp);
	fclose(fp);
	
	
}