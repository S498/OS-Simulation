#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
  int i,j,n,a[50],frame[10],m,k,b,c=0;
  printf("\n Enter The Number Of Pages:\n");
  scanf("%d",&n);
  printf("\n Enter The Page Number :\n");
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
  printf("\n Enter The Number Of Frames :");
  scanf("%d",&m);
  for(i=0;i<m;i++)
    frame[i]= -1;
  j=0;
  printf("Reference String\t Page Frames\n");
  for(i=1;i<=n;i++)
  {
    printf("%d\t\t",a[i]);
    b=0;
    for(k=0;k<m;k++)
      if(frame[k]==a[i])
        b=1;
      if (b==0)
      {
        frame[j]=a[i];
        j=(j+1)%m;
        c++;
        for(k=0;k<m;k++)
          printf("%d\t",frame[k]);
      }
      printf("\n");
  }
  printf("Page Fault Is %d",c);
  return 0;
}
