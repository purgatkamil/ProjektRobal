int getDirection(void){


}

void Blink(){
    P1DIR |= BIT0; // ustawienie P1.0 jako wyj�cie
    P1OUT &= ~BIT0; // ustawienie stanu niskiego na P1.0

    while(1)
    {
        P1OUT ^= BIT0; // zmiana stanu P1.0
        __delay_cycles(100000); // op�nienie, aby mo�na by�o zauwa�y� migotanie
    }
}


