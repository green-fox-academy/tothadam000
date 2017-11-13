#include <iostream>

using namespace std;

// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{
    int avg_code = 6;
    int semester = 17;
    int days_of_weekends = semester * 2;
    int work_hours_weekly = 52;
    double codehours_in_semester = ((semester * 7)- days_of_weekends) * avg_code;


    cout << codehours_in_semester << " hours spent with coding in a semester an attendee." << endl;
    cout << (codehours_in_semester / (work_hours_weekly * semester)) *100 << "% the coding hours in the semester";

    return 0;
}
