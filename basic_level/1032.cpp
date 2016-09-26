#include<cstdio>
#define LOCAL

const int maxn = 100010;
int school[maxn] = {0};

int main() {
	#ifdef LOCAL
		freopen("../data.in","r",stdin);
	#endif
	int n,no,temp;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d%d",&no,&temp);
		school[no] += temp;
	}
	int max = -1;
	int rank;
	for(int i=0;i<n;++i){
		if(school[i] > max) {
			max = school[i];
			rank = i;
		}
	}
	printf("%d %d\n",rank,max);
	return 0;
}
