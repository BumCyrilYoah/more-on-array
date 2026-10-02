#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main()
{
      float numbers[4]={4,6,10,5,6};
      float sum = 0;
      float mean;
      for(int i=0;  i<4; i++){
                  printf(" Values #%d = %.2f \n",i,numbers[i]);
                  sum = sum + numbers[i];
                  printf(" sum = %.2f \n ",sum);
                  mean = sum/4;
                        printf("Mean = %0.2f ",mean);
      Sleep(2000);
      }

    return 0;
}
