

void array_reverse(unsigned int array[], int length) {

    for (int i = 0; i < length / 2; ++i) {
        int temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;

    }

}

int foo(int *bar, int **baz) {
    *bar = 5;
    *(bar + 1) = 6;
    *baz = bar + 2;
    return *((*baz) + 1);
}

//Returns 1 if the System is Big Endian and 0 if it is little endian
int endian() {


    int x = 1;
    char *y = (char *) &x;
    if (*y) {
        return 1;
    } else {
        return 0;
    }


}


void map(int (*f)(int), int array[], int length) {
    for (int i = 0; i < length; ++i) {
        array[i] = f(array[i]);
    }

}
int pow2(int a) {
    return a*a;
}

int comp(int a) {
    if (a <= 0) return 0;
    else return 1;
}

int main() {
//   int a= endian();
//   printf("%d",a);

//    unsigned int x[] = {1, 2, 3, 4, 5};
//    array_reverse(x, 5);
//    for (int i = 0; i < 5; ++i) {
//        printf("%d ", x[i]);
//    }

//    int arr[4] = {1, 2, 3, 4};
//    int *ptr;
//    arr[0] = foo(&(arr[0]), &ptr);
//    printf("%d %d %d %d %d\n",
//           arr[0], arr[1], arr[2], arr[3], *ptr);


//    int a[4] = {-1, 3, -27};
//    map(pow2,a,3);
//    for (int i = 0; i < 3; ++i) {
//        printf("%d\n", a[i]);
//    }


    return 0;
}