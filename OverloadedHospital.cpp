/* Write a program that computes and displays the charges for a patient’s hospital stay. */
#include <iostream>   
#include <iomanip>    
#include <fstream>    

using namespace std; 


float hospitalBill(unsigned short, float, float, float);
float hospitalBill(float, float);                       

int main(int argc, char** argv) {
    ofstream outFile("HospitalReport.txt");
    string patient; 
    short days;   
    float rate, meds, services, total = 0;      

    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
    cout << "        ---------------------------------------------------------\n";
    cout << "                    - Welcome to Bay View Hospital -\n";
    cout << "        ---------------------------------------------------------\n\n";
    
    cout << "Please read through the following prompts to determine patients info:\n";
    cout << "Was the patient an in-patient or an outpatient?\n\n";
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
    
    do {
        cout << "Have you been admitted as an in-patient or an outpatient? ";
        cin >> patient; cin.ignore();
    } while(patient != "in-patient" && patient != "outpatient");

    outFile  << showpoint << setprecision(2) << fixed;
    
    if (patient == "in-patient") { 
        do {
            cout << "How many days have you spent in the hospital? ";
            cin >> days; cin.ignore();
        } while(days < 0);
        
        do {
            cout << "What is the daily rate? $";
            cin >> rate; cin.ignore();
        } while(rate < 0);
        
        do {
            cout << "Hospital medication charges? $";
            cin >> meds; cin.ignore();
        } while(meds < 0);
        
        do {
            cout << "Charges for hospital services (lab tests, etc.)? $";
            cin >> services; cin.ignore();
        } while(services < 0);
        
        outFile << "Days spent in hospital: " << days << endl;
        outFile << "Daily rate: $" << rate << endl;
        total += hospitalBill(days, rate, meds, services);
    } else if (patient == "outpatient") { 
        do {
            cout << "Hospital medication charges? $";
            cin >> meds; cin.ignore();
        } while(meds < 0);
        
        do {
            cout << "Charges for hospital services (lab tests, etc.)? $";
            cin >> services; cin.ignore();
        } while(services < 0);
        
        total += hospitalBill(services, meds);
    }

    outFile << "Medication charges: $" << meds << endl;
    outFile << "Services: $" << services << endl;
    outFile << "Total: $" << total;
    
    cout << "The total cost of your hospital stay is: $" << total << ".";
    
    outFile.close(); outFile.clear(); 
    
    
    return 0;
}

float hospitalBill(unsigned short days, float rate, float meds, float services) {
    return (days * rate) + meds + services;
}

float hospitalBill(float services, float meds) {
    return meds + services;
}
