#include <16f887.h>
#device *=16 ADC=8 // Khai bao during con tro 16-bt 
#FUSES NOWDT, HS, NOPUT, NOBROWNOUT,NOPROTECT, NOLVP 
#use delay(clock = 8000000) // Khai bao su �ung Thach Anh 8 - Mhz
//#include<luutinh.h>
void Button1();
void Button2();
void Button1()
{
if(input(pin_d3)==0){

output_high(pin_c5);

output_low(pin_c7);

}
else{
output_low(pin_c5);

output_low(pin_c7);

}
} 
void Button2(){
if(input(pin_d4)==0){
output_high(pin_c5);

output_high(pin_c7); 

}
else{
output_low(pin_c5);

output_low(pin_c7);


}
}
void main()
{


set_tris_b(0x00);  // khai bao port b la output 
set_tris_c(0x00);  // khai bao port c la output 
set_tris_d(0xFF); 


while(TRUE){


output_c(0x00);

//BUTTON

while(input(pin_d3)==0) 
{
Button1();
}
while(input(pin_d4)==0)
{
Button2();
}

}
}






