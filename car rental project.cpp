#include <iostream>
using namespace std;

 int main() { int personal,payment;
 

    string brand [10] = {"Hyundai","BMW","Mercedes","Audi","Tesla"," hyundai","honda","Toyota","Ford"};

    string model [10]= {"2016MD","2018AS","2018DS","2017LA","2018OW","2005Ps","2008PW","2010QW","2016SA"};

    string color [10]={"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey"};

    string maxs_peed [10]={"100 Km/h ","150 Km/h","150 Km/h","170 Km/h","130 Km/h","140 Km/h","130 Km/h","120 Km/h","150 Km/h"};

    int price [ 10 ] ={10000,20000,30000,50000,2000,250000,400000,600,900} ;

    int date [10] = {2010,2012,2013,2017,2018,2005,2008,2010,2014};
		
	string userName;
    string userPassword;
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;

        if (userName == "admin" && userPassword == "admin pass")
        {
            cout << "Welcome admin!\n";
            break;
        }
        else if (userName == "user" && userPassword == "pass")
        {
            cout << "Welcome user!\n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

    cout << "Thank you for logging in.\n";



    
    int a,b,c,d,e,p;
    
    
    
	cout<<"Hyundai,BMW,Mercedes,Audi,Tesla, hyundai,honda,Toyota,Ford \n";
    cout<<"   chose form 0-8  \n";
        
        cout<<"----------------------------------------------\n";
cout<<"You Have Selected -\n"; 
cin>> a;
cout<<brand[a];

if(a==0||a==1||a==2||a==3||a==4||a==5||a==6||a==7||a==8){

}
else{
	cout<<"error \n";
	
}
cout<<"----------------------------------------\n";
cout<<"2016MD,2018AS,2018DS,2017LA,2018OW,2005Ps,2008PW,2010QW,2016SA \n";

cout<<"Model : \n";
cin>>b;
cout<<model[b];
 if(b==0||b==1||b==2||b==3||b==4||b==5||b==6||b==7||b==8){

}
cout<<"----------------------------------------\n";
cout<<"Red,black,yellow,Blue,Red,Brown,Silver,Black,grey";
 
 
cout<<"Color : ";
cin>>c;
cout<<color[c];
if(c==0||c==1||c==2||c==3||c==4||c==5||c==6||c==7||c==8){

}
cout<<"----------------------------------------\n";
cout<<"100 Km/h ,150 Km/h","150 Km/h","170 Km/h","130 Km/h","140 Km/h","130 Km/h","120 Km/h","150 Km/h";

cout<<"Maximum Speed : ";
cin>>d;
cout<<maxs_peed[d];
if(d==0||d==1||d==2||d==3||d==4||d==5||d==6||d==7||d==8){

}
cout<<"----------------------------------------\n";
cout<<"100,200,300,500,200,250,400,600,900\n";

if(a==0||a==1||a==2||a==3||a==4||a==5||a==6||a==7||a==8){
      
     cout<<"10000 rs for 1 day \n  50000 rs for 10 days \n 150,000 rs for 1 month \n";
			cin>>p;
     
     
} 


  
       cout<<"----------------------------------------\n";
       cout<<"Please Provide Your Personal Details  : \n";
       cout<<"----------------------------------------\n\n"; 
       cout<<"Enter Your Full Name : ";
       cin>>personal;
       
   

}
