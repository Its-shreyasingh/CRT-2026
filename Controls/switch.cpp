#include<iostream>>
using namespace std;
void sum(float a,float b)
{
    cout<<"Sum:"<<(a+b)<<endl;
}
void subtract(float a,float b)
{
    cout<<"Difference:"<<(a-b)<<endl;
}
void multiply(float a,float b)
{
    cout<<"Multiplication:"<<(a*b)<<endl;
}
void divide(float a,float b)
{
    if(b!=0){
    cout<<"Division:"<<(a/b)<<endl;}
    else{
        cout<<"Error !Division by zero"<<endl;
    }
}
int main()
{
    float a,b;
    int choice;
    cout<<"Enter A: ";
        cin>>a;
        cout<<"Enter B: ";
        cin>>b;
    do{
        cout<<"\nMenu:\n1]Addition\n2]Subtraction\n3]Multiplication\n4]Division\n5]Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                sum(a,b);
                break;
            case 2:
                subtract(a,b);
                break;
            case 3:
                multiply(a,b);
                break;
            case 4:
                divide(a,b);
                break;
            case 5:
                cout<<"Exiting program";
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice !=5);
    return 0;
}