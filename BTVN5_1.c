#include<stdio.h>

int main(){
	
	int soluong;
	
	do{
		printf ("So luong phan tu cua mang nay la : ");
		scanf ("%d", &soluong);
		if (soluong<=0){
			printf ("So luong mang phai lon hon 0!\n");
		}
	}while(soluong<=0);
	
	int array [soluong];
	int i=0;
	
	for (i=0;i<soluong;i++){
		printf ("Nhap vao phan tu array[%d]", i);
	    scanf ("%d", &array[i]);
	}
	
	for (i=0;i<soluong;i++){
		printf ("Phan tu array[%d] la ", i);
	    scanf ("%d", &array[i]);
	}
	
	return 0;
	
}
