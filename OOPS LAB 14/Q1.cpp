// Wap to display the Divide by zero exception(Arithmetic Exception)
#include <iostream>
using namespace std;
float Division(float num, float den)
{
    if (den == 0)
    {
        throw runtime_error("Math error: Attempted to divide by Zero\n");
    }
    return (num / den);
}
int main()
{
    float numerator, denominator, result;
    numerator = 10;
    denominator = 0;
    try
    {
        result = Division(numerator, denominator);
        cout << "The quotient is " << result << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Exception occurred" << endl << e.what();
    }
}