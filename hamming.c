#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
printf("	>Sender<	");
printf("\n");
int m,r,i,power,modification;
printf("Enter the length of data bits: \n");
scanf("%d",&m);
char c[m];
printf("\n");
printf("Enter the data to be transmitted: \n");
scanf("%s",&c);
printf("\n");
double x;
for(i=0;i<m;i++){
        x=i;
        if(pow(2,x)>m+x+1){
                r=(int)x;
                break;
                }
                }
                printf("Total number of redundant bits are %d\n",r);
                printf("\n");
                char SenderParity[r];
                char RecieverParity[r];
                int l=m+r;
                char h[l];
                char reciever[l];
                int b=0;
                int v=0;
                int j=0;
                for(i=l-1;i>=0;i--){
                        if((i==0 ||ceil(log2(i+1))==floor(log2(i+1)))){
                            h[i]='R';
                            }else{
                                h[i]=c[j]; j=j+1;
                                }
                                }
                                printf("Position of redundant bits are: \n");
                                for(i=l-1;i>=0;i--){
                                        printf("%c",h[i]);
                                        }
                                        printf("\n\n");
                                        ParityFind(l,h);
                                        j=0;
                                        for(i=0;i<l;i++){
                                                if((i==0 ||ceil(log2(i+1))==floor(log2(i+1)))){
                                                    SenderParity[j]=h[i];
                                                    j=j+1;
                                                    }
                                                    }
                                                    printf("Data after finding the parity bits is: \n");
                                                    for(i=l-1;i>=0;i--){
                                                            printf("%c",h[i]);
                                                            }
                                                            printf("\n\n");
                                                            printf("Parity bits at sender are %s",SenderParity);
                                                            printf("\n\n");
                                                            for(i=0;i<l;i++){
                                                                    reciever[i]=h[i];
                                                                    }
                                                                    printf("Enter 1 if you want modification or else enter 0 \n");
                                                                    scanf("%d",&modification);
                                                                    {
                                                                        if(reciever[5]=='1'){
                                                                                reciever[5]='0';
                                                                                } else if
                                                                                (reciever[5]=='0')
                                                                                {
                                                                                    reciever[5]='1';
                                                                                    }
                                                                                    }
                                                                                    printf("	>Receiver<	");
                                                                                    printf("\n\n");
                                                                                    ParityFind(l,reciever);
                                                                                    printf("Data received at receiver is: \n");
                                                                                    for(i=l-1;i>=0;i--){
                                                                                            printf("%c",reciever[i]);
                                                                                            }
                                                                                            printf("\n\n");
                                                                                            j=0;
                                                                                            for(i=0;i<l;i++){
                                                                                                    if((i==0 ||ceil(log2(i+1))==floor(log2(i+1)))){
                                                                                                        RecieverParity[j]=reciever[i]; j=j+1;
                                                                                                        }
                                                                                                        }
                                                                                                        printf("Parity bits at receiver is %s \n",RecieverParity);
                                                                                                        printf("\n");
                                                                                                        double error=0;
                                                                                                        if(modification==1){
                                                                                                                for(i=0;i<r;i++){
                                                                                                                    if(RecieverParity[i]=='1'){
                                                                                                                        error=error+pow(2,i);
                                                                                                                        }
                                                                                                                        }printf("Data received at receiver is not same as data sent by sender \n\n");
                                                                                                                        printf("Error is at bit number %d",(int)error);
                                                                                                                        printf("\n\n");
                                                                                                                        }else
                                                                                                                        printf("Data received at receiver is same as data sent by sender \n\n");
                                                                                                                        printf("\n\n");
                                                                                                                        }
void ParityFind(int l,char h[]){
    int v=0;
    for(int i=0;i<l;i++){
            if((i==0 ||ceil(log2(i+1))==floor(log2(i+1)))){
                v=v+1;
                int j,w,g,f,count=0;
                for(g=0;g<l;g++){
                        w=g+1; if(v==1){
                            if(w%2!=0){
                                if(h[g]=='1')
                                count=count+1;
                                }
                                }else{
                                    for(j=0;j<v-1;j++){
                                            w=w/2;
                                            }
                                            w=w%2;
                                            if(w==1){
                                                if(h[g]=='1')
                                                count=count+1;
                                                }
                                                }
                                                }
                                                if(count%2!=0){
                                                        h[i]='1';
                                                        count=0;
                                                        }else{
                                                            h[i]='0';
                                                            count=0;
                                                            }
                                                            }
                                                            }
                                                            }
