#include <16F887.h>
#device  ADC = 10 *=16
#FUSES HS NOWDT NOBROWNOUT NOLVP
#use delay(CRYSTAL=20M)
#use rs232(UART1)
#use spi(SPI1, BAUD = 1000000, MODE = 3, BITS = 8, STREAM = LCD_STREAM)

// Define SPI Pins                                                             
#define lcd_sclk  PIN_C3 
#define lcd_sda   PIN_C5             
#define lcd_dc    PIN_D3                     
#define lcd_cs    PIN_A5                                                                            
#define lcd_res   PIN_D2  
#define dht11_pin   PIN_D0 
// Define orther source files
#include "5110lib\3310(modified).c" 
#include "5110lib\dht11.c" 

#BIT TMR1IF=0X0C.0 //co tran timer1

char state = 0;
char k;
char l;
char count = 0;
int hr1 = 0, hr2 =0, min1 = 0, min2 = 0, sec1 = 0, sec2= 0, temp1 = 0 , temp2 =0, date =0, hum1 =0, hum2 =0;
int incode;
char cnt;
int sec;
char where2end;
boolean connected = 0;
boolean ready = 0;

char buffer[32];
char str[16];
char *ptr = &buffer;
int index = 0;

void init()
{
    setup_adc_ports(NO_ANALOGS);
    setup_adc (ADC_OFF) ;
//!    setup_spi (SPI_MASTER | SPI_L_TO_H);
    setup_uart(115200);
    enable_interrupts(INT_RDA);
    enable_interrupts(GLOBAL);
    enable_interrupts(INT_EXT);
    ext_int_edge(H_TO_L);
    setup_timer_0( RTCC_INTERNAL | RTCC_DIV_256);
    setup_timer_1( T1_INTERNAL | T1_DIV_BY_8);
    SET_TIMER1(3036);
    lcd_init ();
    TMR1IF = 1; // ep ngat timer1
    lcd_gotoxy(22, 1);
    lcd_putc("WELCOME!");
    lcd_gotoxy(12, 2);
    lcd_putc("San pham cua");
    lcd_gotoxy(27, 3);
    lcd_putc("NHOM 7");
    delay_ms(2000);
    lcd_clear();
    lcd_gotoxy(10, 2);
    lcd_putc("Connecting ");
    lcd_gotoxy(15, 3);
    while(!connected){
       lcd_data(0x80);
       lcd_data(0x00);
       delay_ms(500);
    }
    lcd_clear();
    while (!ready) 
    sec1 = buffer[9];
    sec1 = buffer[10];
}

void buzz(){
   output_high(PIN_D1);
   output_high(PIN_A4);
   delay_ms(50);
   output_low(PIN_A4);
   output_low(PIN_D1);
}
//!#INT_TIMER1
//!void updateSec(){
//!   TMR1IF = 0;
//!      SET_TIMER1(3036);
//!      cnt++;
//!      if (cnt==10){
//!        sec++;
//!        if (sec>60){
//!           sec = 0;
//!           buzz();
//!           putc(0x40);
//!        }
//!        cnt=0;
//!        output_high(PIN_A4); 
//!      }
//!      else output_low(PIN_A4); 
//!      sec1 = sec/10 + 0x30;
//!      sec2 = sec%10 + 0x30;
//!}
//!
#INT_RDA 
void uart_receive(){
   incode = getc();
   if (incode == '@')
   {  
      connected = 1;
      return;
   }
   if (incode == '#')
   {  
      ready=true;
      return;
   }
   if (incode == '$')
   { 
      *ptr = incode;
      ptr = &buffer;
      ready=false;
      return;
   }
   if (ready){
      *ptr = incode;
      ptr++;

   }
}


#int_ext
void encoder(){
   if (!state){
       state = 1;
       l = input(PIN_D4);
       k = input(PIN_D5);
<<<<<<< HEAD
       Set_timer0(0);
       count++;
       lcd_clear();
=======
       Set_timer1(0);
       if (k) count++;
//!       else 
//!       {
//!         count--;
//!       }
>>>>>>> 473bd370cd4d2ba0e73ccbd3df58994c526b9563
       if (count > 3) count = 0;
       if (count < 0) count = 1;
       if (count == 2) putc('@'); // update thoi tiet khi vao man hinh thoi tiet
    }
    else {
         if (get_timer0() > 49){
            state = 0;
            Set_timer0(0);
         }
    }
}


void main()
{
    init(); 
    char x= 4, y=2;
    char x1= 10, y1=2;
    buzz();
    WHILE (true)                                        
    { 
         if (TMR1IF == 1){
            TMR1IF = 0;
            SET_TIMER1(3036);
            cnt++;
            if (cnt==10){
              sec++;
              if (sec>=60){
                 sec = 0;
                 buzz();
                 putc(0x40);
              }
              cnt=0;
//!              output_high(PIN_A4); 
            }
//!            else output_low(PIN_A4); 
            sec1 = sec/10 + 0x30;
            sec2 = sec%10 + 0x30;
         }
    
         if (count == 1){
            hr1 = buffer[0];
            hr2 = buffer[1];
            min1 = buffer[2];
            min2 = buffer[3];
            date = buffer[4];
            
            lcd_gotoxy(25, 0);
            lcd_putc(date-0x30);
            if (date == '0') lcd_putc("CHU NHAT");
            if (date == '1') lcd_putc("THU HAI");
            if (date == '2') lcd_putc("THU BA");
            if (date == '3') lcd_putc("THU TU");
            if (date == '4') lcd_putc("THU NAM");
            if (date == '5') lcd_putc("THU SAU");
            if (date == '6') lcd_putc("THU BAY");
            
            lcd_print_digit(hr1 -0x30, x, y);
            lcd_print_digit(hr2-0x30, x + 12, y);
            lcd_print_digit(11, x + 24, y);
            lcd_print_digit(min1-0x30, x + 36, y); 
            lcd_print_digit(min2-0x30, x + 48, y);
            lcd_putc(" ");
            lcd_putc(sec1);
            lcd_putc(sec2);
            lcd_gotoxy(40,5);
            lcd_data(0x80);
            lcd_data(0x80);
            lcd_data(0x00);
            lcd_data(0x60);
            lcd_data(0x60);
            lcd_data(0x00);
            lcd_data(0x80);
            lcd_data(0x80);
            lcd_data(0x00);
            lcd_data(0x80);
            lcd_data(0x80);
         
         }
         else if (count ==  0)
         {  
            
            temp1 = buffer[5];
            temp2 = buffer[6];
            hum1 = buffer[7];
            hum2 = buffer[8];
            
            if (temp1 == 0) {
               lcd_clear();
               lcd_gotoxy(10, 3);
               lcd_putc("Loading...");
            }
            lcd_gotoxy(4,1);
            lcd_putc("Temp.: ");
            lcd_gotoxy(55,1);
            lcd_putc(temp1);
            lcd_putc(temp2);
            lcd_putc(" ");
            lcd_data(0x03);
            lcd_data(0x03);
            lcd_data(0x00);
            lcd_putc("C");
            lcd_gotoxy(5,3);
            lcd_putc("Hum.: ");
            lcd_gotoxy(55,3);
            lcd_putc(hum1);
            lcd_putc(hum2);
            lcd_putc(" %");
            lcd_gotoxy(40,5);
            lcd_data(0x60);
            lcd_data(0x60);
            lcd_data(0x00);
            lcd_data(0x80);
            lcd_data(0x80);
            lcd_data(0x00);
            lcd_data(0x80);
            lcd_data(0x80);
            lcd_data(0x00);
            lcd_data(0x80);
            lcd_data(0x80);
         }
         else if (count == 2)
         {
            lcd_gotoxy(0,0);
            lcd_putc("Weather today:");
            lcd_gotoxy(15,2);
            for (char i=9; i< 32;i++){
               if (buffer[i]=='$') break;
               if (buffer[i]==' ') {
                  for (int j=(i-9); j<=14; j++){ 
                     lcd_putc(" "); //Xuong dong
                  }
                  continue;
               }
               lcd_putc(buffer[i]);
            }
            lcd_gotoxy(40,5);
            lcd_data(0x80);
            lcd_data(0x80);
            lcd_data(0x00);
            lcd_data(0x80);
            lcd_data(0x80);
            lcd_data(0x00);
            lcd_data(0x60);
            lcd_data(0x60);
            lcd_data(0x00);
            lcd_data(0x80);
            lcd_data(0x80);
         }
<<<<<<< HEAD
         else if (count == 3)
         {   
            char x= 4, y=2;
            int a, b, c, d;
            a = 2; b = 3; c = 0; d = 3;
            lcd_gotoxy(1,0);
            lcd_putc("Arlam at:"); 
            lcd_print_digit(a, x1, y1);
            lcd_print_digit(b, x1 + 12, y1);
            lcd_print_digit(11, x1 +24, y1);
            lcd_print_digit(c, x1 + 36,y1);
            lcd_print_digit(d, x1 +48, y1);
            lcd_gotoxy(40,5);
            lcd_data(0x80);
            lcd_data(0x80);
            lcd_data(0x00);
            lcd_data(0x80);
            lcd_data(0x80);
            lcd_data(0x00);
            lcd_data(0x80);
            lcd_data(0x80);
            lcd_data(0x00);
            lcd_data(0x60);
            lcd_data(0x60);
=======
         
         char x= 4, y=2;
         int a, b, c, d, check;
         a = 1; b = 2; c = 1; d = 4;check = pin_D6;
            //lcd_clear();
            if(check!=PIN_D6) output_high(PIN_A4);
            lcd_gotoxy(1,0);
            lcd_putc("Arlam at:"); 
            lcd_print_digit(a, x, y);
            lcd_print_digit(b, x + 12, y);
            lcd_print_digit(11, x +24, y);
            lcd_print_digit(c, x + 36,y);
            lcd_print_digit(d, x +48, y);
            if(((hr1-0x30==a) && (hr2 - 0x30 == b)) && ((min1 - 0x30 == c) && (min2-0x30 ==d))){
            buzz();
            }
            cnt = count;
            
            //delay_ms(500);
>>>>>>> 473bd370cd4d2ba0e73ccbd3df58994c526b9563
         }
       delay_ms(100);
//!         if(((hr1-0x30==a) && (hr2 - 0x30 == b)) && ((min1 - 0x30 == c) && (min2-0x30 ==d))){
//!            buzz()
      } 
 } 
