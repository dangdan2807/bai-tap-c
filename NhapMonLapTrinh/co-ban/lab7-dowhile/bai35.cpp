#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
   string s[100];     // khai bao mot chuoi
   int i = 0;
   int chu = 0;            // bien de dem so nguyen am
   int so = 0;        // bien de dem so phu am
   int khac=0;
   scanf("%s", s[100]);
   while(s[i] != '\0') {
   	if(s[i] >= '0' && s[i] <= '9')
   		so++;
      else if(s[i] >= 'a' && s[i]<='z' )
      	chu++;
      else 
         khac++;
   	i++;
   }
   
   printf("Chuoi '%s' co chua: %d kí tự chu va %d ki tu so và %d kí tự khác.", s, chu, so, khac);
}
