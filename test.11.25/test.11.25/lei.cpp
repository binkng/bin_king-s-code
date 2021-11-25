#include<time.h>
#include<stdio.h>
class datetime
{
public:
	int year;
	int month;
	int day;
	int hour;
	int min;
	int sec;
	datetime()
	{
		struct tm* ptm;
		time_t m;
		time(& m);
		ptm = localtime(& m);
		year = ptm->tm_year + 1900;
		month = ptm->tm_mon + 1;
		day = ptm->tm_mday;
		hour = ptm->tm_hour;
		min = ptm->tm_min;
		sec = ptm->tm_sec;
	}
	void output()
	{
		printf("%.4d/%.2d/%.2d %.2d:%.2d:%.2d\n", year, month, day, hour, min, sec);
	}
};
void main(void)
{
	datetime d;
	d.output();
}