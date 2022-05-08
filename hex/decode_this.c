#include <stdio.h>
#include <Windows.h>

typedef unsigned int i32;
typedef unsigned char c;

c conf[] = {
	0x58, 0x4F, 0x41, 0x55, 0x44, 0x51, 0x45, 0x49, 0x54, 0x59, 0x47, 0x4A
};


int main()
{
	// VGhpcyBpcyBhIHR1dG9yaWFsIGkgbWFrZSBpdCBlYXN5IGZvciB5b3UgcHJpbnQgb3V0ICJZb3UgZGlkIGl0IiB3aXRoIHRoZXNlIGhleCB2YWx1ZXMgaW4gdGhlIGNvbmYgYXJyYXk=

	// Template to use:
	// DONT MODIFY THE FOR LOOP ONLY MODIFY THE IF STATEMENTS
	// YOU CAN REMOVE, ADD, MODIFY THE IF STATEMENTS

	for (int i = 0x00; i < 8; i++) {
		if (conf[i]) {
			printf("%c", conf[i]);
		}
	}

	Sleep(2000);
}