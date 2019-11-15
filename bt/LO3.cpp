#include <stdio.h>
#include <math.h>

int nhapid(int &id);
int sonam_kt(int &kt);
int soluong(int &luong);
int main()
{
	char chon;
	int id, kinhnghiem, luong;
	//do{
		nhapid(id);
		sonam_kt(kinhnghiem);
		soluong(luong);
		printf("\nBan muon tiep tuc Y/N: ");
		do{
			scanf("%c", &chon);
			if(chon != 'Y' || chon != 'y' || chon != 'N' || chon != 'n')
				printf("nhap sai, nhap lai: ");
		}while(chon != 'Y' || chon != 'y' || chon != 'N' || chon != 'n');
	//}while();
	
	return 0;
}
int nhapid(int &id)
{
	printf("Nhap ID nhan vien: ");
	do{
		scanf("%d", &id);
		if(id <1000 || id >9999)
			printf("1000 <= ID <= 9999, nhap lai: ");
	}while(id<1000 && id>9999);
	return id;
}

int sonam_kt(int &kt)
{
	printf("Nhap so nam kinh nghiem: ");
	do{
		scanf("%d", &kt);
		if(kt<0 || kt >50)
			printf("0 <= So nam kinh nghiem <= 50, nhap lai: ");
	}while(kt<0 || kt>50);
	return kt;
}

int soluong(int &luong)
{
	printf("Nhap so luong theo tuan: ");
	do{
		scanf("%d", &luong);
		if(luong <0 || luong > 5*pow(10, 6))
			printf("0 <= ID <= 50, nhap lai: ");
	}while(luong<0 && luong>5*pow(10, 6));
	return luong;
}
