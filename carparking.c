#include<iostream>
using namespace std;
 int main(){
    cout<<"\t\tC A R P A R K I N G"<<endl;
    while(true)
    {
        int enter;
        int car=0,bike=0,rikshaw=0;
        cout<<"Press 1 to enter car"<<endl;
        cout<<"Press 2 to enter bike"<<endl;
        cout<<"Press 3 to enter rikshaw"<<endl;
        cout<<"Press 4 to show the record"<<endl;
        cout<<"Press 5 to delete the record"<<endl;
        cout<<"Press 6 to exit"<<endl;
        cin>>enter
        if(enter==1)
        {
            car++;
            cout<<"Car is added"<<endl;
        }
        else if(enter==2)
        {
            bike++;
            cout<<"Bike is added"<<endl;
        }
        else if(enter==3)
        {
            rikshaw++
            cout<<"Rikshaw is added"<<endl;

        }
        else if(enter==4)
        {
            cout<<"car"<<car<<endl;
            cout<<"bike"<<bike<<endl;
            cout<<"rikshaw"<<rikshaw<<endl;
    }
    else if(enter==5)
    {
        car=0;
        bike=0;
        rikshaw=0;
        system("CLS");
        cout<<"All record is deleted...!!"<<endl;

    }
    else if(enter==4){
        exit(0);
    }
    else {
        cout<<"Invalid input"<<endl;
    }
    return 0;
    
}