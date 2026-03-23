#include "../pages/pages.h"
#include <stdio.h>
#include "../Intro/Intro.h"
#include "../regedit/Regedit.h"
#include <stdlib.h>
#include <Windows.h>

#include <windows.h>
#include <stdio.h>
#include <string.h>

#define WINLOGON_PATH "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon"
#define RUN_PATH "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run"
#define RUNONCE_PATH "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunOnce"

const char* DEFAULT_SHELL = "explorer.exe";
const char* DEFAULT_USERINIT = "C:\\Windows\\system32\\userinit.exe,";

void NEXTPAGE_STARTUP(void) {
	Intro();

    printf("Checking Winlogon..\n");
    CheckAndResetWinlogonValues(DEFAULT_USERINIT, DEFAULT_SHELL, WINLOGON_PATH);
    printf("===================\n");
    Sleep(2000);

    printf("checking run...\n");
    CheckRun(RUN_PATH);
    printf("================\n");

    Sleep(2000);

    printf("checking runonce...\n");
    CheckRunOnce(RUNONCE_PATH);
    printf("======================");

    system("cls");
    return;
}