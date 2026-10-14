#include <stdio.h>
#include <math.h>

struct Coords
{
  int x,y;   
};

int computemax(int a, int b){
    return(a>b ? a:b);
}

int main(){
    int n,t,a,max,sum;
    double distance;
    int min_d, max_d;
    Coords p,q;
    scanf("%d",&t);
    while(t){
        max=0;sum=0;
        scanf("%d", &n);
        scanf("%d %d %d %d", &p.x,&p.y,&q.x,&q.y);
        distance=sqrt(pow((p.x-q.x),2)+pow((p.y-q.y),2));
        for(int i=0;i<n;i++){
            scanf("%d", &a);
            max=computemax(max,a);
            sum+=a;
        }
        if(distance==a && n==1){printf("YES\n"); continue;}
        max_d=sum;
        sum=sum-max;
        min_d = (max <= sum) ? 0 : max - sum;
        if(min_d<=distance && max_d>=distance) printf("YES\n"); else printf("NO\n");
        t--;
    }

    
}