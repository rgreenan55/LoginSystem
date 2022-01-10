#include <stdlib.h>

#ifdef _WIN32
	#define OS_WINDOWS
#endif

void clearScreen() {
	#ifdef OS_WINDOWS
		system("cls");
	#else
		system("clear");
	#endif
}