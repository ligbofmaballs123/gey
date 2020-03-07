/* C++ Lab #1 Part  #1
* S.Magee
* N/A
* Molecular Weight and Avg Atomic Mass
Finds Molecular Mass and Avg Atomic Mass of Acid*/
// Access Libraries and Namespace

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

int main() {
    // Create Variables for Data File and User input file
    string BabyNames[102][3];
    string UserFileInput = "BabyNames.txt";
    string CorrectFileName = "BabyNames.txt";
    cout << "Hello, welcome to my program!" << endl;
    cout << "Please input the correct file name:" << endl;
    //cin >> UserFileInput;

    ifstream NameData;
    NameData.open("/Users/seanmagee/CLionProjects/Magee_CP2/BabyNames.txt");

    //if (UserFileInput.compare(CorrectFileName)==0)
    if (!NameData) {
        cout << "Please Re-Enter a new file name."<< endl;
        system("pause");
        exit(0);
    }
    else {
        for (int i = 0; i <= 101; i++) {
            for (int j = 0; j <= 2; j++) {
                NameData >> BabyNames[i][j];
            }
            for (int i = 0; i <= 101; i++) {
                for (int j = 0; j <= 2; j++) {
                    cout << BabyNames[i][j];

                }

            }

            string GenderInput = "";
            string M = "Males";
            string W = "Females";
            int YearInput;

            cout << "Would you like to view the data for Males or Females?:" << endl;
            cin >> GenderInput;
            if ((GenderInput.compare(M) == 0)) {
                cout << "Please enter a year from 1917 to 2018:" << endl;
                cin >> YearInput;
                int Row = abs(1917 - YearInput);

                string MaleName = BabyNames[Row][3];
                cout << "The most popular Male Name in" " " << YearInput << " ""was" << MaleName
                     << " ""." "It appeared X times."
                     << endl;
                break;
            } else if ((GenderInput.compare(W) == 0)) {
                cout << "Please enter a year from 1917 to 2018:" << endl;
                cin >> YearInput;
                int Row = abs(1917 - YearInput);
                string FemaleName = BabyNames[Row][2];
                cout << "The most popular Female Name in" " " << YearInput << " " "was" << FemaleName
                     << " ""." "It appeared X times."
                     << endl;
                break;

            }
        }
    }
    NameData.close();
    return (0);
}