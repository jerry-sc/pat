#include<cstdio>
#define LOCAL

int main() {
	#ifdef LOCAL
		freopen("../data","r",stdin);
	#endif
	int n;
	scanf("%d",&n);
	int ahan,ahua,bhan,bhua;
	int anum=0,bnum=0;
	while(n--) {
		scanf("%d%d%d%d",&ahan,&ahua,&bhan,&bhua);
		int hanSum = ahan + bhan;
		if(hanSum == ahua && hanSum != bhua) {
			++anum;
		}
		if(hanSum == bhua && hanSum != ahua) {
			++bnum;
		}
	}
	printf("%d %d\n",bnum,anum);

}
