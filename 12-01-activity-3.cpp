#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class TuitionCoupon {
private:
    int grade;
    int classroom;
    int month;
    float amount;

public:
    TuitionCoupon(int g, int c, int m, float a) {
        grade = g;
        classroom = c;
        month = m;
        amount = a;
    }

    void displayCoupon() const {
    	cout << setw(3) <<"Grade:" <<grade << setw(12) << "Classroom:" <<classroom << setw(8) << "Month:" << month << setw(10) <<"Amount:"<< amount << endl;
        //cout << "Grade: " << grade << ", Classroom: " << classroom << ", Month: " << month << ", Amount Due: P" << amount << endl;
        cout << "-------------------------------------------------------" <<endl;
    }
};

int main() {
    const int NUM_GRADES = 8;
    const int NUM_CLASSROOMS = 3;
    const int NUM_MONTHS = 9;

    vector<TuitionCoupon> coupons;

    for (int grade = 0; grade < NUM_GRADES; ++grade) {
        for (int classroom = 0; classroom < NUM_CLASSROOMS; ++classroom) {
            for (int month = 0; month < NUM_MONTHS; ++month) {
                float tuition;
                if (grade == 0) {
                    tuition = 80.0f;
                } else {
                    tuition = 60.0f * (grade + 1);
                }

                TuitionCoupon coupon(grade + 1, classroom + 1, month + 1, tuition);
                coupons.push_back(coupon);
            }
        }
    }

    for (const TuitionCoupon& coupon : coupons) {
        coupon.displayCoupon();
    }

    return 0;
}
