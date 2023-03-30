#include <stdio.h>
#define M .8
#define k printf
#define I int
typedef struct c{double r, i;}j;
I h(I i,j a,j b){j r=(j){(a.r*a.r-a.i*a.i)+b.r,(2*a.r*a.i)+b.i};return(i+1<=0x32&&(a.r*a.r+a.i*a.i)<=4)?
h(i+1,r,b):i;}void u(I i){k(" %d %d %d",(i>=0x32)?0xFf:0,(i>=0x32)?0xff:0,(i>=0x32)?0xFF:(i==0)?0:((I)(
0xFF/0x32)* (i*i)));}I main() {k("P3\n600 600\n255\n"); for(I y=0;y< 0x258;y++){for(I x= 0;x< 0x258; x++){u(
h(0,(j){}, (j){(M-(-M) )*(((2*x)/600.)-1)-1,(M -(-M))*((( -2*y)/ 600.)+1)} ));} k("\n");}}