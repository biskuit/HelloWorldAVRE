/*
 * main.c

 *
 *  Created on: Mar 21, 2014
 *      Author: eprasetio
 */
#include <stdio.h>
#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>

int main(void){

	DDRD |= 1<<5;

	while(1){
		PORTD ^= 1<<5;
		_delay_ms(2000);
	}

	return 0;
}
