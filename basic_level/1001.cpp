#include<cstdio>
#define LOCAL

int main(){
	#ifdef LOCAL
		freopen("../data.in","r",stdin);
		freopen("../data.out","w",stdout);
	#endif
	int n;
	scanf("%d",&n);
	int num = 0;
	while(n != 1) {
		++num;
		if(n%2==0){
			n /= 2;
		}else {
			n = (3*n+1)/2;
		}
	}
	printf("%d\n", num);
	return 0;
}

