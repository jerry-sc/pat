#include<cstdio>
#define LOCAL

int main() {
	#ifdef LOCAL
		freopen("../data","r",stdin);
	#endif
	int width,length;
	char ch;
	scanf("%d %c",&length,&ch);
	if(length % 2 == 0) {
		width = length /2;
	}else {
		width = (length+1) / 2;
	}
	for(int i=0;i<length;++i) {
		printf("%c",ch);
	}
	printf("\n");
	
	for(int i=0;i<width-2;++i) {
		for(int j=0;j<length;++j) {
			if(j == 0 || j == length-1) {
				printf("%c",ch);
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}

	for(int i=0;i<length;++i) {
		printf("%c",ch);
	}
	printf("\n");
}
