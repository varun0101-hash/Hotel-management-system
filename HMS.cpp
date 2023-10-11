#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    //quantity of rooms
    int qrooms=0 , qpasta=0, qburger=0 , qnoodles=0 , qshake=0 ,qchicken=0; 
    //sold food items
    int srooms =0, spasta=0,snoodles=0,sburgers=0 ,sshake=0, schicken=0;

    //total prize of items
    int total_rooms=0,total_pasta=0,total_burger=0,total_shake=0,total_noodles=0,total_chicken=0;

     cout<<"\n\tQuantity of the items we have";
     cout<<"\nRooms available: ";
     cin>>qrooms;
     cout<<"Quantity of pasta:"<<endl;
     cin>>qpasta;
     cout<<"Quantity of burgers:"<<endl;
     cin>>qburger;
     cout<<"Quantity of noodles:"<<endl;
     cin>>qnoodles;
     cout<<"Quantity of shake:"<<endl;
     cin>>qshake;
     cout<<"Quantity of chicken-roll:"<<endl;
     cin>>qchicken;

    start:
     cout<<"\n\t\t\tPlease select from the given menu options: ";
     cout<<"\n\n1) Rooms";
     cout<<"\2)Pasta";
     cout<<"\n3)Burgers";
     cout<<"\n4)Noodles";
     cout<<"\n5)Shake";
     cout<<"\n6)Chiken-roll";

     cout<<"\n7)Information regarding sales and collection: ";
     cout<<"\n8)Exit:";

     cout<<"\n\nPlease Enter your choice: ";
     cin>>choice;

     switch(choice)
     {
        case 1:
                cout<<"\n\nEnter the number of rooms you want: ";
                cin>>quant;
                if(qrooms-srooms>=quant)
                {
                     srooms=srooms+quant;
                     total_rooms=total_rooms+quant*1200;
                     cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you";
                }
                else{
                    cout<<"\n\tOnly"<<qrooms-srooms<<"rooms are remaining in our hotel";
                }
                break;

        case 2:
                cout<<"\n\nEnter pasta quantity: ";
                cin>>quant;
                if(qpasta-spasta>=quant)
                {
                    spasta=spasta+quant;
                    total_pasta=total_pasta+quant*99;
                    cout<<"\n\n\tOnly"<<quant<<"pastas available for you: ";
                
                }
                else{
                    cout<<"\n\tOnly"<<qpasta-spasta<<"pastas remaining:";
                }
                break;
            
        case 3:
                cout<<"\n\nEnter burger quantity: ";
                cin>>quant;
                if(qburger-sburgers>=quant)
                {
                    sburgers=sburgers+quant;
                    total_burger=total_burger+quant*49;
                    cout<<"\n\n\tOnly"<<quant<<"burgers are available for you: ";
                }
                else{
                    cout<<"\n\tOnly"<<qburger-sburgers<<"burgers remaining: ";
                }
                break;

        case 4:
                cout<<"\n\nEnter Noodles quantity :";
                cin>>quant;
                if(qnoodles-snoodles>=quant){
                    snoodles=snoodles+quant;
                    total_noodles=total_noodles+quant *99;
                    cout<<"\n\n\tOnly"<<quant<<"Noodles are available :";
                }
                else{
                    cout<<"\n\tOnly"<<qnoodles-snoodles<<"are remaining in the stock ";
                }
                break;
        case 5:
                cout<<"\n\nEnter Shakes quantity :";
                cin>>quant;
                if(qshake-sshake>=quant){
                    sshake=sshake+quant;
                    total_shake=total_shake+quant*39;
                    cout<<"\n\n\tOnly"<<quant<<"Shakes are available :";
                }
                else{
                    cout<<"\n\tOnly"<<qshake-sshake<<"are remaining in stock: "; 
                }

        case 6:
                cout<<"\n\n\tEnter quantity of the chicken roll you want: ";
                cin>>quant;
                if(qchicken-schicken>=quant){
                    schicken=schicken+quant;
                    total_shake=total_chicken+quant*149;
                    cout<<"\n\n\tOnly"<<quant<<"Chicken rolls are available: ";
                }
                else{
                    cout<<"\n\tOnly"<<qchicken-schicken<<"are remaining in the stock: ";
                }
              break;
        case 7:
                cout<<"\n\t\tDetails of sales and collection ";
                cout<<"\n\n Number of rooms we has :"<<qrooms;
                cout<<"\n\n Nmber of rooms we gave for rent : "<<srooms;
                cout<<"\n\n Remaining rooms : "<<qrooms-srooms;
                cout<<"\n\n Total rooms collection for the day : "<<total_rooms;
                 
                  cout<<"\n\t\tDetails of sales and collection ";
                cout<<"\n\n Number of pastaas we has :"<<qpasta;
                cout<<"\n\n Nmber of pastas we sold today: "<<spasta;
                cout<<"\n\n Remaining pastas : "<<qpasta-spasta;
                cout<<"\n\n Total pasta collection for the day : "<<total_pasta;
               
                cout<<"\n\t\tDetails of sales and collection ";
                cout<<"\n\n Number of burger we has :"<<qburger;
                cout<<"\n\n Nmber of burger we sold  : "<<sburgers;
                cout<<"\n\n Remaining burger : "<<qburger-sburgers;
                cout<<"\n\n Total burger collection for the day : "<<total_burger;
               
                cout<<"\n\t\tDetails of sales and collection ";
                cout<<"\n\n Number of noodles we has :"<<qnoodles;
                cout<<"\n\n Nmber of noodles we gave for rent : "<<snoodles;
                cout<<"\n\n Remaining burgers : "<<qburger-sburgers;
                cout<<"\n\n Total burgers collection for the day : "<<total_burger;
               
               
                cout<<"\n\t\tDetails of sales and collection ";
                cout<<"\n\n Number of shakes we has :"<<qshake;
                cout<<"\n\n Nmber of shakes we gave for rent : "<<sshake;
                cout<<"\n\n Remaining shakes : "<<qshake-sshake;
                cout<<"\n\n Total shakes collection for the day : "<<total_shake;

                 cout<<"\n\t\tDetails of sales and collection ";
                cout<<"\n\n Number of Chicken-Roll we has :"<<qchicken;
                cout<<"\n\n Nmber of Chicken-Roll we gave for rent : "<<schicken;
                cout<<"\n\n Remaining Chicken-Roll : "<<qchicken-schicken;
                cout<<"\n\n Total Chicken-Roll collection for the day : "<<total_chicken;

            case 8:
              exit(0);
            default:
              cout<<"\n\t\tPlease select the number mentioned above: ";
     }
              goto start;

 }
     