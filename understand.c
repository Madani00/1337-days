#  Passing a Pointer to a Function

void modify_value(int *ptr) {
    *ptr = 10; // Modifies the value at the address ptr points to
}

void modify_pointer(int *ptr) {
    ptr = NULL; // Modifies the local copy of the pointer, does not affect the original pointer
}

int main() {
    int value = 5;
    int *p = &value;

    printf("Original value: %d\n", value); // Output: 5

    modify_value(p);
    printf("Modified value: %d\n", value); // Output: 10

    modify_pointer(p);
    if (p == NULL) {
        printf("Pointer is NULL\n");
    } else {
        printf("Pointer is not NULL\n"); // This will be printed
    }

    return 0;
}
