#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void randomize ( int arr[], int n )
{
        srand ( time(NULL) );
     for (int i = n-1; i > 0; i--)
    {
               int j = rand() % (i+1);
 
               swap(&arr[i], &arr[j]);
    }
}
 
int main()
{
    
    int arr[] = {1, 2, 3, 4, 5, 6};
    int m[100],k,num,l,u,pts=100; 
    int n = sizeof(arr)/ sizeof(arr[0]);
    printf("YOU ARE PLAYING LUCKY ROLL GAME.\nHave fun!\n");
    printf("Task is to roll dices and match 5 of them as soon as you can.Happy playing!\n***************\n");
   for(k=0;k<5;k++)
   {
       randomize (arr,n);
       m[k]=arr[0];
   }
  while(m[0]!=m[1] || m[0]!=m[2] || m[0]!=m[3] || m[0]!=m[4])
  {
  for(k=0;k<5;k++)
   {
    printf("dice(%d) value is.....%d\n",k+1,m[k]);
   }
   printf("enter the number of dice you wish to roll...");
      scanf("%d",&num);
      printf("enter the dice number...\n");
      for(l=0;l<num;l++)
      {
          printf("dice number>>");
          scanf("%d",&u);
      }
      for(k=0;k<5;k++)
      {
          if(k+1==u)
          { 
              randomize (arr,n);
              m[k]=arr[0];
          }
      }
      pts=pts-5;
  }
  if(pts<0)
  {
      printf("Uh sorry. Better luck next time...");
  }
  else
  {
 printf("Congrats!...You scored %d points out of 100",pts);
  }
    return 0;
}
 



