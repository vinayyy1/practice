#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter the number of elements in the array\n");
scanf("%d",&n);
float a[n];
printf("enter the elements of the array\n");
for(int i=0;i<n;i++){
    scanf("%f",&a[i]);
}
float sum=0,mean,var=0,stdd,*ptr;
ptr=a;
for(int i=0;i<n;i++){
sum=sum+*ptr;
ptr++;
}
ptr=a;
mean=sum/n;
for(int i=0;i<n;i++){
    var=var+pow(*ptr-mean,2);
    ptr++;
}
stdd=sqrt(stdd/n);
printf("sum=%f mean=%f standard deviation=%f",sum,mean,stdd);
    return 0;
}
