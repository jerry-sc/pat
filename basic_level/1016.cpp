#include<cstdio>
#include<cstring>
#define LOCAL

long long cal(char a[], char ch) {
	int len = strlen(a);
	long long sum = 0;
	for(int i=0;i<len;++i) {
		if(a[i] == ch) {
			sum = sum * 10 + (ch - '0');	
		}
	}
	return sum;
}

int main(){
	#ifdef LOCAL
		freopen("../data","r",stdin);
	#endif
	char a[15],b[15];
	char da,db;
	scanf("%s %c %s %c",a,&da,b,&db);
	long long pa = cal(a,da);
	long long pb = cal(b,db);
	printf("%lld\n",pa + pb);
}
