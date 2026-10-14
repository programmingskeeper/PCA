#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int n,t,k;
    int **matrix;
    int sqr_chng=0;

    scanf("%d", &t);
    while(t){
        scanf("%d %d", &n,&k);
        matrix=malloc(n*sizeof(int*));

        for(int i=0;i<n;i++)
            matrix[i]=malloc(n*sizeof(int));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                scanf("%d", &matrix[i][j]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]!=matrix[n-i-1][n-j-1])
                    sqr_chng++;
            }
        }
        sqr_chng/=2;

        if(sqr_chng == k) 
            printf("YES\n");
        else if(sqr_chng > k)
            printf("NO\n");  
        else if(n % 2 != 0){
            printf("YES\n"); 
        } else if(n % 2 == 0){
            if((k - sqr_chng) % 2 != 0) 
                printf("NO\n");
            else 
                printf("YES\n"); 
        }
        t--;
        sqr_chng=0;
        for(int i=0;i<n;i++)
         free(matrix[i]);
        free(matrix);
    }
     
    return 0;
}