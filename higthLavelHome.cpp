#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    string home[] = {"SidorovA", "IvanovA", "PetrovA", "SidorovB", "IvanovB", "PetrovB", "SidorovC", "IvanovC", "PetrovC", "SidorovD"};
    int number = 0;
    int i = 0;
    while (i < 3)
    {
        cout << "Enter: ";
        cin >> number;
        if (number <= 0 || number > 10)
        {
            cout<<"Введен не корректный номер. Попробуйте еще раз.\n";
        }
        else{
            cout<<"-> "<<home[number-1]<<"\n";
            i++;
        }
    }
}