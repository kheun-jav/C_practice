#include <stdio.h>
#include <string.h>

typedef struct {
    int n;
} Node;

int main(void) {
    Node arr[3] = {{10}, {20}, {30}};
    Node *p = arr;
    Node **pp = &p;
    (*pp)[1] = (*pp)[2];

    printf("%d\n", arr[1].n);
    return 0;
}
