#include <stdint.h>

// big thanks to thln's post here:
// https://devzone.nordicsemi.com/f/nordic-q-a/11492/nrf52-write-nfc-tag/43405#43405
// was a long way towards getting me to a read/writable tag!
extern const uint8_t t2tTesterBin[540] = {
	// page 0
	0x5F, 0xF6, 0x4C, 0x6D,	// Internal 0-3					// UID 0-2, CB0
	0x2F, 0xF4, 0xDA, 0x59,	// Internal 4-7					// UID 3-6, CB1
	0x58, 0x03, 0x00, 0x00, // Internal 8-9 | Lock0-1       // UID 7, CB3	| makes the card writable! (no locks)
	0xE1, 0x11, 0x7C, 0x00, // CC0-3						// <-- makes the card writable!
	// page 4
	0x03, 0x16, 0xC1, 0x01,	// TLV Tag field, Length field, Value field
	0x00, 0x00, 0x00, 0x0F, // NDEF Payload length 15
	0x54, 0x02, 0x65, 0x6E, // NDEF Message Type : Text UTF8
	0x48, 0x65, 0x6C, 0x6C, // 'H' 'e' 'l' 'l'
	// page 8
	0x6F, 0x20, 0x57, 0x6F, // 'o' ' ' 'W' 'o'
	0x72, 0x6C, 0x64, 0x21, // 'r' 'l' 'd' '!'
	0x00, 0x00, 0x00, 0x00, // nulls to round out the
	0x00, 0x00, 0x00, 0x00, // string in the payload.
};
