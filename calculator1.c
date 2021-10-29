#include<stdio.h>
#include<math.h>
int main()
{
    long long choice,i,k=1;
    float pi=22.0/7,ang,rad,c=0,p=1,n;
    long long a[100000];
    printf("if you want to perform addtion enter 1\n");
     printf("if you want to perform subtraction enter 2\n");
      printf("if you want to perform multiplication enter 3\n");
       printf("if you want to perform division enter 4\n");
        printf("to find sin angle enter 5\n");
         printf("to find cos angle enter 6\n");
          printf("to find tan angle enter 7\n");
           printf("to find square root enter 8\n");
            printf("to find log of number enter 9\n");
             printf("to inverse a number enter 10\n");
      printf("enter your choice =\n");
      scanf("%lld",&choice);
      switch(choice)
      {
          case 1:
          printf("how many numbers you are giving?\n");
    scanf("%f",&n);
          for(i=1;i<=n;i++)
          {
              printf("enter number=\n");
              scanf("%lld",&a[i]);
              c=c+a[i];
          }
          printf("Sum is = %lld",c);
          break;
          case 2:
          for(i=1;i<=n;i++)
          {
              printf("enter number=\n");
              scanf("%lld",&a[i]);
              c=a[i]-c;
          }
          printf("Subtraction is = %lld",-c);
          break;
          case 3:
          printf("how many numbers you are giving?\n");
    scanf("%f",&n);
          for(i=1;i<=n;i++)
          { 
              printf("enter number=\n");
              scanf("%lld",&a[i]);
              k=a[i]*k;;
          }
          printf("Multiplication is = %lld",k);
          break;
          case 4:
          for(i=1;i<=n;i++)
          {
              printf("enter number=\n");
              scanf("%lld",&a[i]);
              p=a[i]/(float)p;
          }
          printf("Division is = %f",p);
          break;
          case 5:
          printf("enter in degrees=\n");
          scanf("%f",&ang);
          rad=pi/180*ang;
          c=sin(rad);
          printf("%f",c);
          break;
          case 6:
          printf("enter in degrees=\n");
          scanf("%f",&ang);
          rad=pi/180*ang;
          c=cos(rad);
          printf("%f",c);
          break;
          case 7:
          printf("enter in degrees=\n");
          scanf("%f",&ang);
          rad=pi/180*ang;
          c=tan(rad);
          printf("%f",c);
          break;
          case 8:
          printf("enter the number=\n");
    scanf("%f",&n);
    c=sqrt(n);
    printf("%f",c);
    break;
    case 9:
    printf("enter the number=\n");
    scanf("%f",&n);
    c=log(n);
    printf("logarthim of number is = %f",c);
    break;
    case 10:
    printf("enter the number = \n");
    scanf("%f",&n);
    c=(1/n);
    printf("the reverse of the number is %f",c);
    break;
       
      }
      return 0;

}