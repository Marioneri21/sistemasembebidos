#include<stdio.h>

int main()
{
   

    for (unsigned char CodigoAscii = 32; CodigoAscii <=127; CodigoAscii++)
    {
if ((CodigoAscii >= '0')  && (CodigoAscii <= '9')) 
    
    {
printf("%c, ", CodigoAscii);

    
    }

    }
    return 0;
}


