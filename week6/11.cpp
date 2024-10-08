#include <iostream>
#include <string.h>

using namespace std;

int main(){

   char c[]="Sample string";
   char str2[40];
   char str3[40];
   strcpy (str2,c);
   strcpy (str3,"copy successful");
   printf ("str1: %s\nstr2: %s\nstr3: %s\n",c,str2,str3);
    return 0;
}