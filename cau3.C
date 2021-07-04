#include <Windows.h>
#include <stdio.h>
WINAPI HAM_THUC_THI(LPVOID lpThreadParameter)
{
	while (1)
	{
		printf("Say hello\r\n");
		Sleep(1000);
		
	}
}
WINAPI HAM_THUC_THI_2(LPVOID lpThreadParameter)
{
	while (1)
	{
		printf("xin chao\r\n");
		Sleep(1000);
		
	}
}
void main()
{
	HANDLE thread1 = CreateThread(NULL, 16, HAM_THUC_THI, NULL, NULL, NULL);
	HANDLE thread2 = CreateThread(NULL, 16, HAM_THUC_THI_2, NULL, NULL, NULL);
	while (1)
	{
	}
}