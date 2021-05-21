#include<iostream>
#include<cstring>
#include<conio.h>
#include<fstream>
#include<stdio.h>
using namespace std;

class user{
    public:
    char username[15];
    char password[12];
    void admin();
};
void user::admin(){
    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"khaled")==0){
        if(strcmp(password,"123")==0){

        printf("\n Welcome khaled.Login Success!");}

    else if(strcmp(username, "Noman")==0){
         if(strcmp(password, "456")==0){
         printf("\n Welcome Noman.Login Success!");}
         }

    else{
        printf("\nwrong password");
        printf("\nUser doesn't exist");
        }

    }
}
class ecommerce{                        // Class named ecommerce
    public:
        char name[20];
        char phone[20];
        char address[50];
        char s[100],product_no;
        int cart;
        ecommerce(){ cart=0;};
        void ask();
        void define();
};

 void ecommerce::ask(){                  // Start ask function.
     cout<<"\t\t\t\tWelcome to Myshoppio Supper Shop\n";

     cout<<"\n\t\t Please enter Your Name:";
     cin>>name;
     cout<<"\n \t\t   Please enter Your phone No:";
     cin>>phone;
     cout<<"\t\t   Please enter Your Address:";
     cin>>address;
     fstream sellfile;
        sellfile.open("sell.txt");
        cout<<"\n\tHello "<< name <<" Welcome to Myshoppio Supper Shop."<< endl;   //for getting score points.
}                                       // End ask function.

void ecommerce::define(){                 // Start define function.
    cout<<"\n\tPlease Select Your Product........\n "<<endl;
                                          //   ifstream product;
    char A,B,C;
      int i=0;
      int h=1;
      int cost[9],a[9],totalCost=0;
      char items[9];
      string line;

    do{

        if(h==1){                          //here 'h' is 1 by default
          ifstream product ("product.txt");
          if (product.is_open())
          {
            while ( getline (product,line) )
            {
              cout << line << '\n';
            }
            product.close();
          }
          else cout << "Unable to open file";


              cout<<"\n \n Please Select Your Product_ ";
              cin>>product_no;
              if(product_no=='a'){             //for get answer

                    int i=0;
                    string line;
                    ifstream product ("computer.txt");
                    if (product.is_open())
                    {
                        while ( getline (product,line) )
                        {
                          cout << line << '\n';
                        }


                        int accessoriesChoice;

                        cout<<"\n \n please Select Your Product_ ";
                        cin>>accessoriesChoice;
                        switch(accessoriesChoice)
                        {
                            case 1:
                            {
                                cost[0]=355;
                                int num;
                                cout<<"You choose Sandisk 16GB with BDT.355.    Are you sure to buy? If 'Yes' Enter 1 else Any number\n";
                                cin>>num;
                                if(num==1)
                                    {
                                    a[0]++;
                                    totalCost+=355;
                                    }
                                cout<<"Your Cost in Cart is \t\t"<<totalCost<<endl;
                            break;
                            }
                            case 2:
                            {
                                cost[1]=500;
                                int num;
                                cout<<"You choose Logitech Mouse with BDT.500.   Are you sure to buy? If 'Yes' Enter 1 else Any number\n";
                                cin>>num;
                                if(num==1)
                                    {
                                    a[1]++;
                                    totalCost+=500;
                                    }
                                cout<<"Your Cost in Cart is \t\t"<<totalCost<<endl;
                            break;
                            }
                            case 3:{
                                cost[2]=550;
                                int num;
                                cout<<"You choose Pendrive 16GB with BDT.550.   Are you sure to buy? If 'Yes' Enter 1 else Any number\n";
                                cin>>num;
                                if(num==1){
                                    a[2]++;
                                    totalCost+=550;
                                    }
                                cout<<"Your Cost in Cart is \t\t"<<totalCost<<endl;
                            break;
                            }
                            default:{
                                cout<<"Exit from Computer Accessories\n";
                            break;
                            }
                        }
                        product.close();
                    }
                    else cout << "Unable to open file";
                  }

                else if(product_no=='b'){
                        int i=0;
                        string line;
                        ifstream product ("laptop.txt");
                        if (product.is_open()){
                            while ( getline (product,line) )
                                {
                                cout << line << '\n';
                                }
                            int laptopChoice;

                            cout<<"\n \n Please Select Your Product_ ";
                            cin>>laptopChoice;
                            switch(laptopChoice)
                            {
                                case 1:
                                {
                                    cost[3]=35500;
                                    int num;
                                    cout<<"You chose Hp probook-6th gen with BDT.35500.    Are you sure to buy.If 'Yes' Enter 1 else Any number\n";
                                    cin>>num;
                                    if(num==1)
                                        {
                                        a[3]++;
                                        totalCost+=35500;
                                        }
                                    cout<<"Your Cost in Cart is \t\t"<<totalCost<<endl;
                                break;
                                }
                                case 2:
                                {
                                    cost[4]=50000;
                                    int num;
                                    cout<<"You chose Dell ispr3-5th gen with BDT.50000.   Are you sure to buy.If 'Yes' Enter 1 else Any number\n";
                                    cin>>num;
                                    if(num==1)
                                        {
                                        a[4]++;
                                        totalCost+=50000;
                                        }
                                    cout<<"Your Cost in Cart is \t\t"<<totalCost<<endl;
                                break;
                                }
                                case 3:
                                {
                                    cost[5]=82000;
                                    int num;
                                    cout<<"You chose Acer qvcmte-7th gen with BDT.82000.   Are you sure to buy.If 'Yes' Enter 1 else Any number\n";
                                    cin>>num;
                                    if(num==1){
                                        a[5]++;
                                        totalCost+=82000;
                                        }
                                    cout<<"Your Cost in Cart is \t\t"<<totalCost<<endl;
                                break;
                                }
                                default:{
                                    cout<<"Exit from Laptops Store\n";
                                break;
                                }
                            }
                            product.close();
                        }
                        else cout << "Unable to open file";
                    }
                else if(product_no=='c'){
                        int i=0;
                        string line;
                        ifstream product ("mobile.txt");
                        if (product.is_open())
                        {
                            while ( getline (product,line) )
                                {
                                cout << line << '\n';
                                }
                            int mobileChoice;
                            cout<<"\n\n please Select Your Product_ ";
                            cin>>mobileChoice;
                            switch(mobileChoice)
                            {
                                case 1:
                                {
                                    cost[6]=1100;
                                    int num;
                                    cout<<"You choose Nokia-1210 with BDT.1100.    Are you sure to buy? If 'Yes' Enter 1 else Any number\n";
                                    cin>>num;
                                    if(num==1)
                                        {
                                        a[6]++;
                                        totalCost+=1100;
                                        }
                                    cout<<"Your Cost in Cart is \t\t"<<totalCost<<endl;
                                break;
                                }
                                case 2:
                                {
                                    cost[7]=9866;
                                    int num;
                                    cout<<"You choose Lenovo-L6p2 with BDT.9866.   Are you sure to buy? If 'Yes' Enter 1 else Any number\n";
                                    cin>>num;
                                    if(num==1)
                                        {
                                        a[7]++;
                                        totalCost+=9866;
                                        }
                                    cout<<"Your Cost in Cart is \t\t"<<totalCost<<endl;
                                break;
                                }
                                case 3:
                                {
                                    cost[8]=12800;
                                    int num;
                                    cout<<"You choose Asus-x555a with BDT.12800.   Are you sure to buy? If 'Yes' Enter 1 else Any number\n";
                                    cin>>num;
                                    if(num==1)
                                        {
                                        a[8]++;
                                        totalCost+=12800;
                                        }
                                    cout<<"Your Cost in Cart is \t\t"<<totalCost<<endl;
                                break;
                                }
                                default:{
                                    cout<<"Exit from Mobile phones\n"<<endl;
                                break;
                                }
                            }
                            product.close();
                        }
                        else cout << "Unable to open file";
                    }

            cout<<"ID\t\tQuantity\tCost\n";
            for(i=0;i<9;i++){
                if(a[i]!=0){
                    cout<<i<<"\t\t  "<<a[i]<<"\t\t "<<(cost[i]*a[i])<<endl;
                }
            }
            cout<<"\nTotal Cost\t\t"<<totalCost<<endl;
            cout<<"If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n";
            cin>>h;
        }

        if(h==2)
        {
            int id;
            printf("Enter id to delete item\n");
            scanf("%d",&id);
            if(id<9&&id>0){
                totalCost=totalCost-(cost[id]*a[id]);
                a[id]=0;
            }
            else{
                printf("Enter Valid id\n");
            }
            printf("Revised Items \n");
            cout<<"ID\t\tQuantity\tCost\n";
            for(i=0;i<9;i++)
                {
                    if(a[i]!=0)
                    {
                    cout<<i<<"\t\t  "<<a[i]<<"\t\t "<<(cost[i]*a[i])<<endl;
                    }
                }
            cout<<"\nTotal Cost\t\t\t\t"<<totalCost<<endl;
            cout<<"If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n";
            cin>>h;
        }

    }while(h==1 || h==2);
        cout<<"Your Final Cost is           "<<totalCost;
        cout<<"\n\nThanks for Choosing Us and Visit us again.";


    fstream sellfile;              //for appending To sells Files


    char filename[ ] = "sell.txt";
    fstream appendFileToWorkWith;

    appendFileToWorkWith.open(filename, std::fstream::in | std::fstream::out | std::fstream::app);



    if (!appendFileToWorkWith )             // If file does not exist, Create new file
        {
            cout << "Cannot Open Sell file,  Sell file does not exist. Creating new file..";

            appendFileToWorkWith.open(filename,  fstream::in | fstream::out | fstream::trunc);
            appendFileToWorkWith <<"\n"<<endl;
            appendFileToWorkWith.close();
        }
    else                                    // for use existing file
        {
            cout<<"\n  Append Name, Phone no, Address and product Id to existing file"<<"\n---\n";

            appendFileToWorkWith<<"Name: \t"<< name<<endl;
            appendFileToWorkWith<<"Phone No: \t" << phone<<endl;
            appendFileToWorkWith<<"Address: \t" << address<<endl;
            appendFileToWorkWith <<"Product ID: \t"<< cart<<endl;
            appendFileToWorkWith <<"Total Cost: \t"<<totalCost<<"\n"<<endl;
            appendFileToWorkWith.close();
            cout<<"\n";
        }
    sellfile.close();
  }                             // End define function.

int main(){
    user p;
    p.admin();
    ecommerce e;                // Creating object using 'ecommerce' class

    e.ask();                    // Calling ask function by object 'e'
    e.define();                 // Calling define function by object 'e'
    getch();

}


                                        /******************************************/
                                        /*********     End Of Project     *********/
                                        /*********     Thanks to  you     *********/
                                        /******************************************/



