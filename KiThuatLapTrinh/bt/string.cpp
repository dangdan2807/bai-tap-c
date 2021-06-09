#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void InOutStr(char s[]);
void upper (char s[]);
void lower (char s[]);
void proper(char s[]);
void standard(char s[]);
void DelSpace(char s[]);
void MaxWord(char s[]); 
void PrintNKiTu(char s[], int n, int k); 

void Menu()
{
	printf("Chuong trinh thao tac tren chuoi ky tu ");
	printf("\n1. Nhap xuat chuoi ky tu ");
	printf("\n2. Doi chuoi ky tu sang chu hoa  ");
	printf("\n3. Doi chuoi ky tu sang chu thuong ");
	printf("\n4. Doi ky tu dau tien moi tu sang chu hoa ");
	printf("\n5. Bo khoang trang dau va cuoi chuoi, giua 2 tu chi con 1 khoang trang ");
	printf("\n6. Xoa tat ca khoang trang ");
	printf("\n7. In tu co chieu dai dai nhat ");
	printf("\n8. In n ky tu bat dau tu vi tri k ");
		
}

char s[100];
int main()
{	int chon,n,k ;
	Menu();
	do 
	{
		printf("\nChon chuc nang, chon 0 de thoat : ");
		scanf ("%d", &chon);
		switch (chon)
		{
			case 1 : InOutStr(s); break ;
			case 2 : upper(s); break ; //strupr(s)
			case 3 : lower(s); break ; //strlwr(s)
			case 4 : proper(s);break ; 
			case 5 : standard(s);break ; 	
			case 6 : DelSpace(s);break ; 			
			case 7 : MaxWord(s);break ; 	
			case 8 : PrintNKiTu(s,n,k);break ; 
		}
	}while (chon != 0);	
}

void InOutStr(char s[])
{	fflush(stdin);
	printf("Nhap 1 chuoi : ");
	gets(s);
	printf("Chuoi ky tu vua nhap : ");
	puts(s);
}

void upper (char s[]) // strupr
{	int i;
	printf("Chuoi ky tu chuyen sang chu hoa : ");
	for(i=0;i<strlen(s);i++)
		s[i]=toupper(s[i]);	
	puts(s);	
}

void lower (char s[]) // strlwr
{	int i;
	printf("Chuoi ky tu chuyen sang chu thuong : ");
	for(i=0;i<strlen(s);i++)
		s[i]=tolower(s[i]);	
	puts(s);	
}

void proper(char s[]) 
{	int i,len;
	printf("Chuoi ky tu dau moi tu chuyen sang chu hoa : ");
	s[0]=toupper(s[0]);
	len= strlen(s);
	for(i=0;i<len;i++)
		if (s[i] == ' ')
			s[i+1]=toupper(s[i+1]);	
		else 	
			s[i+1]=tolower(s[i+1]);	
	puts(s);
}
	
void standard(char s[]) 
{	int i=0, j = strlen(s) ;
	while (s[i]==' ')i++;
	while (s[j-1]==' ')j--;
	s[j]='\0';
	for(j=0;i<strlen(s);i++)
	{
		if((s[i]==' ')&&(s[i+1]==' '))
			continue;
			s[j]=s[i];
			j++;
	}
    s[j]='\0';
   	printf("Chuoi ky tu sau khi xoa khoang trang thua : ");
	puts(s);
}
	
void DelSpace(char s[]) 
{ int i,j;
	for(i=0,j=0;i<strlen(s);i++)
	{	if(s[i]==' ') continue;
		s[j]=s[i];
		j++;
	}
    s[j]='\0';
   	printf("Chuoi ky tu sau khi xoa tat ca cac khoang : ");
	puts(s);	
}
		
void MaxWord(char s[]) 
{ int i,j,l=0,imax=0,lmax=0;
	j=strlen(s);  s[j]=' ';s[j+1]='\0';
	for(i=0;i<strlen(s);i++)
	{	if(s[i]==' ') 
		{	if (l>lmax)
			{ lmax =l; imax = i-lmax;}
			l=0;
		}
		else l++;
	}
	printf("Tu dai nhat la : ");
    for(i=imax;i<imax+lmax;i++) printf ("%c",s[i]);
    printf(" co chieu dai la %d ky tu", lmax);
}

void PrintNKiTu(char s[], int n, int k) 
{ 	int i;
	do 
	{	printf("Nhap vi tri bat dau 0 <= k < len(s) : ");
		scanf ("%d", &k);
	}while (k<0 || k>=strlen(s));
	
	do 
	{	printf("Nhap chieu dai can in n (k+n < len(s) : ");
		scanf ("%d", &n);
	}while (k+n>strlen(s));
	
	for(i=k;i<k+n;i++) printf ("%c",s[i]);
}