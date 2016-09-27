#include<cstdio>
#define LOCAL

int main() {
	#ifdef LOCAL
		freopen("../data","r",stdin);
	#endif
	int n;
	long long a,b,c;
	scanf("%d",&n);
	for(int i=1;i<=n;++i) {
		scanf("%lld%lld%lld",&a,&b,&c);
		if(a+b > c) {
			printf("Case #%d: true\n",i);
		}else {
			printf("Case #%d: false\n",i);
		}
	}
}
