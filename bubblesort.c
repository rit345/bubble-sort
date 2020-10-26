#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter array: \n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++){
        int f = 0;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int temp;
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                f = 1;
            }
        }
           if(f==0)
            break;

    }

        for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
