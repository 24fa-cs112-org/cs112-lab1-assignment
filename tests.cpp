#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.h"

TEST_CASE("step1") {
    cout << "\nStep 1. ---------------------------------\n" << endl;
    grade();
}

TEST_CASE("step2and3") {
    SECTION("step2") {
        cout << "\nStep 2. ---------------------------------\n" << endl;
        insurance();
    };
    SECTION("step3") {
        cout << "\nStep 3. ---------------------------------\n" << endl;
        insurance();
    }
}

TEST_CASE("step4") {
    cout << "\nStep 4. ---------------------------------\n" << endl;
    vowel();
}

TEST_CASE("step5") {
    cout << "\nStep 5. ---------------------------------\n" << endl;
    sevens();
}

TEST_CASE("step6") {
    cout << "\nStep 6. ---------------------------------\n" << endl;
    sum();
}

TEST_CASE("step7") {
    cout << "\nStep 7. ---------------------------------\n" << endl;
    char letter;
    cout << "Enter a single lowercase letter: ";
    cin >> letter;
    // cout << isvowel(letter);
}

TEST_CASE("step8") {
    cout << "\nStep 8. ---------------------------------\n" << endl;
    // string plan = getPlan();
    // int months = getMonths();
    // int cost = computeCost(plan, months);
    // cout << "Cost of the plan = $" << cost << "." << endl;
}
