#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void vIsMirrored (char str[])
    {
//make two variables l is the first and is is the last
        int l =0;
        int h = strlen(str)-1;
//l =0 and the highest is strlen(str)-1
        while (h>l)
        {
            if ((str[l++])!=str[(h--)])
            {
                printf("\n%s,is not mirorred",str);
                return;
            }
        }
        printf("\n%s,is mirorred",str);
    }
int main()
{
   vIsMirrored("abba");
   vIsMirrored("mark");
   vIsMirrored("otto");
    return 0;
}
