#include<stdio.h>
int main(){
	int n, sum=0, save;
	printf("moi ban nhap vao so nguyen co 4 chu so : ");
	scanf("%d",&n);
	if(n>=1000&&n<=9999){
	
		for(int i=1; i<=4; i++){
			save=n%10;
			sum += save;
			n/=10;
		}
	printf("tong cua day so la : %d",sum);
	}
	return 0;
}

