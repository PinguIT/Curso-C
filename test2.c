#include <stdio.h>
int main(){
int n;

        scanf("%d", &n);
        int i, y;
        
        for(i=0; i<n; i++){
            for(y=0; y<n; y++){
                if(i-y>=0){
                    printf("* ");
                }
            }
            printf("\n");
        }
        
        return 0;

}



