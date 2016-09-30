#include<cstdio>
#define LOCAL

int cal(char a, char b) {
  if(a == b){
    return 0;
  }
  switch(a) {
    case 'C':
      if(b == 'J') {
        return 1;
      }else {
        return -1;
      }
    case 'J':
      if(b == 'C') {
        return -1;
      }else {
        return 1;
      }
    case 'B':
      if(b == 'C') {
        return 1;
      }else {
        return -1;
      }
  }
}

int main() {
  #ifdef LOCAL
    freopen("../data","r",stdin);
  #endif
  int n;
  scanf("%d",&n);
  char a,b;
  int am[3],bm[3];

  int win=0,lose=0,equal=0;
  for(int i=0;i<n;++i) {
    getchar();
    scanf("%c",&a);
    getchar();
    scanf("%c",&b);
    int result = cal(a,b);
    if(result==0) {
      ++equal;

    }

  }
}
