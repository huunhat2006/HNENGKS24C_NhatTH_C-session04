#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber;
	// nhap gia tri cho bien firstNumber tu ban phim
	printf("Moi ban nhap mot nam bat ky :");
	scanf("%d",&firstNumber);
	// xu ly yeu cau bai toan 
	if(firstNumber % 400 == 0 || firstNumber % 4 == 0 && firstNumber %100 != 0){
		printf("Nam ban nhap la nam nhuan"); 
	}
	    else{
	    	printf("Nam ban nhap khong phai là nam nhuan"); 
		} 
   
	    return 0; 

}
   
 

