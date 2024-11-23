#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber,secondNumber,tuesNumber; 
	// nhap gia tri cho bien firstNumber tu ban phim
	printf("Moi ban nhap canh thu nhat:");
	scanf("%d",&firstNumber);
	printf("Moi ban nhap canh thu hai:");
	scanf("%d",&secondNumber);
	printf("Moi ban nhap canh thu ba:");
	scanf("%d",&tuesNumber);
	// xu ly yeu cau bai toan 
	if(firstNumber + secondNumber > tuesNumber && firstNumber + tuesNumber > secondNumber && secondNumber + tuesNumber > firstNumber){
	printf("La 3 canh cua tam giac"); 
	}
	else{
	    printf("khong phai la 3 canh cua tam giac");	
	}
		
	    return 0; 
 }
 
