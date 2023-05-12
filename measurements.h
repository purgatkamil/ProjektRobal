int getDirection(void){


}

void Blink(){
    P1DIR |= BIT0; // ustawienie P1.0 jako wyjœcie
    P1OUT &= ~BIT0; // ustawienie stanu niskiego na P1.0

    while(1)
    {
        P1OUT ^= BIT0; // zmiana stanu P1.0
        __delay_cycles(100000); // opóŸnienie, aby mo¿na by³o zauwa¿yæ migotanie
    }
}


