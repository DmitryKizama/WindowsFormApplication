#include "MyForm.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;



class Trip{

private:
	int numberOfTrip;
	string depaturePoint; // відправлення
	string arrivalPoint; // прибуття
	int timeDepature; // Час рахуємо в хвилинах
	int timeArrival; // Час прибуття , АВТОМАТИЧНЕ ОБЧИСЛЕННЯ
	int timeDurationWay;

	void setTimeArrival(){
		timeArrival = timeDepature + timeDurationWay;
		while (timeArrival >= 1440) // 24 * 60 - усього хвилин у добі
		{
			timeArrival = timeArrival - 1440;
		}
	};

public:

	static Trip tripNull(){
		return Trip(0, 0, 0, "-", "-");
	};

	Trip(int number, int depature, int duration, string dp, string ap){
		numberOfTrip = number;
		depaturePoint = dp;
		arrivalPoint = ap;
		timeDepature = depature;
		timeDurationWay = duration;
		setTimeArrival();
	};
	void setNumberOfTrip(int a){
		numberOfTrip = a;
	};

	void setDepaturePoint(string a){
		depaturePoint = a;
	};

	void setArrivalPoint(string a){
		arrivalPoint = a;
	};

	void setTimeDepature(int a){
		timeDepature = a;
		setTimeArrival();
	};

	void setTimeDurationWay(int a){
		timeDurationWay = a;
		setTimeArrival();
	};

	int getNumberOfTrip(){return numberOfTrip;};
	int getTimeDepature(){return timeDepature;};
	int getTimeArrival(){return timeArrival;};
	int getTimeDurationWay(){return timeDurationWay;};
	string getDepaturePoint(){return depaturePoint;};
	string getArrivalPoint(){return arrivalPoint;};
};


public class DataBaseTrips{
private:

	static vector<Trip> listTrips;  

public:
	static vector<Trip> getList(){
		return listTrips;
	};

	static Trip getTrip(int number){
		for (int i = 0; i <= listTrips.size(); i++)
		{
			if (listTrips.at(i).getNumberOfTrip() == number)
			{
				return listTrips.at(i);
			}
		}
		return Trip::tripNull();
	};

	static vector<Trip> getListDepatures(string depature){
		vector<Trip> newList;

		for (int i = 0; i <= listTrips.size(); i++)
		{
			if (listTrips.at(i).getDepaturePoint() == depature)
			{
				newList.push_back(listTrips.at(i));
			}
		}
		return newList;
	};

	static vector<Trip> getListArrivals(string arrival){
		vector<Trip> newList;

		for (int i = 0; i <= listTrips.size(); i++)
		{
			if (listTrips.at(i).getArrivalPoint() == arrival)
			{
				newList.push_back(listTrips.at(i));
			}
		}
		return newList;
	};

	static vector<Trip> getListDepatureTime(int depatureTime){
		vector<Trip> newList;

		for (int i = 0; i <= listTrips.size(); i++)
		{
			if (listTrips.at(i).getTimeDepature() == depatureTime)
			{
				newList.push_back(listTrips.at(i));
			}
		}
		return newList;
	};

	static vector<Trip> getListArrivalTime(int arrivalTime){
		vector<Trip> newList;

		for (int i = 0; i <= listTrips.size(); i++)
		{
			if (listTrips.at(i).getTimeArrival() == arrivalTime)
			{
				newList.push_back(listTrips.at(i));
			}
		}
		return newList;
	};



};

[STAThread]
void Main(array<String^>^args){
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);

	Проект2::MyForm form;
	Application::Run(%form);
};