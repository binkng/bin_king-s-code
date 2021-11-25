//
//		struct tm* ptm;
//		time _ t m;
//		time(&m);
//		ptm = localtime(&m);
//		year = ptm->tm _ year + 1900;
//		month = ptm->tm _mont + 1;
//		day = ptm->tm _ mday;
//		hour = ptm->tm _ hour;
//		min = ptm->tm _ min;
//		sec = ptm->tm _ sec
//	}
//	void output()
//	{
//		printf("%4d/%. 2d/%.2d%.2d:%.2d:%.2d\ n¡± , year , month , day , hour , min , sec );
//	}
//};
//void main(void)
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
		time(&m);
		ptm = localtime(&m);
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
}#include<time.h>
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
////
////void main()
////{
////	int a, b, c;
////	cin >> a >> b >> c;
////	int Min=Max(a, b, c);
////	cout << "MIN=" << Min << endl;
////}
//
////int str_count(string substr, string str)
////{
////    int times = 0, num = 0, i = 0;
////    int a = substr.length();
////    int b = str.length();
////    if (a > b)
////        return 0;
////    else
////    {
////        for (int i = 0; i < b; i++)
////        {
////            if (str[i] == substr[0])
////                for (int j = 0; j < a; j++)
////                {
////                    if (str[i + j] == substr[j])
////                    {
////                        num++;
////                        continue;
////                    }
////                    else
////                        break;
////                }
////        }
////        times = num / a;
////        return times;
////    }
////}
////
////int main()
////{
////    string str;
////    cout << "plz input str:" << endl;
////    cin >> str;
////    string substr;
////    cout << "plz input substr:" << endl;
////    cin >> substr;
////    cout << "the repeated is " << str_count(substr, str) << " times" << endl;
////    while (1);
////    return 0;
////}
////    
//
//class datetime
//{
//public:
//	int year;
//	int month;
//	int day;
//	int hour;
//	int min;
//	int sec;
//	datetime()
//	{
//	datetime d;
//	d.output();
//}
//}

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
		time(&m);
		ptm = localtime(&m);
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