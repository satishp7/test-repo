#include <stdio.h>

void test_func(int a, int b) {
    int ans = a + b;
    printf("\n Answer:%d",ans);
}
int main() {
    printf("\n Hello World");
    for(int i = 0; i < 500; i++) {
        printf("\n test loop:%d",i);
    }
    test_func(23,40);
    printf("\n End of application");
    return 0;
}
