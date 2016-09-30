#include<cstdio>
#define LOCAL

int main(){
	#ifdef LOCAL
		freopen("../data","r",stdin);
	#endif
	int n;
	scanf("%d",&n);
	int temp;
	int evenSum=0;
	int crossSum=0,label=1,num2=0;
	int num3=0;
	int sum=0,num4=0;
	int max = -1;
	for(int i=0;i<n;++i){
		scanf("%d",&temp);
		int rest = temp % 5;
		switch(rest){
			case 0:
				if(temp % 2 == 0) {
					evenSum += temp;
				}
				break;
			case 1:
				crossSum += (label*temp);
				label *= -1;
				++num2;
				break;
			case 2:
				++num3;
				break;
			case 3:
				++num4;
				sum += temp;
				break;
			case 4:
				if(temp > max){
					max = temp;
				}
				break;
		}
	}
	if(evenSum==0)
		printf("N ");
	else
		printf("%d ",evenSum);
	if(num2 == 0)
		printf("N ");
	else
		printf("%d ",crossSum);

	if(num3==0)
		printf("N ");
	else
		printf("%d ",num3);
	if(num4==0)
		printf("N ");
	else
		printf("%.1f ",(double)sum/num4);
	if(max == -1)
		printf("N");
	else
		printf("%d",max);

}
