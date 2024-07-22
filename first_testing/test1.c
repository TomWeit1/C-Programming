#include <stdio.h>
#include <malloc.h>
#define PRINT(var) printf("The value of %s is %d\n", #var, (var))

struct point_rec{
    int x;
    int y;
};

typedef struct point{
    int x;
    int y;
}point;

void first_test(){
    // understand structs and typedef
    struct point_rec point1 = {0,0};
    point1.x = 3;
    point1.y = 2;

    point point2;
    point2.x = 3;
    printf("point x cord: ");
    printf("%d\n", point2.x);
    PRINT(point2.x);

    // pointer to string
    char * p = "hello";
    printf("string 2nd char: ");
    printf("%c\n", *(p+1));
    
    // sizeof function for int
    printf("size of int: ");
    printf("%d\n", sizeof(int));

    // create arr with dynamic size
    int * arr = NULL;
    int result;
    printf("Enter an integer: ");
    scanf("%d", &result); // user input -> result
    printf("arr len: ");
    printf("%d\n", result); // print user input
    arr = (int *) malloc(result * sizeof(int));
    arr[4] = 1;
    printf("arr[4] = ");
    printf("%d\n", arr[4]); //check arr
    free(arr);
};


int inc(int num){
    return num + 1;
};
int sub(int num){
    return num - 1;
};
int triple(int num){
    return 3 * num;
}
typedef struct arr_operation{
    int (* p)(int num);
}arr_op;

void do_operation_on_arr(int arr[], int len, arr_op op){
    for(int i = 0; i < len; i++){
        arr[i] = (* op.p)(arr[i]);
        printf("%d\n", arr[i]);
    };
};

arr_op return_op(int i){
    arr_op arr[] = {inc, sub, triple};
    return arr[i];
}

void test2(){
    int arr[] = {1,2,3,4,5,6};
    do_operation_on_arr(arr, sizeof(arr) / sizeof(int),return_op(2));
}


int main(){
    //first_test();
    //test2();
    return 0;
}