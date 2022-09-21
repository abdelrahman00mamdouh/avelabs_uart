 void SWUART_init(uint32_t baudrate){
 UBRRL =baudrate;
 set_bit(UCSRB,RXEN);
 set_bit(UCSRB,TXEN);
 UCSRC=UCSRC_CONFIG;
 }



void SWUART_send(uint8_t data){

while(!(UCSRA &(1<<5)));
UDR=data;
}

 void SWUART_recieve(uint8_t *data){

while(!(UCSRA &(1<<7)));
*data=UDR;
}
