
/// suma cyfr liczby ca�kowitej

/// autor:Ekaterina Shabanova

/// Data: 2020-01-07



#include <iostream>



using namespace std;



int main()

{

    int number, r;

    int sum = 0;

    cin >> number;



    while(number>0)

    {

        r = number % 10;

        sum += r;

        number /= 10;

    }

    cout << sum;

    return 0;



}
