#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//bai1
	int N;
	printf("Nhap so N: ");
	scanf("%d", &N);
	if(N % 2 == 0) {
		printf("\nN = %d la so chan", N);
	} else {
		printf("\nN = %d la so le", N);		
	}
	if(N % 2 == 0 && N % 7 == 0) {
		printf("\nN = %d la so chia het cho 2 va 7", N);
	} else {
		printf("\nN = %d khong la so chia het cho 2 va 7", N);	
	}
	
	int i;
	int count = 0; 
	if(N < 2) {
		printf("\nN = %d khong la so nguyen to", N);
	} else {
		for(i = 2; i <= sqrt(N); i++) {
			if(N % i == 0) {
				count++;
			}
		}
		if(count == 0) {
			printf("\nN = %d la so nguyen to", N);
		} else {
			printf("\nN = %d khong la so nguyen to", N);
		}
	}
	
	//bai2
	printf("\n==========");
	int a, b, c, sum = 0;
	printf("\nNhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);

	if(a > b) {
		for(c = b + 1; c < a; c++) {
			sum += c;
		}
	} else if(a < b) {
		for(c = a + 1; c < b; c++) {
			sum += c;
		}
	} else {
		sum = 0;
	}
	
	printf("\nTong cac so giua a va b = %d", sum);

	printf("\n==========");
	sum = 0;
	printf("\nNhap du lieu N:");
	scanf("%d", &N);
	
	if(N < 2) {
		printf("\nKhong co so nguyen to");
	} else {
		for(int num = 1; num <= N; num++) {
        	int count = 0; 
        	for(int i = 2; i <= sqrt(num); i++) {
            	if(num % i == 0) {
                	count++;
            	} 
        	}
        	if(count == 0 && num > 1) {
				printf("\nCac so nguyen to tu 1 den N = %d la %d", N, num);  				 
				sum += num;
			}
    	}
	}
	printf("\nTong cac so nguyen to tu 1 den N = %d la %d", N, sum); 
	
	printf("\n==========\n");
	int t[10];
	
	for(i = 0; i < 10; i++) {
		printf("Nhap t[%d] = ", i);
		scanf("%d", &t[i]);
	}
	
	printf("\n==========");
	sum = 0;
	
	for(i = 0; i < 10; i++) {
		sum += t[i];
	}
	printf("\nTong cac so trong mang t = %d", sum);
	
	printf("\n==========");
	sum = 0;
	
	for(i = 0; i < 10; i++) {
		if(t[i] % 3 == 0 && t[i] % 6 == 0) {
			sum += t[i];
		}	
	}
	printf("\nTong cac so chia het cho 3 va 6 trong mang t = %d", sum);
	
	printf("\n==========");
	sum = 0;
	
	for(i = 0; i < 10; i++) {
		if(t[i] % 3 == 0 && t[i] % 7 == 0) {
			sum += t[i];
		}	
	}
	printf("\nTong cac so chia het cho 3 va 7 trong mang t = %d", sum);
	
	return 0;
}
