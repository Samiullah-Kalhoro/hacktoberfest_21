#include <stdio.h>

void main()
{
  int a[10] ,n,i,j,temp;
  printf("Enter the number of values\n");
  scanf("%d",&n);
  printf("Enter the values\n");
  for(i=0;i<n;i++){
      scanf("%d", &a[i]);
  };
  for(i=1;i<n;i++){
      for (j=0;j<n-i;j++){
          if (a[j]>a[j+1]){
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
      }
  }
  printf("The sorted elements are \n");
  for(i=0;i<n;i++){
      printf("%d\t",a[i]);
  }
}