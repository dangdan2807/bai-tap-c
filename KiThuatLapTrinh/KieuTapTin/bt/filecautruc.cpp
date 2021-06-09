#include<stdio.h>
struct Person
{
	int code;
	char name[32];
	char address[32];
	char birthday[10];
};
int main ()
{
	Person p;
	FILE* f;
	f=fopen("person.txt","r");
	if (f!=NULL)
	{
		fscanf(f,"%[^:] %[^,] %[^:] %s",&p.code,&p.name, &p.address, &p.birthday);
	}
	printf("Name: %s\t\tCode: %d\n", p.name, p.code);
	printf("Address: %s\n", p.address);
	printf("Birthday: %s",p.birthday);
	
	fclose(f);
	return 0;
}
