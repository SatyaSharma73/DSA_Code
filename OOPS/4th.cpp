#include <iostream>

using namespace std;

class tour
{
    string tcode;
    int adults, kids, km;
    float totalfare;

public:
    tour() //Default Constructor
    {
        tcode = "NULL";
        adults = 0;
        kids = 0;
        km = 0;
        totalfare = 0;
        }
    void AssignFare(int km, int adults, int kids)
    {
        for (int i = 0; i < adults; i++)
        {
            totalfare = (km >= 1000) ? totalfare += 500 : (km < 1000 && km >= 500) ? totalfare += 300
                                                                                   : totalfare += 200;
        }
        for (int j = 0; j < kids; j++)
        {
            totalfare = (km >= 1000) ? totalfare += 500 / 2 : (km < 1000 && km >= 500) ? totalfare += 300 / 2
                                                                                       : totalfare += 200 / 2;
        }
    }
    void EnterTour()
    {
        cout << "Enter the Tcode : " << endl;
        cin >> tcode;
        cout << "Enter No. of adult , No. of kids : ";
        cin >> adults >> kids;
        cout << "Enter Killometers : ";
        cin >> km;
        AssignFare(km, adults, kids);
    }
    void showTour()
    {
        cout << "Tcode : " << tcode << endl;
        cout << "No. of adult , No. of kids : " << adults << ' ' << kids << endl;
        cout << "Killometers : " << km << endl;
        cout << "Total Fare : " << totalfare;
    }
};

int main()
{
    tour t1;
    t1.EnterTour();
    t1.showTour();

    return 0;
}