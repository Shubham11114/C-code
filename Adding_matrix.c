#include<stdio.h>
int main (){
    int m,n;
    int arr[m][n];
    int arr1[m][n];
    int sum[m][n];
    printf("Enter Row :");
    scanf("%d",&m);
    printf("Enter Column:");
    scanf("%d",&n);
    printf("Enterr first Array");
    for (int i = 0;i<m;i++){
        for(int j= 0;j<n;j++){
            scanf("%d",&arr[i][j]);
        
    
    for (int i = 0;i<m;i++){
        for(int j= 0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        
  for(int i =0;i<m;i++){
    for(int j=0;j<n;j++){
        int sum[i][j]= arr[i][j]+arr1[i][j];
    }
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
       printf("%d",sum[i][j]);
    }
    
}

  }
}
}
}

return 0 ;
}