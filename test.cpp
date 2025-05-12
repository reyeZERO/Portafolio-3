#include "rules.h"
#include <cassert>
#include <iostream>

void testRules() {
    Rules rules;
    // Simulate standard rules (B3/S23)
    rules.inputRules = []() {};
    assert(!rules.shouldBirth(2));
    assert(rules.shouldBirth(3));
    assert(!rules.shouldSurvive(1));
    assert(rules.shouldSurvive(2));
    assert(rules.shouldSurvive(3));
    std::cout << "Basic rules test passed.\n";
}

int main() {
    testRules();
    return 0;
}
