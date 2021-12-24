#include <iostream>
using namespace std;
float interest(int P, float R, int N)
{
    float SI;
    SI = P * R * N / 100.0;
    return SI;
}
int main()
{
    int p, n, i, nsi;
    float r, Z;
    cout << "No. of SI you want to calculate: " << endl;
    cin >> nsi;
    for (i = 1; i <= nsi; i++)
    {
        cout << "  Enter Info for Set" << i;
        cout << "\n---------------------------------------\n";
        cout << "Enter Principal Amount : ";
        cin >> p;
        cout << "Enter Interest-Rate : ";
        cin >> r;
        cout << "Enter Time Period : ";
        cin >> n;
        Z = interest(p, r, n);
        cout << "\nSimple-Interest for Set" << i << " : " << Z << endl;
        cout << "---------------------------------------\n";
    }
    return 0;
}