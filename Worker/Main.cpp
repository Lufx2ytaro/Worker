#include<iostream>

#include"Worker.h"

using namespace std;



int main()
{
    setlocale(LC_ALL, "Russian");
    string work = "Manager";
    Worker workers[5] = {
    { "Oleg", "Nechiporenko", "Kizaru", "Boss", 2000, 20000 },
    { "Ivan", "Vasilyevich", "iVolk", "Manager", 2000, 10000 },
    { "Kung", "Fu", "Panda", "Progrsmist", 2001, 10000 },
    { "Geroy", "Nashego", "Vremeni", "Security", 2001, 5000 },
    { "Misha", "Kolins", "Kas", "Designer", 2002, 15000 }
    };



    cout << "EXPERIENCE" << endl;
	workers->Experience(workers, 22);
    cout << endl;
    cout << "INCOME" << endl;
    workers->income(workers, 10000);
    cout << endl;
    cout << "WORK" << endl;
    workers->work(workers,work);
    cout << endl;

	
}
