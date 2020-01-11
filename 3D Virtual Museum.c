#include<stdio.h>
int main(){
    int m=0,n=0,i,result=0,value;
    while(scanf("%d%d", &n, &m)!=EOF){

    result=0;
    for(i=1;i<=n;i++){
      scanf("%d",&value);

      if(i>(n-m))
            result=result+value;
    }
    printf("%d\n", result);
    }
    return 0;

}
