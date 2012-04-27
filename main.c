#include <stdio.h>
#include <time.h>
int main(void){
	printf("Welcome to git!\n");
	time_t mytime;
	struct tm *mylocaltime;
	mytime = time(NULL);
	mylocaltime=localtime(&mytime);
	printf("Year: %d\n",mylocaltime->tm_year+1900);
	printf("Month: %d\n",mylocaltime->tm_mon+1);
	printf("Day: %d\n",mylocaltime->tm_mday);
	printf("Hour: %d\n",mylocaltime->tm_hour);
	printf("Min: %d\n",mylocaltime->tm_min);
	printf("Second: %d\n",mylocaltime->tm_sec);
	printf("Modifyed by piaozhiye\n");
	printf("Verson:0.04\n");
	printf("hello world\n");
	return 0;
}
