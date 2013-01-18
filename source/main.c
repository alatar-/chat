#include "main.h"

char* GetCurrentTime() {

	static char TIME[6];
	time_t rawtime;
	struct tm* timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(TIME, 6, "%H:%M", timeinfo);

	return TIME;
}

void Error(char message[]) {

	perror(message);
	exit(-1);
}