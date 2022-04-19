#include <stdio.h>

int main(){
float mps,kmph;
int operation;
printf("press '1' if u want to convert kilometres per hour to metres per sec\npress '2' if u want to convert metres per sec to kilometres per hour ");
printf("\n");
scanf("%d",&operation);

 switch (operation)
 {
 case 1:
printf("Enter your value in kilometres per hour to get in metres per seconds");
printf("\n");
scanf("%f",&kmph);
 mps=(3.6)*kmph;
 printf("%.f kmph = %.2f mps",kmph,mps);
     break;
 
 case 2:
 printf("Enter your value in metres per sec to get in kilometres per hour");
 printf("\n");
scanf("%f",&mps);
 kmph=(5/18)*mps;
 printf("%.f mps = %.2f kmph",mps,kmph);
 default:
 printf("assign correct operator");
     break;
 }

 return 0 ;
}
