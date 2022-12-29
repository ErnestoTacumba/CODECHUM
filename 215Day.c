// 1. One Dimensional Arrays Practice I
#include <stdio.h>

int main(void) {
    int nums[5] = {
        -2, 1, 1, 2, 3 };

    for(int i = 0; i < 5; i++) {
        if(nums[i] > 0) {
            int temp = nums[i];
            temp = temp * temp * temp;
            printf("%d\n", temp);
        }
        else if(nums[i] < 0 ) {
            int temp = nums[i];
            temp = temp * temp;
            printf("%d\n", temp);
        }
    }
    
    return 0;
}

// 2. One Dimensional Arrays Practice II
#include <stdio.h>

int main(void) {
    double nums[10] = {1.4, 1.2054, 2.2, 2.5,
        3.66, 3.0, 4.024, 4.00001, 5.5, 5.10};

    for(int i = 9; i >= 0; i--) {
        printf("%.2f\n", nums[i]);
    }
        
    return 0;
}

// 1. Multi Dimensional Arrays Practice l
#include <stdio.h>

int main(void) {
    int row, column, arr[999][999], boogeyman;
    
    printf("Enter # of rows: ");
    scanf("%d", &row);
    printf("Enter # of columns: ");
    scanf("%d", &column);
    
    printf("Elements:\n");
    for(int i = 0; i < row; i++) {
    for(int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the boogeyman's value: ");
    scanf("%d", &boogeyman);
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            if(boogeyman == arr[i][j]) {
                printf("BOOGEYMAN LOCATED AT ROW %d, COLUMN %d!", i+1, j+1);
            }
        }
    }
    return 0;
}

// 2. Multi Dimensional Arrays Practice Il
#include <stdio.h>

int main(void) {
    int row, column, arr[999][999], temp = 0;

    printf("Enter # of rows: ");
    scanf("%d", &row);
    printf("Enter # of columns: ");
    scanf("%d", &column);

    printf("Enter elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < row; i++) {
        temp = 0;
        for(int j = 0; j < column; j++) {
            temp += arr[i][j];
        }
        if(temp % 2 == 0) {
            printf("Even row: %d", i);
        }
    }
}

// 1. Array Traversal Practice I
#include <stdio.h>

int main(void) {
    int array[] = {1,2,3,4,5};
    
    for(int i = 0; i < 5; i++) {
        printf("%d", array[i]);
        if(i != 4) printf(",");
    }

    return 0;
}

// 2. Array Traversal Practice II
#include <stdio.h>

int main(void) {
    int size, arr[999];

    printf("Enter size: ");
    scanf("%d", &size);


    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i] <= 0) {
            break;
        }
    }
    
    printf("[");
    for(int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if(i != size-1) printf(",");
    }
    printf("]");
    return 0;
}

// 1. Searching an Array Practice I
#include <stdio.h>

int main(void) {
    int nums[100], even = 0, temp;

    for(int i = 0; i < 100; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &nums[i]);
        if(nums[i] == 0) {
            temp = i;
            break;
        }
    }

    for(int i = 0; i < temp; i++) {
        if(nums[i] % 2 == 0) {
            even++;
        }
    }
    printf("Even numbers: %d", even);
    
    return 0;
}

// 2. Searching an Array Practice II
#include <stdio.h>

int main(void) {
    char letter[100];
    int vowel, temp;

    for(int i = 0; i < 100; i++) {
        printf("Enter character %d: ", i+1);
        scanf(" %c", &letter[i]);
        if(letter[i] == '0') {
            temp = i;
            break;
        }
    }
    for(int i = 0; i < temp; i++) {
        if(letter[i] == 'a' || letter [i] == 'A' || letter[i] == 'e' || letter[i] == 'E'|| letter[i] == 'i' || letter[i] == 'I' || letter[i] == 'o' || letter[i] == 'O' || letter[i] == 'u' || letter[i] == 'U') {
            vowel++;
        }
    }
    printf("Vowel letters: %d", vowel);
    return 0;
}

// 1. Bubble Sort Practice l
#include <stdio.h>

int main(void) {
    int array[] = {161539, 317693, 236075, 228613, 574455, 959133, 664855, 58866, 183499, 391671, 639285, 18541, 945573, 381661, 671333, 83186, 290346, 533760, 362287, 712513, 286744, 965237, 965753, 696442, 75107, 410278, 975845, 645842, 602533, 969625, 852217, 40254, 944665, 464849, 905918, 677503, 275145, 165197, 278180, 628902};

    int size = sizeof(array)/sizeof(array[0]);
    
    for (int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

            }
        }
    }
    printf("[");
    for(int i = 0; i < size; ++i) {
        printf("%d", array[i]);
        if(i != size-1) {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}

// 2. Bubble Sort Practice ll
#include<stdio.h>

int main(void) {
    int array[100], size = 0;

    for(int i = 0; i < 100; ++i) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &array[i]);

        size += 1;
        if(array[i] == 0) {
            break;
        }
    }
    
    for(int i = 0; i < size - 1; ++i) {
        int swapped = 0;

        for(int j = 0; j < size - i - 1; ++j) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

                swapped = 1;
            }
        }
        if(swapped == 0) break;
    }

    printf("[");
    for(int i = 0; i < size; ++i) {
        if(array[i] != 0) {
            printf("%d", array[i]);
            if(i != size - 1) {
                printf(", ");
            }
        }
    }
    printf("]");

    return 0;
}

// 1. Selection Sort Practice l
#include <stdio.h>

void bubbleSort(int array[], int size) {
    for(int step = 0; step < size - 1; ++step) {
        int swapped = 0;

        for(int ctr = 0; ctr < size - step - 1; ++ctr) {
            if(array[ctr] > array[ctr + 1]) {
                int temp = array[ctr];
                array[ctr] = array[ctr + 1];
                array[ctr + 1] = temp;

                swapped = 1;
            }
        }
        if(swapped == 0) break;
    }
}
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selSort(int arr[], int size) {
    int min_idx;

    for (int ctr = 0; ctr < size  - ctr; ctr++) {
        min_idx = ctr;
        for (int ctr_index = ctr + 1; ctr_index < size; ctr_index++) {
            if (arr[ctr_index] < arr[min_idx]) {
                min_idx = ctr_index;
            }
        }

        swap(&arr[min_idx], &arr[ctr]);
        printf("\n");
    }
}

int main(void) {
    int array[] = {-167, 9824, -332, -3263, -6182, 6241, -8432, -8014, 4824, 6613, -6760, 1997, -980, 1290, -9172, 6599, 3230, 2846, 5616, -6216, 9025, -4909, 5678, -682, -2193};

    int size = sizeof(array)/sizeof(array[0]);

    selSort(array, size);
    bubbleSort(array, size);
    
    printf("[");
    for(int i = 0; i < size; ++i) {
        printf("%d", array[i]);
        if(i != size - 1) {
            printf(", ");
        }
    }
    printf("]");

    return 0;
}

// 2. Selection Sort Practice ll
#include<stdio.h>

int main(void) {
    int array[999], size, min_num;

    for(int i = 0; i < 100; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &array[i]);

        if(array[i] == 0) {
            size = i;
            break;
        }
    }

    for(int i = 0; i < size; i++) {
        min_num = i;
        for(int j = i + 1; j < size; j++) {
            if(array[j] < array[min_num]) min_num = j;
        }
        int temp = array[min_num];
        array[min_num] = array[i];
        array[i] = temp;
    }

    printf("[");
    for(int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if(i != size - 1) printf(", ");
    }
    printf("]");
}

// 1. Insertion Sort Practice l
#include <stdio.h>

void printArray(int arr[], int size) {
    int ctr_i;
    printf("[");
    for (ctr_i = 0; ctr_i < size; ctr_i++) {
        printf("%d", arr[ctr_i]);
        if(ctr_i != size - 1) printf(", ");
    }
    printf("]");
}

void insertionSort(int array[], int size) {
    int ctr_i, key, ctr_j;
    for(ctr_i = 1; ctr_i < size; ctr_i++) {
        key = array[ctr_i];
        ctr_j = ctr_i - 1;

        while(ctr_j >= 0 && array[ctr_j] > key) {
            array[ctr_j + 1] = array[ctr_j];
            ctr_j = ctr_j - 1;
        }

        array[ctr_j + 1] = key;
    }
}

int main(void) {
    int array[] = {-5487, 9436, 4082, 8896, 4687, -311, -6597, 2779, 9457, -6302};

    int size = sizeof(array)/sizeof(array[0]);

    insertionSort(array, size);
    printArray(array, size);
    
    return 0;
}

// 2. Insertion Sort Practice ll
#include<stdio.h>

void printArray(int arr[], int size) {
    int ctr_i;
    printf("[");
    for (ctr_i = 0; ctr_i < size; ctr_i++) {
        printf("%d", arr[ctr_i]);
        if(ctr_i != size - 1) printf(", ");
    }
    printf("]");
}
void insertionSort(int array[], int size) {
    int ctr_i, key, ctr_j;
    for(ctr_i = 1; ctr_i < size; ctr_i++) {
        key = array[ctr_i];
        ctr_j = ctr_i - 1;

        while(ctr_j >= 0 && array[ctr_j] > key) {
            array[ctr_j + 1] = array[ctr_j];
            ctr_j = ctr_j - 1;
        }

        array[ctr_j + 1] = key;
    }
}

int main(void) {
    int array[999], size;

    for(int i = 0; i < 100; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &array[i]);

        if(array[i] == 0) {
            size = i;
            break;
        }
    }

    insertionSort(array, size);
    printArray(array, size);
}

// 1. Functions With No Parameters and Return Values Practice ll
#include <stdio.h>


void increment() {
    for(int i = 1; i <= 15; i++) {
        if(i % 3 == 0) {
            printf("Cody!\n");
        }
        else {
            printf("%d\n", i);
        }
    }
}
int main()
{
    int i;

    increment();
    return 0;
}

// 2. Functions With No Parameters and Return Values Practice l
#include <stdio.h>
int called = 0;

void hello() {
    called++;
    printf("Call counter: %d\n", called);
}

int main(void) {
    int count;

    printf("Call count: ");
    scanf("%d", &count);
    for(int i = 0; i < count; i++) {
        hello();
    }
    
    return 0;
}

// 1. Functions With No Parameters But With Return Values Practice I
#include <stdio.h>

int askInput() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d", number);
    return number;
}

int main(void) {

    askInput();
    return 0;
}

// 2. Functions With No Parameters but With Return Values Practice II
#include<stdio.h>

void askInput() {
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    if(input % 2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }

}

int main(void) {
    askInput();

    return 0;
}

// 1. Functions With Parameters and No Return Values Practice l
#include <stdio.h>

void displayOutput(int temp, int sum) {
    if(temp == sum) printf("%d is a palindrome!", temp);
    else printf("%d is not a palindrome!", temp);
}

void palindrome(int number) {
    int reverse, sum = 0;
    
    int temp = number;
    while(number > 0) {
        reverse = number % 10;
        sum = (sum*10) + reverse;
        number /= 10;
    }
    displayOutput(temp, sum);
}

int main(void) {
    int num, array[999];

    printf("Enter a number: ");
    scanf("%d", &num);
    
    palindrome(num);
    
    return 0;
}

// 2. Functions With Parameters and No Return Values Practice ll
#include <stdio.h>
#include <string.h>

void palindrome(char string1[]) {
    int i, length;
    int flag = 0;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag == 1) {
        printf("%s is not a palindrome!", string1);
    }    
    else {
        printf("%s is a palindrome!", string1);
    }
}
int main(){
    char string1[20];

    printf("Enter a string: ");
    scanf("%s", string1);

    palindrome(string1);
    return 0;
}

// 1. Functions With Parameters and Return Values Practice l
#include <stdio.h>

int compare(char a, char b) {
    return (int) b;
}

int main(void) {    
    char a, b;
    
    printf("Enter first character: ");
    scanf("%c", &a);
    
    printf("Enter second character: ");
    scanf(" %c", &b);
    
    int result = compare(a,b); 
    
    printf("Result value = %d", result);
    
    return 0;
}

// 2. Functions With Parameters and Return Values Practice ll
#include<stdio.h>

void printArray(int array[]) {
    printf("Greatest: %d", array[2]);
}

void compare(int array[]) {
    for(int i = 0; i < 3 - 1; ++i) {
        int swapped = 0;
        
        for(int j = 0; j < 3 - i - 1; ++j) {
            if(array[i] >= array[i+1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                
                swapped = 1;
            }
        }
        if(swapped == 0) break;
    }
    printArray(array);
}

int main(void) {
    int array[999];

    for(int i = 0; i < 3; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    compare(array);

    return 0;
}

// 1. Recursive Functions Practice l
#include <stdio.h>

void fun(int n) {
    for(int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
}

int main(void) {
    fun(20);
    
    return 0;
}

// 2. Recursive Functions Practice ll
#include<stdio.h>

void factorial(int num) {
    int temp = 1;
    for(int i = 0; i < num; i++) {
        temp *= i+1;
    }
    printf("%d", temp);
}

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num);
}

// 1. Functions with 1D Arrays Practice I
#include <stdio.h>

// formal parameter
void vowelCount(char array[],int sizess) {
    int sum;
    for(int i = 0; i < sizess; i++) {
        if(array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u') {
            sum += 1;
        }
    }
    printf("Number of vowels: %d", sum);
}

int main(void) {
    char array[] = {
	'x','s', 'q', 'a','y', 'i','u', 'o','p', 'a','w', 'q'
    };

    int size = sizeof(array);

    vowelCount(array, size); // 
    
    return 0;
}

// 2. Functions with 1D Arrays Practice II
#include<stdio.h>

int maxArray(int array[], int size, int max) {
    for(int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] < array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

                swapped = 1;
            }
        }
    }
    max = array[0];
    return max; 
    
}

int main(void) {
    int size, chararr[999], max;

    printf("Enter size of array: ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &chararr[i]);
    }
    
    int returnee = maxArray(chararr, size, max);

    printf("Maximum element: %d", returnee);
    return 0;
}

// 1. Functions with 2D Arrays Practice I
#include <stdio.h>

int displayElements(int array[][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int array[3][3] = {
        {1, 6, 4},
        {7, 2, 8},
        {5, 9, 3}
    };

    displayElements(array);
    
    return 0;
}

// 2. Functions with 2D Arrays Practice ll
#include<stdio.h>

int displayElements(int arr[][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int arr[3][3];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("R%dC%d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    displayElements(arr);

    return 0;
}

// 1. Structures Practice l
#include <stdio.h>
#include <string.h>

struct Person {
    char firstName[999];
    char lastName[999];
    int age;
};

int main(void) {
    struct Person person1;

    strcpy(person1.firstName, "Cody");
    strcpy(person1.lastName, "Chum");
    person1.age = 3;

    printf("First name: %s\n", person1.firstName);
    printf("Last name: %s\n", person1.lastName);
    printf("Age: %d", person1.age);
    
    return 0;
}

// 2. Structures Practice ll
#include <stdio.h>
#include <math.h>

// Use M_PI for PI
struct Circle {
    float radius;
};

int main(void) {
    // Hey there, start typing your C code here...
    struct Circle circle1;

    printf("Enter radius: ");
    scanf("%f", &circle1.radius);
    printf("Circumference: %.2f\n", 3.14159 * (2 * circle1.radius));
    printf("Area: %.2f", 3.14159 * (pow(circle1.radius, 2)));
    return 0;
}

// 1. Passing Structures as Parameters Practice l
#include <stdio.h>

struct BankAccount {
    int accountNumber;
    float balance;
};

void displayDetails(struct BankAccount bankAccount) {
    printf("Account number %d has a balance of PHP %.2f.", bankAccount.accountNumber, bankAccount.balance);
}

int main(void) {
    struct BankAccount account1;

    printf("Enter account number: ");
    scanf("%d", &account1.accountNumber);
    printf("Enter balance: ");
    scanf("%f", &account1.balance);

    displayDetails(account1);
        
    return 0;
}

// 2. Passing Structures as Parameters Practice ll
#include<stdio.h>

struct Vehicle {
    char brand[999];
    int speed;
};

int timeCompute(float distance, float speed) {
    float time = distance/speed;
    time *= 60;
    
    return time;
}

int main(void) {
    struct Vehicle vehicle1;
    int distance;
    
    printf("Enter brand: ");
    scanf("%s", vehicle1.brand);
    printf("Enter speed: ");
    scanf("%d", &vehicle1.speed);
    printf("Enter distance: ");
    scanf("%d", &distance);
    int time = timeCompute(distance, vehicle1.speed);

    printf("It will take a %s vehicle %d minutes to reach a distance of %dkm.", vehicle1.brand, time, distance);

    return 0;
}

// 1. Pointer Arithmetic Practice l
#include <stdio.h>
#include <stdlib.h>


int transferLength(int *ptr) {
    int **totalLength = &ptr;

    return **totalLength;
}

int calculateLength(char *string) {
    int sum = 0;
    while(*string != '\0') {
        sum++;
        string++;
    }
    return sum;
}

int main(void) {
    int *arr;
    char *string = (char*) malloc(sizeof(char));
    printf("Enter a string: ");
    scanf("%[^\n]%*c", string);

    
    int length = calculateLength(string);

    arr = &length;

    printf("%d", *arr);
    return 0;
}

// 2. Pointer Arithmetic Practice ll
#include<stdio.h>

int main(void) {
    int size, arr[999];

    printf("Enter length: ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("[");
    for(int i = 0; i < size; i++) {
        printf("%d", ptr[i]);
        if(i != size - 1) printf(",");
    }
    printf("]");

    
    return 0;
}

// 1. Pass-by-reference in Functions Using Pointers Practice l
#include <stdio.h>

void modify(int *x) {
    if(*x % 2 == 0) {
        *x /= 2;
    }
    else{
        *x += 1;
        *x /= 2;
    }
}

int main(void) {
    int x;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    printf("Before: %d\n", x);

    modify(&x);
    printf("After: %d", x);
    
    return 0;
}

// 2. Pass-by-reference in Functions Using Pointers Practice ll
#include<stdio.h>
int arr[10] = {1,1,1,1,1,1,1,1,1,1};

// TODO: Create a function here
void terminate(int *x, int arr[]) {
    for(int i = 0; i <= 9; i++) {
        if(i != *x) {
            printf("%d ", arr[i]);
        }
        else {
            printf("%d ", arr[i]-1);
        }
    }
}

int main(void) {
    int x;
    
    printf("Enter a number(0-9): ");
    scanf("%d", &x);
    
    terminate(&x, arr);
    
    return 0;
}

// 1. Dynamic Memory Allocation Practice I
#include <stdio.h>
#include <stdlib.h>

void beforePrint(int *x, int *y) {
    printf("Before swap X: %d\n", *x);
    printf("Before swap Y: %d\n", *y);
}

void afterPrint(int *x, int *y) {
    printf("After swap X: %d\n", *x);
    printf("After swap Y: %d", *y);
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
	int* x = (int*) malloc(sizeof(int));
	int* y = (int*) malloc(sizeof(int));
	*x = 412;
	*y = 623;

    
    beforePrint(x, y);
    swap(x, y);
    afterPrint(x, y);
	return 0;
}

// 2. Dynamic Memory Allocation Practice II
#include<stdio.h>
#include<stdlib.h>

void printArray(int size1, int size2, int *totalArr) {
    printf("[");
    for(int i = 0; i < size1+size2; i++) {
        printf("%d", totalArr[i]);
        
        if(i != size1+size2-1) 
            printf(", ");
    }
    printf("]");
}

void secondArray(int size2, int *arr2) {
    for(int i = 0; i < size2; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr2[i]);
    }
}

void firstArray(int size1, int *arr1) {
    for(int i = 0 ; i < size1; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }
}

int main(void) {
    int size1, size2;
    
    printf("Enter size of array 1: ");
    scanf("%d", &size1);

    int *arr1 = (int*) calloc(size1, sizeof(int));
    firstArray(size1, arr1);

    printf("\n");

    printf("Enter size of array 2: ");
    scanf("%d", &size2);

    int *arr2 = (int*) calloc(size2, sizeof(int));
    secondArray(size2, arr2);
    
    int *totalArr = (int*) calloc(size1+size2, sizeof(int));
    
    for(int i = 0; i < size1; i++) totalArr[i] = arr1[i];
    for(int i = 0; i < size2; i++) totalArr[i+size1] = arr2[i];

    printf("\n");
    printArray(size1, size2, totalArr);

    free(totalArr);

    return 0;
}

// 1. Dynamic Arrays Practice I
#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int size;
    printf("Enter size N: ");
    scanf("%d", &size);

    int *arr = (int*) calloc(size, sizeof(int));

    for(int i = 0; i < size; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("[");
    for(int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if(i != size - 1) printf(", ");
    }
    printf("]");
    
    return 0;
}

// 2. Dynamic Arrays Practice II
#include <stdio.h>  
#include<stdlib.h>
int main()  
{  
    int size, ct = 0, n = 0, i = 1, j = 1, k = 0;  

    printf("Enter size N: ");
    scanf("%d", &size);

    int *N = (int*) calloc(size, sizeof(int));

    printf("[");
    while(n < size) {  
        j = 1;  
        ct = 0;  
        while(j <= i)  {  
            if(i % j == 0)  
            ct++;  
            j++;   
        }  
        
        if(ct == 2)  {  
            if(n != size - 1) {
                N[k] = i;
                printf("%d, ", N[k]);  
                j++;
                k++;
            }
            else {
                N[k] = i;
                printf("%d]", N[k]);
            }
            n++;
        }  
        i++;  
    }  
}

// 1. Nodes Practice l
#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

int main(void) {
    struct node node1;

    printf("Enter a number: ");
    scanf("%d", &node1.value);

    node1.next = &node1;

    printf("Node's value: %d", node1.next-> value);
    return 0;
}

// 2. Nodes Practice ll
#include<stdio.h>

struct node {
    int value;
    struct node *next;
};

int main(void) {
    struct node node1, node2;

    printf("Enter number 1: ");
    scanf("%d", &node1.value);
    printf("Enter number 2: ");
    scanf("%d", &node2.value);

    if(node1.value > node2.value) {
        node1.next = &node1;
        node2.next = &node2;
    
        printf("%d -> %d", node1.next->value, node2.next->value);
    }
    else {
        node1.next = &node2;
        node2.next = &node1;

        printf("%d -> %d", node1.next->value, node2.next->value);
    }
    return 0;
}

// 1. Linked List Practice l
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void printNodes(struct node *linkedList) {

    struct node *current = linkedList->next;
    int i = 0;
    
    while(current != NULL) {
        if(i < 4) {
            printf("%d -> ", current->value);
            i++;
        }
        else
            printf("%d", current->value);
        
        current = current->next;
    }
}

int main() {
    struct node *one = malloc(sizeof(struct node));
    struct node *two = malloc(sizeof(struct node));
    struct node *three = malloc(sizeof(struct node));
    struct node *four = malloc(sizeof(struct node));
    struct node *five = malloc(sizeof(struct node));

    struct node* linkedList = malloc(sizeof(struct node));
    
    printf("Enter number 1: ");
    scanf("%d", &one->value);
    linkedList->next = one;
    
    printf("Enter number 2: ");
    scanf("%d", &two->value);
    one->next = two;
    
    printf("Enter number 3: ");
    scanf("%d", &three->value);
    two->next = three;
    
    printf("Enter number 4: ");
    scanf("%d", &four->value);
    three->next = four;
        
    printf("Enter number 5: ");
    scanf("%d", &five->value);
    four->next = five;

    printNodes(linkedList);
    
    return 0;
}

// 2. Linked List Practice ll
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int value;
    struct Node *next;
    struct Node *prev;
};

void printNodes(struct Node *linkedList) {

    struct Node *current = linkedList->next;
    int i = 0;
    
    while(current != NULL) {
        if(i < 4) {
            printf("%d -> ", current->value);
            i++;
        }
        else {
            printf("%d\n", current->value);
        }
        
        current = current->next;
    }
    
    struct Node *rev = linkedList->prev;
    int j = 0;
    
    while(rev != NULL) {
        if(j < 4) {
            printf("%d <- ", rev->value);
            j++;
        }
        else
            printf("%d", rev->value);
            
        rev = rev->prev;
    }
}

int main() {
    struct Node *one = malloc(sizeof(struct Node));
    struct Node *two = malloc(sizeof(struct Node));
    struct Node *three = malloc(sizeof(struct Node));
    struct Node *four = malloc(sizeof(struct Node));
    struct Node *five = malloc(sizeof(struct Node));

    struct Node *linkedList = malloc(sizeof(struct Node));
    struct Node *prevv = malloc(sizeof(struct Node));

    printf("Enter number 1: ");
    scanf("%d", &one->value);
    linkedList->next = one;
    two->prev = one;
    
    printf("Enter number 2: ");
    scanf("%d", &two->value);
    one->next = two;
    three->prev = two;
    
    printf("Enter number 3: ");
    scanf("%d", &three->value);
    two->next = three;
    four->prev = three;
    
    printf("Enter number 4: ");
    scanf("%d", &four->value);
    three->next = four;
    five->prev = four;
        
    printf("Enter number 5: ");
    scanf("%d", &five->value);
    four->next = five;
    linkedList->prev = five;

    printNodes(linkedList);
    
}

// 1. Deleting Linked Lists Practice l
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


int main(void) {
	struct Node* linkedList = initializeLinkedList();
    printf("%d -> ", linkedList->next->value);
    
    while (linkedList != NULL) {
    
        if(linkedList->value % 2 == 0) {
            struct Node* nextNode = linkedList->next;
            
            free(linkedList);

            linkedList = nextNode;
        }
        else {
            printf("%d", linkedList->value);
        }
        
        linkedList = linkedList->next;
    }

    return 0;
}

// 2. Deleting Linked Lists Practice ll
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(void) {
    int size, j = 0;

    printf("Enter size: ");
    scanf("%d", &size);

    struct Node *head, *current, *temp;
    
    printf("Enter elements: ");
    for(int i = 0; i < size; i++) {
        current = (struct Node*) malloc(sizeof(struct Node));

        scanf("%d", &current->data);

        if(i == 0) 
            head = temp = current;
        else {
            temp->next = current;
            temp = current;
        }
    }

    temp->next = NULL;
    temp = head;
    
    printf("Before:\n");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        
        temp = temp->next;
    }
    temp = head;
    
    struct Node *nextNode = temp->next;
    printf("\nAfter: ");
    while(temp != NULL) {
        free(temp);

        temp = nextNode;

        if(nextNode != NULL) {
            nextNode = nextNode->next;
        }
    }
    return 0;    
}

// 1. Stack Practice l
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

struct Stack {
    int top;
    int items[MAX_SIZE];
};

struct Stack* createEmptyStack(void) {
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->top = -1;
    
    return stack;
}

int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, int item) {
    if (!isFull(stack)) {
        stack->top++;
        stack->items[stack->top] = item;
    }
}

int pop(struct Stack* stack) {
    if (!isEmpty(stack)) {
        int lastValue = stack->items[stack->top];
        stack->top--;
        
        return lastValue;
    }
    
    return 0;
}

int peek(struct Stack* stack) {
    return !isEmpty(stack) ? stack->items[stack->top] : 0;
}

void display(struct Stack* stack) {
	int index = stack->top;
	while(index >= 0) {
		printf("%c", stack->items[index]);
        index--;
	} 
}

int main(void) {
    struct Stack* stack = createEmptyStack();

    char string[999];
    printf("Enter a string: "); 
    scanf("%[^\n]%*c", string);
    int size = strlen(string);

    for(int i = 0; i < size; i++) {
        push(stack, string[i]);
    }
    
    display(stack);
    return 0;
}

// 2. Stack Practice ll
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

struct Stack {
    int top;
    int value;
    struct Stack* next;
};

struct Stack* createEmptyStack(void) {
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->top = -1;
    
    return stack;
}

int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, int item) {
    if (!isFull(stack)) {
        struct Stack* nextNode = stack->next;
        
        struct Stack* newNode = (struct Stack*) malloc(sizeof(struct Stack));
        stack->next = newNode;
		newNode->value = item;
        newNode->next = nextNode;
        
        stack->top++;
    }
}

int pop(struct Stack* stack) {
    if (!isEmpty(stack)) {
        struct Stack* firstNode = stack->next;
        struct Stack* secondNode = firstNode->next;
        
        stack->next = secondNode;
        stack->top--;
        
        return firstNode->value;
    }
    
    return 0;
}

int peek(struct Stack* stack) {
    if(!isEmpty(stack)) return stack->next->value;
}

void display(struct Stack* stack) {
	struct Stack* current = stack->next;
	while (current != NULL) {
        printf("Minimum element: %d\n", current->value);
        current = current->next;
    }
}

int main(void) {
    struct Stack* stack = createEmptyStack();
    int data, j = 1;;
    char choice;
    
	while(1) {
        printf("Enter operation %d: ", j);
        scanf(" %c", &choice);
       j++;
        
        if(choice == '+') {
            scanf("%d", &data);
            push(stack, data);
        }
        else if(choice == '-') {
            pop(stack);
        }
        else if(choice == '#') {
            break;
        }
    }
    int size = stack->top;
    
    if(!isEmpty(stack)) {
        if(stack->top == 0) {
            display(stack);
        }
        else {
            printf("Minimum element: 1");
        }
    }
    
    return 0;
}

// 1. Queue Practice l
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

struct Node {
    int value;
    struct Node* next;
};

struct Queue {
    int count;
    struct Node* rear;
    struct Node* front;
};

struct Queue* createEmptyQueue(void) {
    struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue));
    queue->count = 0;
    
    return queue;
}

int isFull(struct Queue* queue) {
    return queue->count == MAX_SIZE;
}

int isEmpty(struct Queue* queue) {
    return queue->count == 0;
}

void enqueue(struct Queue* queue, int item) {
        if (!isFull(queue)) {
            //create a new node
            struct Node* newItem = (struct Node*) malloc(sizeof(struct Node));
            newItem->value = item;
            newItem->next = NULL;

         
            if (queue->rear != NULL) {
                queue->rear->next = newItem;
            }

            queue->rear = newItem;

            queue->count++;

           
            if (queue->front == NULL) {
                queue->front = newItem;
            }
        }
}

int dequeue(struct Queue* queue) {
    if (!isEmpty(queue)) {
		struct Node* firstItem = queue->front;
        
	
		if (firstItem != NULL) {
			queue->front =  firstItem->next;
		}
        
		queue->count--;
        
		if (queue->front == NULL) {
			queue->rear = NULL;
		}
		
		return firstItem->value;
	}
    
    return 0;
}

int peek(struct Queue* queue) {
   return !isEmpty(queue) ?  queue->front->value : 0;
}

void display(struct Node* queueFrontNode, struct Node* queueRearNode) {
	while(queueFrontNode != NULL) {
        if(queueFrontNode->value != queueRearNode->value) {
    		printf("%d -> ", queueFrontNode->value);
            queueFrontNode = queueFrontNode->next;
        }
        else {
            printf("%d", queueRearNode->value);
            queueFrontNode = queueFrontNode->next;
        }
	} 
}

int main(void) {
    struct Queue* queue = createEmptyQueue();
    char sign;
    int data, dataNum = 0;

    while(1) {
        printf("Enter operation %d: ", dataNum + 1);
        scanf(" %c", &sign);
        dataNum++;

        if(sign == '0') {
            break;
        }
        else if(sign == '+') {
            scanf("%d", &data);
            enqueue(queue, data);
        }
        else if(sign == '-') {
            dequeue(queue);
        }
    }
    
    display(queue->front, queue->rear);
    
    return 0;
}

// 2. Queue Practice ll
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

struct Queue {
    int rear;
    int items[MAX_SIZE];
};

struct Queue* createEmptyQueue(void) {
    struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue));
    queue->rear = -1;
    
    return queue;
}

int isFull(struct Queue* queue) {
    return queue->rear == MAX_SIZE - 1;
}

int isEmpty(struct Queue* queue) {
    return queue->rear == -1;
}

void enqueue(struct Queue* queue, int item) {
    if (!isFull(queue)) {
        queue->rear++;
        queue->items[queue->rear] = item;
    }
}

int dequeue(struct Queue* queue) {
    if (!isEmpty(queue)) {
        int firstItem = queue->items[0];
        
        // shift the elements to the left
        for(int i = 0; i < queue->rear + 1; i++) {
            queue->items[i] = queue->items[i + 1];
        }
		
        queue->rear--;
        
        return firstItem;
    }
    
    return 0;
}

int peek(struct Queue* queue) {
    return !isEmpty(queue) ? queue->items[0] : 0;
}

void display(struct Queue* queue) {
	int index = 0;
	while(index <= queue->rear) {
		printf("%d ", queue->items[index]);
        index++;
	} 
}

int totalSum(struct Queue* queue) {
	int index = 0, sum = 0;
	while(index <= queue->rear) {
		sum += queue->items[index];
        index++;
	} 

    return sum;
}

int main(void) {
    struct Queue* queue = createEmptyQueue();
    char sign;
    int data, dataNum = 0, sum, N;

    while(1) {
        printf("Enter operation %d: ", dataNum + 1);
        scanf(" %c", &sign);
        dataNum++;

        if(sign == '0') {
            sum = totalSum(queue);
            break;
        }
        else if(sign == 'c') {
            scanf("%d", &N);
        }
        else if(sign == '+') {
            scanf("%d", &data);
            enqueue(queue, data);
        }
        else if(sign == '-') {
            dequeue(queue);
        }
    }
    if(sum > N)
        printf("%d", sum - N);

    return 0;
}

// 1. Priority Queue Practice l
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    int priority;

    struct node* next;

} Node;

Node* newNode(int data, int priority) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;

    return temp;
}

int peek(Node** head) {
    return (*head)->data;
}

void dequeue(Node** head) {
    Node* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

void enqueue(Node** head, int number, int priority) {
    Node* start = (*head);

    Node* temp = newNode(number, priority);

    if ((*head)->priority > priority) {
        temp->next = *head;
        (*head) = temp;
    } else {
        while (start->next != NULL && start->next->priority < priority) {
            start = start->next;
        }

        temp->next = start->next;
        start->next = temp;
    }
}

int isEmpty(Node** head) {
    return (*head) == NULL;
}

int main (void) {
    Node* pq;
    char sign;
    int data, index = 1, priority, dataNum = 0;

    while(1) {
        printf("Enter operation %d: ", index);
        scanf(" %c", &sign);

        if(sign == '0') {
            break;
        }
        else if(sign == '+') {
            scanf("%d", &data);
            scanf("%d", &priority);
            if(index == 1)
                pq = newNode(data, priority);
            else 
                enqueue(&pq, data, priority);

            dataNum++;
        }
        else if(sign == '-') {
            dequeue(&pq);

            dataNum--;
        }
        
        index++;
    }

    while(!isEmpty(&pq)) {
        if(dataNum != 1)
            printf("%d -> ", peek(&pq));
        else 
            printf("%d", peek(&pq));

        dataNum--;
        dequeue(&pq);
    }

    return 0;
}

// 2. Priority Queue Practice ll
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    int priority;

    struct node* next;

} Node;

Node* newNode(int data, int priority) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;

    return temp;
}

int peek(Node** head, int sum) {
    return sum += (*head)->data;
}

void dequeue(Node** head) {
    Node* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

void enqueue(Node** head, int number, int priority) {
    Node* start = (*head);

    Node* temp = newNode(number, priority);

    if ((*head)->priority > priority) {
        temp->next = *head;
        (*head) = temp;
    } else {
        while (start->next != NULL && start->next->priority < priority) {
            start = start->next;
        }

        temp->next = start->next;
        start->next = temp;
    }
}

int isEmpty(Node** head) {
    return (*head) == NULL;
}

int main (void) {
    Node* pq;
    char sign;
    int data, index = 1, priority, sum;

    while(1) {
        printf("Enter operation %d: ", index);
        scanf(" %c", &sign);

        if(sign == '0') {
            break;
        }
        else if(sign == '+') {
            scanf("%d", &data);
            scanf("%d", &priority);
            if(index == 1)
                pq = newNode(data, priority);
            else 
                enqueue(&pq, data, priority);
        }
        else if(sign == '-') {
            dequeue(&pq);
        }
        index++;
    }

    while(!isEmpty(&pq)) {
        sum = peek(&pq, sum);
        printf("Running sum: %d\n", sum);

        dequeue(&pq);
    }

    return 0;
}

// 1. Binary Search Tree Operations Practice l
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* left;
	struct node* right;
};

struct node* createNode(int value) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void inorderTraversal(struct node* node) {
    if (node != NULL) { 

        inorderTraversal(node->left);
        printf("%d ", node->value);
        inorderTraversal(node->right);
		
    }
}

struct node* insert(struct node* node, int value) {
    // If the "current node" is null, we create 
    // a new node and return it so that it gets
    // connected back to its parent
    if (node == NULL) {
        return createNode(value);
    }
    
    // Traverse to the right place and insert the node
    if (value <= node->value) {
        node->left = insert(node->left, value);
    } else if (value > node->value) {
        node->right = insert(node->right, value);
    }

    // Return the unchanged node
    return node;
}

int main() {
    struct node* root = createNode(6);
    insert(root, 7);
    insert(root, 1);
    insert(root, 5);
    insert(root, 4);
    insert(root, 10);
    insert(root, 10);
    insert(root, 1);

    inorderTraversal(root);
        
	return 0;
}

// 2. Binary Search Tree Operations Practice ll
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* left;
	struct node* right;
};

struct node* createNode(int value) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void inorderTraversal(struct node* node) {
    if (node != NULL) { 

        inorderTraversal(node->left);
        printf("%d ", node->value);
        inorderTraversal(node->right);
		
    }
}

struct node* insert(struct node* node, int value) {
    // If the "current node" is null, we create 
    // a new node and return it so that it gets
    // connected back to its parent
    if (node == NULL) {
        return createNode(value);
    }
    
    // Traverse to the right place and insert the node
    if (value <= node->value) {
        node->left = insert(node->left, value);
    } else if (value > node->value) {
        node->right = insert(node->right, value);
    }

    // Return the unchanged node
    return node;
}

int main() {
    int N, arr[999], X, Y;
    struct node* root;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter X: ");
    scanf("%d", &X);
    printf("Enter Y: ");
    scanf("%d", &Y);

    for(int i = 0; i < N; i++) {
        if(arr[i] > X && arr[i] < Y) {
            for(int j = i; j < N; j++) {
                arr[j] = arr[j+1];
            }
            N--;
        }
    }

    for(int i = 0; i < N; i++) {
        if(i == 0) {
            root = createNode(arr[i]);
        }
        else {
            insert(root, arr[i]);
        }
    }
    
    inorderTraversal(root);
        
	return 0;
}

// 1. Binary Tree Traversal Practice l
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* left;
	struct node* right;
    struct node* last;
};

struct node* createNode(int value) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node* insert(struct node* node, int value) {

    if (node == NULL) {
        return createNode(value);
    }

    if (value <= node->value) {
        node->left = insert(node->left, value);
        node->last = node->left;
    } 
    else if (value > node->value) {
        node->right = insert(node->right, value);
        node->last = node->right;
    }
    
    return node;
}

struct node* getMinimumValueNode(struct node* node) {
    struct node* current = node;
    
    while (current && current->left != NULL) {
        current = current->left;
    }
    
    return current;
}

struct node* getLastNode(struct node* node) {
    struct node* current = node;

    while(current && current->right != NULL) {
        current = current->right;
    }

    return current;
}

struct node* getLeftLastNode(struct node* node) {
    struct node* current = node;

    if(current->right != NULL)
        while(current && current->right != NULL) {
            current = current->right;
        }
    else
        while(current && current->left != NULL)
            current = current->left;

    return current;
}

struct node* delete(struct node* node, int value) {
    if (node == NULL) {
        return node;
    }
    
    if (value < node->value) {
   
        node->left = delete(node->left, value);
        
    } else if (value > node->value) {

        node->right = delete(node->right, value);
		
    } else {
        
        if (node->left == NULL) {
            struct node *temp = node->right;
            free(node);
            return temp;
            
        } else if (node->right == NULL) {
 
            struct node *temp = node->left;
            free(node);
            return temp;
        }

        struct node *temp = getMinimumValueNode(node->right);
        node->value = temp->value;
        node->right = delete(node->right, temp->value);
    }

    return node;
}

void display(struct node* node, struct node* lastNode) {
    
    if (node != NULL) {
        if(node != lastNode) 
            printf("%d -> ", node->value);
        else
            printf("%d", node->value);
        
        display(node->left, lastNode);
        
        display(node->right, lastNode);
    }
    
}


int main() {
    struct node* root;
    struct node* lastNode;
    struct node* rightLastNode;
    struct node* leftLastNode;
    char sign;
    int data, dataNum = 0;

    while(1) {
        printf("Enter operation %d: ", dataNum+1);
        scanf(" %c", &sign);
        dataNum++;

        if(sign == '0') {
            if(root->right != NULL) {
                rightLastNode = getLastNode(root->right);
                lastNode = rightLastNode;
            }
            else {
                leftLastNode = getLeftLastNode(root->left);
                lastNode = leftLastNode;
            }
            break;
        }
        else if(sign == '+') {
            scanf("%d", &data);
            if(dataNum == 1)
                root = createNode(data);
            else
                insert(root, data);
        }
        else if(sign == '-') {
            scanf("%d", &data);
            delete(root, data);

        }
    }
    
    display(root, lastNode);

	return 0;
}

// 
2. Binary Tree Traversal Practice ll
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* left;
	struct node* right;
    struct node* last;
};

struct node* createNode(int value) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node* insert(struct node* node, int value) {

    if (node == NULL) {
        return createNode(value);
    }

    if (value <= node->value) {
        node->left = insert(node->left, value);
        node->last = node->left;
    } 
    else if (value > node->value) {
        node->right = insert(node->right, value);
        node->last = node->right;
    }
    
    return node;
}

struct node* getMinimumValueNode(struct node* node) {
    struct node* current = node;
    
    while (current && current->left != NULL) {
        current = current->left;
    }
    
    return current;
}

struct node* getLastNode(struct node* node) {
    struct node* current = node;

    while(current && current->right != NULL) {
        current = current->right;
    }

    return current;
}

struct node* getLeftLastNode(struct node* node) {
    struct node* current = node;

    if(current->right != NULL)
        while(current && current->right != NULL) {
            current = current->right;
        }
    else
        while(current && current->left != NULL)
            current = current->left;

    return current;
}

struct node* delete(struct node* node, int value) {
    if (node == NULL) {
        return node;
    }
    
    if (value < node->value) {
   
        node->left = delete(node->left, value);
        
    } else if (value > node->value) {

        node->right = delete(node->right, value);
		
    } else {
        
        if (node->left == NULL) {
            struct node *temp = node->right;
            free(node);
            return temp;
            
        } else if (node->right == NULL) {
 
            struct node *temp = node->left;
            free(node);
            return temp;
        }

        struct node *temp = getMinimumValueNode(node->right);
        node->value = temp->value;
        node->right = delete(node->right, temp->value);
    }

    return node;
}

void display(struct node* node, struct node* lastNode) {
    
    if (node != NULL) { 

        display(node->left, lastNode);
        
        display(node->right, lastNode);
        
        if(node != lastNode)
            printf("%d -> ", node->value);    
        else 
            printf("%d", node->value);
        
    }
}


int main() {
    struct node* root;
    struct node* lastNode;
    char sign;
    int data, dataNum = 0;

    while(1) {
        printf("Enter operation %d: ", dataNum+1);
        scanf(" %c", &sign);
        dataNum++;

        if(sign == '0') {
            break;
        }
        else if(sign == '+') {
            scanf("%d", &data);
            if(dataNum == 1) {
                root = createNode(data);
                lastNode = root;
            }
            else
                insert(root, data);
        }
        else if(sign == '-') {
            scanf("%d", &data);
            delete(root, data);

        }
    }
    display(root, lastNode);

	return 0;
}

// 1. Heap Practice l
#include <stdio.h>

int size = 0;

void swap(int *ptrA, int *ptrB) {
    int temp = *ptrB;
    *ptrB = *ptrA;
    *ptrA = temp;
}
void heapify(int array[], int size, int ctr) {
    if (size == 1) {
        printf("Single element in the heap");
    } else {
        int largest = ctr;
        int ctrLeft = 2 * ctr + 1;
        int ctrRight = 2 * ctr + 2;
        
        if (ctrLeft < size && array[ctrLeft] > array[largest]) {
            largest = ctrLeft;
        }
        if (ctrRight < size && array[ctrRight] > array[largest]) {
            largest = ctrRight;
        }
        if (largest != ctr) {
            swap(&array[ctr], &array[largest]);
            heapify(array, size, largest);
        }
    }
}
void insert(int array[], int newNum) {
    if (size == 0) {
        array[0] = newNum;
        size += 1;
    } else {
        array[size] = newNum;
        size += 1;

        for (int ctr = size / 2 - 1; ctr >= 0; ctr--) {
            heapify(array, size, ctr);
        }
    }
}

void deleteRoot(int array[], int num) {
    int ctr;

    for (ctr = 0; ctr < size; ctr++) {
        if (num == array[ctr]) {
            break;
        }
    }

    swap(&array[ctr], &array[size - 1]);
    size -= 1;

    for (int ctr = size / 2 - 1; ctr >= 0; ctr--) {
        heapify(array, size, ctr);
    }
}
void printArray(int array[], int size) {
    for (int ctr = 0; ctr < size; ++ctr) {
        printf("%d ", array[ctr]);
    }
    printf("\n");
}

int main(void) {
    int arr[10], data, i = 1;
    char sign;

    while(1) {
        printf("Enter operation %d: ", i);
        scanf(" %c", &sign);
        i++;
        
        if(sign == '+') {
            scanf("%d", &data);
            insert(arr, data);
        }
        else if(sign == '-') {
            scanf("%d", &data);
            deleteRoot(arr, data);
        }
        else if(sign == '0')
            break;
    }

    printArray(arr, size);
    return 0;
}

// 2. Heap Practice ll
#include <stdio.h>

int size = 0;

void swap(int *ptrA, int *ptrB) {
    int temp = *ptrB;
    *ptrB = *ptrA;
    *ptrA = temp;
}
void heapify(int array[], int size, int ctr) {
    if (size == 1) {
        printf("Single element in the heap");
    } else {
        int largest = ctr;
        int ctrLeft = 2 * ctr + 1;
        int ctrRight = 2 * ctr + 2;
        
        if (ctrLeft < size && array[ctrLeft] > array[largest]) {
            largest = ctrLeft;
        }
        if (ctrRight < size && array[ctrRight] > array[largest]) {
            largest = ctrRight;
        }
        if (largest != ctr) {
            swap(&array[ctr], &array[largest]);
            heapify(array, size, largest);
        }
    }
}
void insert(int array[], int newNum) {
    if (size == 0) {
        array[0] = newNum;
        size += 1;
    } else {
        array[size] = newNum;
        size += 1;

        for (int ctr = size / 2 - 1; ctr >= 0; ctr--) {
            heapify(array, size, ctr);
        }
    }
}

void deleteRoot(int array[], int num) {
    int ctr;

    for (ctr = 0; ctr < size; ctr++) {
        if (num == array[ctr]) {
            break;
        }
    }

    swap(&array[ctr], &array[size - 1]);
    size -= 1;

    for (int ctr = size / 2 - 1; ctr >= 0; ctr--) {
        heapify(array, size, ctr);
    }
}
void printArray(int array[], int size) {
    int sum = 0;
    for (int ctr = 0; ctr < size; ++ctr) {
        sum += array[ctr];
        printf("Running sum: %d \n", sum);
    }
    printf("\n");
}

int main(void) {
    int arr[10], data, i = 1;
    char sign;

    while(1) {
        printf("Enter operation %d: ", i);
        scanf(" %c", &sign);
        i++;
        
        if(sign == '+') {
            scanf("%d", &data);
            insert(arr, data);
        }
        else if(sign == '-') {
            scanf("%d", &data);
            deleteRoot(arr, data);
        }
        else if(sign == '0')
            break;
    }
    
    printArray(arr, size);
    return 0;
}
