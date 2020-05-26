/* 
 * File:   utility.h
 * Author: Brian Schmalz
 *
 * Created on May 25, 2020, 7:52 PM
 */

#ifndef UTILITY_H
#define	UTILITY_H

#define INPUT_PIN   1
#define OUTPUT_PIN  0

#define bitset(var,bitno) ((var) |= (1 << (bitno)))
#define bitclr(var,bitno) ((var) &= ~(1 << (bitno)))
#define bittst(var,bitno) (var & (1 << bitno))


void BlinkUSBStatus (void);     // Handles blinking the USB status LED
BOOL SwitchIsPressed (void);    // Check to see if the user (PRG) switch is pressed
void SetPinTRISFromRPn (char Pin, char State);
void SetPinLATFromRPn (char Pin, char State);
void populateDeviceStringWithName(void);

#endif	/* UTILITY_H */

