#include <stdio.h>
#include <math.h>

int nhapid(int &id);
int sonam_kt(int &kinhnghiem);
int soluong(int &luong);
float tienthuong(int kinhnghiem, int sotuan, int luong, float &thuong);
void xuat(int id, float thuong);
int main()
{
    int so_nhanvien=0;
	float tong_thuong=0;
	char chon;
	do{
    	int id, kinhnghiem=0, luong=0;
	    float thuong=0;
		nhapid(id);
		sonam_kt(kinhnghiem);
		soluong(luong);
		int sotuan;
		printf("Nhap so tuan lam viec: ");
        scanf("%d", &sotuan);
		tienthuong(kinhnghiem, sotuan, luong, thuong);
		xuat(id, thuong);
		printf("\nBan muon tiep tuc Y/N: ");
		do{
		    scanf("%c", &chon);
		    if(chon != 'Y' && chon != 'y' && chon != 'N' && chon != 'n')
    				printf("nhap sai, nhap lai: ");
		}while(chon != 'Y' && chon != 'y' && chon != 'N' && chon != 'n');
	    so_nhanvien++;
	    tong_thuong+=thuong;
	}while(chon == 'Y' || chon == 'y');
	printf("\nTong so nhan vien la: %d\n", so_nhanvien);
	printf("Tong so thuong la: %f", tong_thuong);
	return 0;
}
int nhapid(int &id)
{
	printf("Nhap ID nhan vien: ");
	do{
		scanf("%d", &id);
		if(id <1000 || id >9999)
			printf("1000 <= ID <= 9999, nhap lai: ");
	}while(id<1000 || id>9999);
	return id;
}

int sonam_kt(int &kinhnghiem)
{
	printf("Nhap so nam kinh nghiem: ");
	do{
		scanf("%d", &kinhnghiem);
		if(kinhnghiem<0 || kinhnghiem >50)
			printf("0 <= So nam kinh nghiem <= 50, nhap lai: ");
	}while(kinhnghiem<0 || kinhnghiem>50);
	return kinhnghiem;
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

float tienthuong(int kinhnghiem, int sotuan, int luong, float &thuong)
{   
    thuong=sotuan*luong*1.5;
    if(kinhnghiem>=10)
        thuong+=2*pow(10, 6);
    return thuong;
}

void xuat(int id, float thuong)
{
    printf("ID nhan vien la: %d\n", id);
    printf("Tien thuong la: %f\n", thuong);
}
