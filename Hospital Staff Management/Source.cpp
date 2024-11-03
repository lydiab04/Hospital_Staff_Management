#include <iostream>

using namespace std;
int main() {
    system("color e");
    int choice, shift, count = 0, subchoice, i;
    int staff_age[50], staff_year[50], staff_phone[50];
    string staff_name[50], staff_sex[50], staff_address[50], staff_occupation[50];
    char ans;
    string id;
    double DRsalary = 30000, DRh = 150;
    double NUsalary = 15000, NUh = 50;
    double ANsalary = 18500, ANh = 100;
    double LABsalary = 10000, LAh = 50;
    double RADsalary = 15800, RAh = 50;
    double JANsalary = 5000, JAh = 30;
    double SECsalary = 5500, SEh = 35;
    double RECsalary = 4500, REh = 40;
    double renumeration;
    do {
        cout << "\t====================4 KILO NATIONAL HOSPITAL====================" << endl;
        cout << "\t==============HUMAN RESOURCES AND PERSONNEL MANAGEMENT PORTAL=================" << endl;
    B: cout << "Press 1 for Non-Medical Staffs' Records and Information\n"
        << "Press 2 for Physicians' (Medical-Staff) Records and Information\n"
        << "Press 3 for Salary and Remuneration\n"
        << "Press 4 to exit\n";
    cin >> choice;
    switch (choice)
    {
    case 1: {
        system("color a");
    A:cout << "Press: \n"
        << "1 to add a new record\n"
        << "2 to display the available non-medical staff record\n"
        << "3 to edit the available non-medical staff record\n"
        << "4 to delete the available non-medical staff record\n"
        << "5 to search a non-medical staff member\n"
        << "6 to go to the main menu\n";
    cin >> subchoice;
    if (subchoice == 1) {
        for (int i = 0; i < 50; i++) {
            char ans;
            cout << "Name: (Press * When you are done)\n";
            cin.ignore();
            getline(cin, staff_name[i], '*');
            cout << "Sex:\n";
            cin >> staff_sex[i];
            cout << "Age:\n";
            cin >> staff_age[i];
            cout << "Occupation: (Press * When you are done)\n";
            getline(cin, staff_occupation[i], '*');
            cout << "Phone:\n";
            cin >> staff_phone[i];
            cout << "Address: (Press * When you are done)\n";
            getline(cin, staff_address[i], '*');
            cout << "Year of joining\n";
            cin >> staff_year[i];
            cout << "Index of staff member is: " << i << endl;
            count = count + 1;
            cout << "The record has been saved successfully.\nDo you want to add another record? (Press y to add another record, press any other button to go back to the menu)\n";
            cin >> ans;
            if (ans == 'y' || ans == 'Y')
                continue;
            else
                goto A;
        }
    }
    else if (subchoice == 2) {
        cout << "There are " << count << " staff member(s) in this hospital\n ";
        for (int j = 0; j < count; j++) {
            cout << "Index:\t" << j << endl;
            cout << "Name:\t" << staff_name[j] << endl;
            cout << "Sex:\t" << staff_sex[j] << endl;
            cout << "Age:\t" << staff_age[j] << endl;
            cout << "Phone:\t" << staff_phone[j] << endl;
            cout << "Occupation:\t" << staff_occupation[j] << endl;
            cout << "Year of joining:\t" << staff_year[j] << endl;
            cout << "Address:\t" << staff_address[j] << endl;


        }
        goto A;
    }
    else if (subchoice == 3) {
        cout << "Enter staff index\n";
        cin >> i;
        if (i >= 0 && i < count) {


            cout << "Name: (Press * When you are done)\n";
            cin.ignore();
            getline(cin, staff_name[i], '*');
            cout << "Sex:\n";
            cin >> staff_sex[i];
            cout << "Age:\n";
            cin >> staff_age[i];
            cout << "Occupation: (Press * When you are done)\n";
            getline(cin, staff_occupation[i], '*');
            cout << "Phone:\n";
            cin >> staff_phone[i];
            cout << "Address: (Press * When you are done)\n";
            getline(cin, staff_address[i], '*');
            cout << "Year of joining\n";
            cin >> staff_year[i];
            cout << "Index of staff member is " << i;
            count = count + 1;
            goto A;

        }

        else {
            cout << "Invalid index, try again.\n";

        }

    }
    else if (subchoice == 4) {
        cout << "Enter staff index: \n";
        cin >> i;
        if (i >= 0 && i < count) {
            for (i; i < count - 1; i++) {
                staff_name[i] = staff_name[i + 1];
                staff_sex[i] = staff_sex[i + 1];
                staff_age[i] = staff_age[i + 1];
                staff_occupation[i] = staff_occupation[i + 1];
                staff_phone[i] = staff_phone[i + 1];
                staff_address[i] = staff_address[i + 1];
                staff_year[i] = staff_year[i + 1];
            }
            count--;
            cout << "Record deleted\n";
            goto A;
        }
        else {
            cout << "Invalid index\n";

        }
    }

    else if (subchoice == 5) {
        string searchKey;
        cout << "Enter the name of the staff member: (Press * When you are done)\n";
        cin.ignore();
        getline(cin, searchKey, '*');

        int found = 0;
        for (int i = 0; i < count; i++) {
            if (searchKey == staff_name[i]) {
                cout << "Record found\n";
                cout << "Index: " << i << endl;
                cout << "Name: " << staff_name[i] << endl;
                cout << "Sex: " << staff_sex[i] << endl;
                cout << "Age: " << staff_age[i] << endl;
                cout << "Occupation: " << staff_occupation[i] << endl;
                cout << "Phone: " << staff_phone[i] << endl;
                cout << "Address: " << staff_address[i] << endl;
                cout << "Year of joining: " << staff_year[i] << endl;
                found = 1;
                break;

            }
            goto A;
        }

        if (found == 0) {
            cout << "Record not found\n";

        }
    }

    else if (subchoice == 6) {
        goto B;
    }
    else {
        cout << "Wrong input\n";
    }

    break;
    }
    case 2: {
        system("color 3");
    F: cout << "Press: \n"
        << "1 to add a new record\n"
        << "2 to display the available medical staff record\n"
        << "3 to edit the available medical staff record\n"
        << "4 to delete the available medical staff record\n"
        << "5 to search a medical staff member\n"
        << "6 to go to the main menu\n";
    cin >> subchoice;
    if (subchoice == 1) {
        for (int i = 0; i < 50; i++) {
            char ans;
            cout << "Name: (Press * When you are done)\n";
            cin.ignore();
            getline(cin, staff_name[i], '*');
            cout << "Sex:\n";
            cin >> staff_sex[i];
            cout << "Age:\n";
            cin >> staff_age[i];
            cout << "Occupation: (Press * When you are done)\n";
            getline(cin, staff_occupation[i], '*');
            cout << "Phone:\n";
            cin >> staff_phone[i];
            cout << "Salary\n";
            cout << "Address: (Press * When you are done)\n";
            getline(cin, staff_address[i], '*');
            cout << "Year of joining\n";
            cin >> staff_year[i];
            cout << "Index of staff member is: " << i << endl;
            count = count + 1;
            cout << "The record has been saved successfully.\nDo you want to add another record? (Press y to add another record, press any other button to go back to the menu)\n";
            cin >> ans;
            if (ans == 'y' || ans == 'Y')
                continue;
            else
                goto F;
            break;
        }

    }
    else if (subchoice == 2) {
        cout << "There are " << count << " staff member(s) in this hospital\n ";
        for (int j = 0; j < count; j++) {
            cout << "Index:\t" << j << endl;
            cout << "Name:\t" << staff_name[j] << endl;
            cout << "Sex:\t" << staff_sex[j] << endl;
            cout << "Age:\t" << staff_age[j] << endl;
            cout << "Phone:\t" << staff_phone[j] << endl;
            cout << "Occupation:\t" << staff_occupation[j] << endl;
            cout << "Year of joining:\t" << staff_year[j] << endl;
            cout << "Address:\t" << staff_address[j] << endl;


        }
        goto F;
    }
    else if (subchoice == 3) {
        cout << "Enter staff index\n";
        cin >> i;
        if (i >= 0 && i < count) {


            cout << "Name: (Press * When you are done)\n";
            cin.ignore();
            getline(cin, staff_name[i], '*');
            cout << "Sex:\n";
            cin >> staff_sex[i];
            cout << "Age:\n";
            cin >> staff_age[i];
            cout << "Occupation: (Press * When you are done)\n";
            getline(cin, staff_occupation[i], '*');
            cout << "Phone:\n";
            cin >> staff_phone[i];
            cout << "Address: (Press * When you are done)\n";
            getline(cin, staff_address[i], '*');
            cout << "Year of joining\n";
            cin >> staff_year[i];
            cout << "Index of staff member is " << i;
            count = count + 1;
            goto F;

        }

        else {
            cout << "Invalid index, try again.\n";

        }

    }
    else if (subchoice == 4) {
        cout << "Enter staff index: \n";
        cin >> i;
        if (i >= 0 && i < count) {
            for (i; i < count - 1; i++) {
                staff_name[i] = staff_name[i + 1];
                staff_sex[i] = staff_sex[i + 1];
                staff_age[i] = staff_age[i + 1];
                staff_occupation[i] = staff_occupation[i + 1];
                staff_phone[i] = staff_phone[i + 1];
                staff_address[i] = staff_address[i + 1];
                staff_year[i] = staff_year[i + 1];
            }
            count--;
            cout << "Record deleted\n";
            goto F;
        }
        else {
            cout << "Invalid index\n";

        }
    }

    else if (subchoice == 5) {
        string searchKey;
        cout << "Enter the name of the staff member: (Press * When you are done)\n";
        cin.ignore();
        getline(cin, searchKey, '*');

        int found = 0;
        for (int i = 0; i < count; i++) {
            if (searchKey == staff_name[i]) {
                cout << "Record found\n";
                cout << "Index: " << i << endl;
                cout << "Name: " << staff_name[i] << endl;
                cout << "Sex: " << staff_sex[i] << endl;
                cout << "Age: " << staff_age[i] << endl;
                cout << "Occupation: " << staff_occupation[i] << endl;
                cout << "Phone: " << staff_phone[i] << endl;
                cout << "Address: " << staff_address[i] << endl;
                cout << "Year of joining: " << staff_year[i] << endl;
                found = 1;
                break;

            }
            goto B;
        }

        if (found == 0) {
            cout << "Record not found\n";

        }
    }

    else if (subchoice == 6) {
        goto B;
    }
    else {
        cout << "Wrong input\n";
    }

    break;
    }

    case 3: {
        system("color e");
        cout << "Enter staff ID: ";
        cin >> id;

        int subchoice;
        int choice;
        double shift;
        double renumeration;

        while (true) {
            cout << "Choose area of profession below: \n"
                << "Press: \n"
                << "1 for Medical staff \n"
                << "2 for Non-medical staff \n"
                << "3 to go back to main menu\n";

            cin >> subchoice;

            if (subchoice == 1) {

                cout << "Which area do you specialize in? \n"
                    << "1 General family physician (MD) \n"
                    << "2 Nurse (all encompassing) \n"
                    << "3 Anesthesiologist \n"
                    << "4 Lab technician \n"
                    << "5 Radiologist \n";
                cin >> choice;

                if (choice == 1) {
                    cout << "How many hours of extra shift did you have per day? ";
                    cin >> shift;

                    renumeration = DRh * shift;
                    cout << "Your Net salary is: " << DRsalary << endl;
                    cout << "Your remuneration is: " << renumeration << endl;
                }
                else if (choice == 2) {
                    cout << "How many hours of extra shift did you have per day? ";
                    cin >> shift;

                    renumeration = NUh * shift;
                    cout << "Your Net salary is: " << NUsalary << endl;
                    cout << "Your remuneration is: " << renumeration << endl;
                }
                else if (choice == 3) {
                    cout << "How many hours of extra shift did you have per day? ";
                    cin >> shift;

                    renumeration = ANh * shift;
                    cout << "Your Net salary is: " << ANsalary << endl;
                    cout << "Your remuneration is: " << renumeration << endl;
                }
                else if (choice == 4) {
                    cout << "How many hours of extra shift did you have per day? ";
                    cin >> shift;

                    renumeration = LAh * shift;
                    cout << "Your Net salary is: " << LABsalary << endl;
                    cout << "Your remuneration is: " << renumeration << endl;
                }
                else if (choice == 5) {
                    cout << "How many hours of extra shift did you have per day? ";
                    cin >> shift;

                    renumeration = RAh * shift;
                    cout << "Your Net salary is: " << RADsalary << endl;
                    cout << "Your remuneration is: " << renumeration << endl;
                }
                else {
                    cout << "Wrong input\n";

                }
            }
            else if (subchoice == 2) {
                cout << "Which non-medical station do you work in? \n"
                    << "1 Janitor \n"
                    << "2 Security \n"
                    << "3 Reception \n";
                cin >> choice;

                if (choice == 1) {
                    cout << "How many hours of extra shift did you have per day? ";
                    cin >> shift;

                    renumeration = JAh * shift;
                    cout << "Your Net salary is: " << JANsalary << endl;
                    cout << "Your remuneration is: " << renumeration << endl;
                }
                else if (choice == 2) {
                    cout << "How many hours of extra shift did you have per day? ";
                    cin >> shift;

                    renumeration = SEh * shift;
                    cout << "Your Net salary is: " << SECsalary << endl;
                    cout << "Your remuneration is: " << renumeration << endl;
                }
                else if (choice == 3) {
                    cout << "How many hours of extra shift did you have per day? ";
                    cin >> shift;

                    renumeration = REh * shift;
                    cout << "Your Net salary is: " << RECsalary << endl;
                    cout << "Your remuneration is: " << renumeration << endl;
                }

                else
                    cout << "You have entered a wrong choice \n";
            }
            else if (subchoice == 3) {
                goto B;
            }




            break;
        }
    }
    case 4:
        system("color a");
        cout << "Thank you for your DILIGENT service\n";
        break;

    default:
        cout << "Wrong input, please try again\n";
    }

    } while (choice != 4);

    return 0;
}
