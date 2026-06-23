#include <cassert>
#include <cstdio>
#include <vector>
#include <algorithm>

// A dead-simple test runner — no framework needed
int passed = 0, failed = 0;

#define TEST(name, expr) \
    if (expr) { passed++; } \
    else { failed++; printf("FAIL: %s\n", name); }

int main() {
    // Example: test that std::sort works as expected
    std::vector<int> v = {3, 1, 2};
    std::sort(v.begin(), v.end());
    TEST("sort ascending", v[0] == 1 && v[1] == 2 && v[2] == 3);

    // Add your own tests below...

    printf("%d passed, %d failed\n", passed, failed);
    return failed > 0 ? 1 : 0; // non-zero exit = CTest marks it as failed
}
