#include<stdio.h>
int main()
{ 
	int a,b,c;
	while(1){
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if ((a+b>c)&&(a+c>b)&&(c+b>a))
	{	if	((a==b)&&(b==c)&&(a==c))
		printf("等边三角形\n");
	else if( (a==b)||(b==c)||(a==c))
		printf("等腰三角形\n");
	else if( (a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
		printf("直角三角形\n");
	else
		printf("普通三角形\n");
	}
	else printf("不是三角形\n");
}
	return 0;

}



	
