#include<stdio.h>
int main(){
	int edge,length,height,radius;
	float PI=3.14;
	printf("edge = ");
	scanf("%d",&edge);
	printf("length = ");
	scanf("%d",&length);
	printf("height = ");
	scanf("%d",&height);
	printf("radius = ");
	scanf("%d",&radius);
	int pn=edge*4;
	printf("chu vi hinh vuong la: %d\n",pn);
	int as=edge*edge;
	printf("dien tich hinh vuong la: %d\n",as);
	int ra=length*height;
	printf("dien tich hinh chu nhat la: %d\n",ra);
	int poar=(length+height)*2;
	printf("chu vi hinh chu nhat la: %d\n",poar);
	float doac=PI*2*radius;
	printf("chu vi hinh tron la: %f\n",doac);
	float ca=PI*radius*radius;
	printf("dien tich hinh tron la: %f\n",ca);
}
