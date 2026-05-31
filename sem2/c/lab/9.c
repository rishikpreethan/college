//Compute the mean, variance and standard deviation of a list of temperatures

#include <stdio.h>
int main(){
    int N,i;
    float sum=0.0, variance=0.0,stddev=0.0,mean=0.0;
    float temp[100];
    float *ptr;
    printf("Enter the number of temperature readings: ");
    scanf("%d",%N);
    if(N<=0){
        printf("Invalid input");
        return 0;
    }
    ptr=temp;
    printf("Enter the temperature readings:");
    for(i=0;i<N;i++){
        scanf("%f",(ptr+i));
        sum+=*(ptr+i)
    }
    mean=sum/N;
    for(i=0;i<N;i++){
        variance+=pow(*(ptr+i)-mean,2);
    }
    stddev=sqrt(variance);
    printf("\nSum=%.2f\n",sum);
    printf("\nMean=%.2f\n",mean);
    printf("\nStandard Deviation=%.2f\n",stddev);
    pritnf("\nTemp readings that significantly deviate from mean: \n");
    for(i=0;i<N;i++){
        if(fabs(*(ptr+i)-mean))>stddev){
            printf("%.2f",*(ptr+i));
        }
    }
    return 0;
}