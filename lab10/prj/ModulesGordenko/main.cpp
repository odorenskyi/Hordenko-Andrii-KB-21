#include <iostream>
#include <math.h>
#include <bitset>
#include <fstream>
#include <ctime>
#include <time.h>
#include <windows.h>

using namespace std;

double s_calculation(double x, double y,double z)
{
    return (z + 2 * pow(y, 2)) / (2.72 * (x - y)) + sqrt((3.14 * x));
}

double bal_baphort(double speed)
{
    if (speed < 0.3)
    {
        return 0;
    }
    if (speed <= 1.5)
    {
        return 1;
    }
    if (speed <= 3.4)
    {
         return 2;
    }
    if (speed <= 5.4)
    {
        return 3;
    }
    if (speed <= 7.9)
    {
         return 4;
    }
    if (speed <= 10.7)
    {
         return 5;
    }
    if (speed <= 13.8)
    {
         return 6;
    }
    if (speed <= 17.1)
    {
         return 7;
    }
    if (speed <= 20.7)
    {
         return 8;
    }
    if (speed <= 24.4)
    {
        return 9;
    }
    if (speed <= 28.4)
    {
        return 10;
    }
    if (speed <= 32.6)
    {
         return 11;
    }
    if (speed >= 32.7)
    {
         return 12;
    }
    return 0;
}

double temperature(double celciya)
{
    return celciya * 1.8 + 32;
}

int bits_number(int number)
{
    bitset<32> b_number{number};
    if(b_number[14] == 1){
        return b_number.count();
    }
        return 32 - b_number.count();
}



void avtor_inf_and_random_num()
{
    srand(time(0));
    ofstream avt_inf;
    avt_inf.open("C:\\Users\\Andrey\\Desktop\\BMTP\\Hordenko-Andrii-KB-21\\lab10\\prj\\output.txt");

    if (avt_inf.is_open())
    {
        avt_inf << "---------------------------------" << endl
                << "Розробник модуля: Горденко Андрій" << endl
                << "ЦНТУ, Кропивницький, Україна"      << endl
                << "2022"                              << endl
                << "---------------------------------" << endl << endl;
        avt_inf << "Рандомне число: " << rand() << endl;

    }
    avt_inf.close();
}

void date()
{
    SYSTEMTIME st;
    GetSystemTime(&st);

    ofstream date;
    date.open("C:\\Users\\Andrey\\Desktop\\BMTP\\Hordenko-Andrii-KB-21\\lab10\\prj\\intput.txt" , ios::app);
    if (date.is_open())
    {
        date << endl << "Дата дозапису інформації: " << "0" << st.wDay << "." << "0" << st.wMonth << "." << st.wYear << endl;
    }
}

void calcul()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int b = 0;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
    cout << "Enter b: ";
    cin >> b;

    ofstream text;
    text.open("C:\\Users\\Andrey\\Desktop\\BMTP\\Hordenko-Andrii-KB-21\\lab10\\prj\\output.txt" , ios::app);
    if (text.is_open())
    {
        text << endl << "Результат виконання функії: " << s_calculation(x, y, z) << endl
             << "Число " << b << " у двійковому коді: ";


        for (int i = sizeof(b)*8-1; i>=0; --i)
        {
            text << (int)((b>>i)&1);
        }
    }
    text.close();

}
void prov_text()
{
    int i = 0;
    string line[4];
    ifstream in("C:\\Users\\Andrey\\Desktop\\BMTP\\Hordenko-Andrii-KB-21\\lab10\\prj\\intput.txt");
    if (in.is_open())
    {
        while (getline(in, line[i]))
        {
            i++;
        }
    }
    string prov_punkt[5];
    prov_punkt[0] = "Як парость виноградної лози, плекайте мову.";
    prov_punkt[1] = "Пильно й ненаситно політь бур'ян.";
    prov_punkt[2] = "Чистіша від сльзи вона хай буде.";
    prov_punkt[3] = "Вірно й слухняно нехай вона щоразу слудить вам,";
    prov_punkt[4] = "Хоч і живе своїм живим життям.";

    bool flag = true;
    for (int i = 0; i < 5; i++)
    {
        if(line[i] != prov_punkt[i])
        {
            flag = false;
        }
    }

    ofstream avt_inf1;
    avt_inf1.open("C:\\Users\\Andrey\\Desktop\\BMTP\\Hordenko-Andrii-KB-21\\lab10\\prj\\output.txt", ios::app);
    if(flag == true)
    {
        if (avt_inf1.is_open())
        {
            avt_inf1 << "Помилок немає" << endl;
        }
    }
    else{
        if(avt_inf1.is_open())
        {
            avt_inf1 << "Помилки є" << endl;
        }
    }
}











