#include <stdio.h> int main()
{
int t; scanf("%d",&t); while(t--)
{
int n;
scanf("%d",&n); if(n%21==0 || n%100==21)
printf("The streak is broken!\n"); else
printf("The streak lives still in our heart!\n"); }
return 0; }
