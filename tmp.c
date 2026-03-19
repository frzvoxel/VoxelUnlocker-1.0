#include "pages.h"
#include <stdio.h>
#include "Intro.h"
#include <stdlib.h>
#include <Windows.h>

void tmp_page() {
	Intro();

	int result = system("del /q /s %temp%\\*");
	int result2 = system("del /q /s C:\\Windows\\Temp\\*");

	if (result == 0 && result2 == 0) {
		printf("Successfully cleaned temp :D ");
	}
	else {
		printf("not cleaned. temp (run as admin?)");
	}

	Sleep(2000);

	return;
}
