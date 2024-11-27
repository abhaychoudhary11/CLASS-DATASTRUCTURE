#include <iostream>

using namespace std;

int main() 
{
    int size; 
    int arr[100]; 

    cout << "ENTER THE SIZE OF ARRAY (MAX 100) --> "; //PRINT 
    cin >> size; //INPUT THE SIZE OF ARRAY

    for(int i = 0; i < size; i++) //LOOP FOR ADDING NUMBERS IN ARRAY
    {
        cout << "ENTER POSITIVE VALUE " << (i + 1) << "--> "; 
        cin >> arr[i]; //INPUT OF ELEMENT OF ARRAY
        while (arr[i] <= 0) //CHECK VALUE IS POSITIVE 
        {
            cout << "PLEASE ENTER POSITIVE NUMBER--> ";
            cin >> arr[i];
        }
    }

    cout << "INITIAL ARRAY-->: "; //PRINT INITAL ARRAY
    for(int i = 0; i < size; i++) //LOOP FOR PRINTING EACH ELEMENT OF ARRAY
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int ite = 1; 
    while (true) //INFINITE LOOP FOR PROCESS ARRAY
    {
        int maxVal = -1;
        int minVal = 101; 

        for (int i = 0; i < size; i++) 
        {
            if (arr[i] > maxVal) //CHECK CURRENT ELEMENT IS GREATER THAN MAXVAL
            {
                maxVal = arr[i]; //UPDATE IT
            }
            if (arr[i] > 0 && arr[i] < minVal) //CHECK CURRENT ELEMENT IS POSITIVE AND LESS THAN MINVAL 
            {
                minVal = arr[i];
            }
        }

        if (maxVal == 0) //MAX VALUE IS ZERO THAN EXIT LOOP
        {
            break;
        }

        for (int i = 0; i < size; i++) //LOOP FOR UPDATE ARRAY REPLACING MAXVAL WITH MAXVAL % MINVAL
        {
            if (arr[i] == maxVal) 
            {
                arr[i] = maxVal % minVal;
            }
        }

        cout << "CURRENT ARRAY AFTER ite "<<ite<< " -->: "; //SHOW CURRENT ITERATION 
        for(int i = 0; i < size; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        ite++; //INCREAMENT IN ITERATION
    }

    cout << "------ ALL ELEMENTS ARE NOW ZERO ------" << endl;

    return 0;
}