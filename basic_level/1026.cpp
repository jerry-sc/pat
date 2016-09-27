#include<cstdio>
#define LOCAL

int main(){
	#ifdef LOCAL
		freopen("../data","r",stdin);
	#endif
	int c1,c2;
	scanf("%d%d",&c1,&c2);
	int time = (c2-c1)/100;
	if(time % 100 >= 50) {
		time++;
	}
	int hour = time / 3600;
	time %= 3600;
	int min = time / 60;
	time %= 60;
	printf("%02d:%02d:%02d\n",hour,min,time);
}
