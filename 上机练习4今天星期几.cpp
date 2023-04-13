//��֪1900.1.1������һ����������Ժ��ĳ�����������ڼ� 
#include<iostream>
#include<stdio.h>
#define WEEKDAYS 7

using namespace std;

class WeekCalculator{
private:
	const int daysPerMonth[12];
public:
	WeekCalculator():daysPerMonth{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}{}
	// �������ж��Ƿ�Ϊ����
	int isLeapYear(int year) {
	    if (year % 400 == 0) return 1;
	    if (year % 100 == 0) return 0;
	    if (year % 4 == 0) return 1;
	    return 0;
	}
	
	// ����������ĳ���ڵ�1900.1.1֮���������
	int daysBetween(int year, int month, int day) {
		
	    int days = 0;
	    // ���� year �� 1900�� ֮�������
	    for (int i = 1900; i < year; i++) {
	        days += 365;
	        if (isLeapYear(i)) days++;
	    }
	    // ���� month �� 1�� ֮�������
	    for (int i = 1; i < month; i++) {
	         days += daysPerMonth[i-1];
	        if (i == 2 && isLeapYear((year))) days++;
	    }
	    // ���� day �� 1�� ֮�������
	    	days+=(day-1);
	
	    return days;
	}	
	
	void showResult(int year,int month,int day){
		int ret=0;
		ret=daysBetween(year,month,day)%WEEKDAYS;
		switch(ret){
			case 0:cout<<"Monday"<<endl;break;
			case 1:cout<<"Tuesday"<<endl;break;
			case 2:cout<<"Wednesday"<<endl;break;
			case 3:cout<<"Thursday"<<endl;break;
			case 4:cout<<"Friday"<<endl;break;
			case 5:cout<<"Saturday"<<endl;break;
			case 6:cout<<"Sunday"<<endl;break;
		}
	}
};

int main(){
	int year, month, day;
	scanf("%d-%d-%d", &year, &month, &day);
	
	WeekCalculator wc;
	wc.showResult(year,month,day);
}


