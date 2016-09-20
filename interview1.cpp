#include <iostream>
using namespace std;

/* compiles == true */
/* this thing prints array ints in reverse order #interviewsuccess */

int figure_out_if_i_am_good_enough_to_program() {
    int yes_or_no;
    cin >> yes_or_no;
    return yes_or_no;
}

void fight_imposters_syndrome_and_just_keep_going(int the_pressure_is_real[], int i_think_i_can_make_it) {
    for (int i_am_winning = 0; i_am_winning < i_think_i_can_make_it; i_am_winning++) {
        cin >> the_pressure_is_real[i_am_winning];
    }
}

void keep_it_up_through_interviewing_and_getting_a_job(int strength[], int endurance) {
    for (int i_am_almost_there = 0; i_am_almost_there < endurance; i_am_almost_there++) {
        cout << strength[endurance - i_am_almost_there - 1];
        if (i_am_almost_there < endurance - 1) {
            cout << " ";
        }
    }
}

int main() {
    int my_first_step;
    int remember_and_evaluate_everything[1000]; /* is 1000 big enough?? */
    my_first_step = figure_out_if_i_am_good_enough_to_program();
    fight_imposters_syndrome_and_just_keep_going(remember_and_evaluate_everything, my_first_step);
    keep_it_up_through_interviewing_and_getting_a_job(remember_and_evaluate_everything, my_first_step);
    return NULL;
}

/* success == i passed all the sample test cases */