#include <stdio.h>



int increasing(int arr[], int size);//tests if # is increasing

int decreasing(int arr[], int size);//tests if # is decreasing

void increment(int *arr, int size);//increments array (# + 1)





int main(){

int inc;
int dec;
float totalNumber = 100.0;
float bouncyNumber = 0.0;
float percent = (bouncyNumber/totalNumber);

int currentNumber[12] = {0,0,0,0,0,0,0,0,0,1,0,0};

int currentSize = 12;

while(percent < 0.99){

inc = increasing(currentNumber, currentSize); 
dec = decreasing(currentNumber, currentSize);


if((inc && dec) == 0){
bouncyNumber++;
} //checks number "bouncyness"

increment(currentNumber, currentSize); 
//increment the current number array

totalNumber++;
//increase total number

percent = (bouncyNumber/totalNumber);
}//loop to count bouncy numbers




printf("%f\n", totalNumber);
printf("This is the least bouncy number for which the ratio of bouncy numbers to numbers is 99 percent: %f\n", bouncyNumber);

}




int increasing(int arr[], int size){

int i;
int test;

for(i = 0; i < size; i++){

if(arr[i] <= arr[i+1]){
test = 1;
} else {
test = 0;
i = size;
}
}
return test;
}




int decreasing(int arr[], int size){

int i;
int test;

for(i = 0; i < size; i++){

if(arr[i] >= arr[i+1]){
test = 1;
} else {
test = 0;
i = size;
}


}
return test;
}





void increment(int *arr, int size){

int i;


for(i = (size - 1); i >= 0; i--){

if(*(arr + i) < 9){
*(arr + i) = *(arr + i) + 1;
i = -1;
} else {
*(arr + i) = 0;
}

}


}




