/*
You are searching for a department in a university and you’re asked to select a school from a choice of three schools namely:

>> School of Computer Science
>> School of Business
>> School of Engineering
Having selected a school you are again provided with a list of departments that fall under the department namely:

School of Computer Science
    Department of Informatics
    Department of Machine Learning
School of Business
    Department of Commerce
    Department of purchasing
School of Engineering
    Department of Mechanical Engineering
    Department of Mechatronics Engineering 
*/

#include <iostream>
using namespace std;

int main()
{
    int ch1, ch2;
    printf("1.School of Computer Science\n");
    printf("2.School of Business\n");
    printf("3.School of Engineering\n");
    printf("Select your School :: \n");
    scanf("%d", &ch1);

    switch (ch1)
    {
    case 1:
        printf("Available Departments\n");
        printf("1.Department of Informatics\n");
        printf("2.Department of Machine Learning\n");
        printf("Select your Department :: \n");
        scanf("%d", &ch2);

        switch (ch2)
        {
        case 1:
            cout << "Okay ..! School computer science and department Informatics selected" << endl;
            break;

        case 2:
            cout << "Okay ..! School computer science and department Machine Learning selected" << endl;
            break;

        default:
            cout << "Wrong choice ...!!" << endl;
        }
        break;

    case 2:
        printf("Available Departments\n");
        printf("1.Department of Commerce\n");
        printf("2.Department of purchasing\n");
        printf("Select your Department :: \n");
        scanf("%d", &ch2);

        switch (ch2)
        {
        case 1:
            cout << "Okay ..! School Business and department Commerce selected" << endl;
            break;

        case 2:
            cout << "Okay ..! School Business and department purchasing selected" << endl;
            break;

        default:
            cout << "Wrong choice ...!!" << endl;
        }
        break;

    case 3:
        printf("Available Departments\n");
        printf("1.Department of Mechanical Engineering\n");
        printf("2.Department of Mechatronics Engineering\n");
        printf("Select your Department :: \n");
        scanf("%d", &ch2);

        switch (ch2)
        {
        case 1:
            cout << "Okay ..! School Engineering and department Mechanical Engineering selected" << endl;
            break;

        case 2:
            cout << "Okay ..! School Engineering and department Mechatronics Engineering selected" << endl;
            break;

        default:
            cout << "Wrong choice ...!!" << endl;
        }
        break;

    default:
        cout << "Wrong choice ...!!" << endl;
    }

    return 0;
}
