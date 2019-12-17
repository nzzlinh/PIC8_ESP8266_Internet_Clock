boolean startSig(){
   output_low(dht11_pin);
   delay_ms(30);
   output_float(dht11_pin);
   delay_us(80);
   if (!input(dht11_pin)){
      delay_us(80);
      if (input(dht11_pin)) 
         return 1;
      else return 0;
   }
}
int Time_out = 0;
unsigned int8 Read_Data(){
  unsigned int8 i, k, _data = 0;   
  if(Time_out)
    break;
  for(i = 0; i < 8; i++){
    k = 0;
    while(!input(dht11_pin)){           //Doi bit 1, neu thoi gian bit 0 > 50, 100 cho chac an, thi time out
      k++;
      if(k > 100){
        Time_out = 1;
        break;
      }
      delay_us(1);
    }
    delay_us(30); // Do dai muc 1 cua bit 0
    if(!input(dht11_pin))
      bit_clear(_data, (7 - i));        // data bit = 0
    else{
      bit_set(_data, (7 - i));          // Set bit (7 - i)
      while(input(dht11_pin)){          // Wait until DHT11 pin goes low
        k++;
        if(k > 100){
        Time_out = 1;
        break;
      }
      delay_us(1);}
    }
  }
  return _data;
}
}

void dht11Get(char *h1, char *h2, char *t1, char *t2){
   Time_out = 0;
   if (startSig()){
      *h1 = Read_Data();
      *h2 = Read_Data();
      *t1 = Read_Data();
      *t2 = Read_Data();
      if (Time_out){
         *h1 = '';
         *h2 = '';
         *t1 = '';
         *t2 = '';
      }
   }
}
