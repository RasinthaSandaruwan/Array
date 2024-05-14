#include <iostream>
using namespace std;

int main(){
    //Declare an int array
    int number[5];

    //Initialize an array of length 10

    int marks[10]={};

    //Enter all the elememts
    for(int i=1;i<=10;i++){
        cout<<"Enter the element "<<i<<": ";
        cin>>marks[i];
        cout<<"";
    }

    //find the total of all the numbers in the array marks
    int sum = 0;
    for(int j=0;j<=9;j++){
        sum=sum+marks[j];   //sum+=marks[j]
    }
    cout<<"The total of the marks :"<<sum<<endl;

    //find the number of odd marks in the array
    //find the number of even marks in the array
    int countOdd = 0;
    int countEven = 0;
    for(int k=0;k<=9;k++){
        if(marks[k]%2==1){
            countOdd+=1;
        }
        else{
            countEven+=1;
        }
    }
    cout<<"The count of odd numbers in the array :"<<countOdd<<endl;
    cout<<"The count of even numbers in the array :"<<countEven<<endl;



    //find the count of marks which are greater than 50
    int count = 0;
    for(int z = 0; z <= 9; z++){
        if(marks[z] > 50){
            count = count + 1;
        }
    }

    cout << "THE COUNT OF MARKS GREATER THAN 50 : " << count << endl;


    return 0;
}
