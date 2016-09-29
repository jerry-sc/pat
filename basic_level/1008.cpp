#include<cstdio>
#define LOCAL
const int maxn = 110;
int a[maxn];

int main() {
	#ifdef LOCAL
		freopen("../data","r",stdin);
	#endif
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}	
	m = m % n;
	if(m==0) {
		for(int i=0;i<n;++i) {
			if(i == 0) 
				printf("%d",a[i]);
			else
				printf(" %d",a[i]);
		}
		printf("\n");
		return 0;
	}
	int index = n - m;
	printf("%d",a[index]);
	for(int j=index+1;j<n;++j) {
		printf(" %d",a[j]);
	}
	for(int j=0;j<index;++j) {
		printf(" %d",a[j]);
	}
	printf("\n");
}
