//Header Files
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <time.h>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
class Traveller;

int K=10000000;
//Class definition for ticket
class ticket{
	 private:
   double Price;
	public:
	
	string Traveller_name;
	int id;
	string Destination;
    string Source;
	int date;
	int month;
	int year;
    int tno; 
    
	string getName(){
		return Traveller_name;
	}
	void getprice(){
		cout<<Price<<endl;
	}
	int getID(){
		return id;
	}
	double price(int d,int m,int y){
		Price=(double)tno*(double)K/(double)(date-d+(month-m)*30+(year-y)*365);
          return Price;
	}

	ticket(){}

}t; //object definition for ticket

class Traveller{
      public:
	  string name;
	  int id;

	  vector <ticket> arr;
      vector <ticket>::iterator it;
      
	  Traveller() {}
	  Traveller(string n,int i){
		name=n;
		id=i;
	  }

};
class Astronaut: public Traveller{
	         int Experience;
};
class Passenger: public Traveller{
	int validity;
};
class Commander: public Traveller{
      string authority;
};













int stT=0;
int stA=0;
int stC=0;

class SpaceTravel{
	public:
	 SpaceTravel();
	private:
     string Travellers[10];
	 string Astronaut;
	 string Commander;
     void Add_Traveller(string r){
            Travellers[stT]=r;
			stT++;
	 }
	 void Allot_Astronaut(string* a){
		Astronaut=a[stA];
		stA++;
	 }
     void Allot_Commander(string* c){
		Astronaut=c[stC];
		stC++;
	 }
	 void LAT(){
		for(int i=0;i<stT;i++){
			cout<<Travellers[i]<<endl;
		}
	 }
	 void updateA(string r){
		Astronaut=r;
	 }
	 void updateC(string r){
	    Commander=r;
	 } 
};

class planet{
	public:
	  int x;
	  int y;
	  int z;
	void setCoordinates(int a,int b,int c){
            x=a;
			y=b;
			z=c;
          
	}
    void getCoordinates(){
		    cout<<"x-coordinate = "<<x<<endl;
			cout<<"y-coordinate = "<<y<<endl;
			cout<<"z-coordinate = "<<z<<endl;
	}
};

//Main function
int main(){



	Traveller tra[18];
    tra[0]=Traveller("Logan",1345);
	tra[1]=Traveller("Jack",2345);
	tra[2]=Traveller("Tom",3345);
	tra[3]=Traveller("Jerry",4345);
	tra[4]=Traveller("Oggy",5345);
	tra[5]=Traveller("Doraemon",6345);
	tra[6]=Traveller("Nobita",7345);
	tra[7]=Traveller("Shizuka",80345);
	tra[8]=Traveller("Suneo",90345);
	tra[9]=Traveller("Gian",10345);
	tra[10]=Traveller("Phineas",11345);
	tra[11]=Traveller("Ferb",12345);
	tra[12]=Traveller("Rohan",13345);
	tra[13]=Traveller("Mohan",14345);
	tra[14]=Traveller("Sohan",15345);
	tra[15]=Traveller("Ram",16345);
	tra[16]=Traveller("Shyam",17345);
	tra[17]=Traveller("Pyare",18345);
     
	 planet Earth,Mars,Venus;
     Earth.setCoordinates(100,100,100);
	 Mars.setCoordinates(200,200,200);
	 Venus.setCoordinates(300,300,300);

	system("CLS");
	//Integer Declaration
	int ent, id, b;
    
    char ans;
    string s;
	//To display the system time.
	//Using time header file
	{time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	cout << "Time of the computer presently:";
	cout << "seconds= " << timePtr->tm_sec << endl;
	cout << "minutes = " << timePtr->tm_min << endl;
	cout << "hours = " << timePtr->tm_hour << endl;
	cout << "day of month = " << timePtr->tm_mday << endl;
	cout << "month of year = " << timePtr->tm_mon << endl;
	cout << "year = " << timePtr->tm_year + 1900 << endl;
	cout << "weekday = " << timePtr->tm_wday << endl;
	cout << "day of year = " << timePtr->tm_yday << endl;
	cout << "daylight savings = " << timePtr->tm_isdst << endl;
	}
	
	do{
        system("CLS");
        cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t    Space Transportation System";
		cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\n\t\t\t\t        Welcome!";	 																					
		cout<<"\n\n\t\t\t\t <1> Passenger";
		cout<<"\n\t\t\t\t <2> Astronaut";
		cout<<"\n\t\t\t\t <3> Commander";
		cout<<"\n\t\t\t\t <4> Exit \n\n";
		cout<<"\t\t\t\tEnter Your Type :"<<"\t";
		cin>>ent;
	switch(ent){
		      case 1:
              system("CLS");
                 cout<<"\n\t\t\t ----------------------------------";
		         cout<<"\n\t\t\t    Space Transportation System";
		         cout<<"\n\t\t\t ----------------------------------";
		         cout<<"\n\n\t\t\t\t        Welcome!";	 																					
		         cout<<"\n\n\t\t\t\t <1> Book a ticket";
		         cout<<"\n\t\t\t\t <2> Update a ticket";
		         cout<<"\n\t\t\t\t <3> Cancel a ticket";
		         cout<<"\n\t\t\t\t <4> Exit";
		         cout<<"\n\t\t\t\tEnter Your Choice :"<<"\t";
		         cin>>ent;
	                 switch(ent)
	                 {
	                 		
	                 	case 1: 
	                 	
	                 	            system("CLS");
                                    
	                 				cout<<"\n\n\t\t\t\t Enter your id: ";
	                 				cin>>id;
                                    for(int i=0;i<18;i++){
										if(tra[i].id==id){
											t.id=id;
											cout<<"\n\t\t\t\t\t Valid ID!"<<endl;
											t.Traveller_name=tra[i].name;
											cout<<"\n\t\t\t\t  Enter the date of travel:"<<"\t";
											cin>>t.date>>t.month>>t.year;
                                            cout<<"\n\n\t\t\t\tPlanets:";
	                 		                cout<<"\n\n\t\t\t\t 1. Earth";
	                 		                cout<<"\n\n\t\t\t\t 2. Mars";
	                 		                cout<<"\n\n\t\t\t\t 3. Venus\n";
                                            int q;
	                 		                cout<<"\n\t\t\t\t  Chose Your Destination:"<<"\t";
	                 		                
	                 		                cin>>q;
	                 		                switch(q){
	                 		                      case 1:
	                 			                      t.Destination="Earth";
                                                      break;
	                 			                  case 2:
	                 			                      t.Destination="Mars";
                                                      break;
	                 		                      case 3:
	                 			                      t.Destination="Venus";
                                                      break;
	                 		                    }
	                 		                cout<<"\n\t\t\t\t  Chose Your Source-Planet:"<<"\t";
	                 		                cin>>q;
	                 		                switch(q){
	                 			                   case 1:
	                 			                      t.Source="Earth";
                                                      break;
	                 			                  case 2:
	                 			                      t.Source="Mars";
                                                      break;
	                 		                      case 3:
	                 			                      t.Source="Venus";
                                                      break;
	                 		                     }
                                             
	                 				        cout<<"\n\n\t\t\t\t Enter the number of tickets you want to purchase:"<<"\t";
	                 				        cin>>t.tno;
											time_t T = time(NULL);
											 tm* dmy = localtime(&T);
                                            t.price((int)dmy->tm_mday,(int)dmy->tm_mon,(int)dmy->tm_year+1900);
                                            
                                             
                                             tra[i].arr.push_back(t);
											 
											system("CLS");
											cout<<"\n\n\n\t\t\t\t Ticket is booked.";
											cout<<"\n\t\t\t ----------------------------------";
                                            cout<<"\n\n\n\t\t\t\t  Your ticket is here: ";
											cout<<"\n\t\t\t\t ID		        :"<<t.id;
	                 				        cout<<"\n\t\t\t\t Name 		        :"<<t.Traveller_name;
											cout<<"\n\t\t\t\t Date of Travel    :"<<t.date<<"/"<<t.month<<"/"<<t.year;
											cout<<"\n\t\t\t\t Destination Planet:"<<t.Destination;
											cout<<"\n\t\t\t\t Source Planet 	:"<<t.Source;
	                 				        cout<<"\n\t\t\t\t Price 	        :";t.getprice();
	                 				     
                                            break;
									    }
										
									}
									       
	                 		cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
	                 		cin>>ans;
                            if(ans=='y')
				{
					system("CLS");
					break;
				}
				else
				{
					exit(0);
				}
	                 		system("CLS");
	                 		break;
                    
					    case 2:
						      
                                    system("CLS");

	                 				cout<<"\n\n\t\t\t\t Enter your id: ";
	                 				cin>>id;
                                    for(int i=0;i<18;i++){
										if(tra[i].id==id){
											
											cout<<"\n\t\t\t\t\t Valid ID!"<<endl;
											cout<<"\n\n\n\t\t\t\t  Currently you are having the following tickets: "<<endl;;
											for(int j=0;j<tra[i].arr.size();j++){
											cout<<"\t\t\t\tSr.No."<<j+1<<endl;	
											cout<<"\n\t\t\t\t ID		        :"<<tra[i].arr[j].id;
	                 				        cout<<"\n\t\t\t\t Name 		        :"<<tra[i].arr[j].Traveller_name;
											cout<<"\n\t\t\t\t Date of Travel    :"<<tra[i].arr[j].date<<"/"<<tra[i].arr[j].month<<"/"<<tra[i].arr[j].year;
											cout<<"\n\t\t\t\t Destination Planet:"<<tra[i].arr[j].Destination;
											cout<<"\n\t\t\t\t Source Planet 	:"<<tra[i].arr[j].Source;
	                 				        cout<<"\n\t\t\t\t Price 	        :";tra[i].arr[j].getprice();
											}
                                             int temp;
											cout<<"\n\t\t\t\t Chose the ticket you want to update:(give Sr.No.)";
											cin>>temp;

											cout<<"\n\t\t\t\t  Enter the date of travel:"<<"\t";
											cin>>tra[i].arr[temp-1].date>>tra[i].arr[temp-1].month>>tra[i].arr[temp-1].year;
                                            cout<<"\n\n\t\t\t\tPlanets:";
	                 		                cout<<"\n\n\t\t\t\t 1. Earth";
	                 		                cout<<"\n\n\t\t\t\t 2. Mars";
	                 		                cout<<"\n\n\t\t\t\t 3. Venus\n";
	                 		                cout<<"\n\t\t\t\t  Chose Your Destination:"<<"\t";
	                 		                int q;
	                 		                cin>>q;
	                 		                switch(q){
	                 		                      case 1:
	                 			                      tra[i].arr[temp-1].Destination="Earth";
                                                      break;
	                 			                  case 2:
	                 			                      tra[i].arr[temp-1].Destination="Mars";
                                                      break;
	                 		                      case 3:
	                 			                      tra[i].arr[temp-1].Destination="Venus";
                                                      break;
	                 		                    }
	                 		                cout<<"\n\t\t\t\t  Chose Your Source-Planet:"<<"\t";
	                 		                cin>>q;
	                 		                switch(q){
	                 			                  case 1:
	                 			                      tra[i].arr[temp-1].Source="Earth";
                                                      break;

	                 			                  case 2:
	                 			                      tra[i].arr[temp-1].Source="Mars";
                                                      break;
	                 		                      case 3:
	                 			                      tra[i].arr[temp-1].Source="Venus";
                                                      break;
	                 		                     }
                                             
	                 				        cout<<"\n\n\t\t\t\t Enter the number of tickets you want to purchase:"<<"\t";
	                 				        cin>>tra[i].arr[temp-1].tno;
                                            
                                             
											 time_t T = time(NULL);
											 tm* dmy = localtime(&T);
                                             tra[i].arr[temp-1].price((int)dmy->tm_mday,(int)dmy->tm_mon,(int)dmy->tm_year+1900);
											 system("CLS");
											 cout<<"\n\n\n\t\t\t\t Ticket is updated:";
											cout<<"\n\t\t\t ----------------------------------";
                                            cout<<"\n\n\n\t\t\t\t  Your updated ticket is here: ";
											cout<<"\n\t\t\t\t ID		        :"<<tra[i].arr[temp-1].id;
	                 				        cout<<"\n\t\t\t\t Name 		        :"<<tra[i].arr[temp-1].Traveller_name;
											cout<<"\n\t\t\t\t Date of Travel    :"<<tra[i].arr[temp-1].date<<"/"<<tra[i].arr[temp-1].month<<"/"<<tra[i].arr[temp-1].year;
											cout<<"\n\t\t\t\t Destination Planet:"<<tra[i].arr[temp-1].Destination;
											cout<<"\n\t\t\t\t Source Planet 	:"<<tra[i].arr[temp-1].Source;
	                 				        cout<<"\n\t\t\t\t Price 	        :";tra[i].arr[temp-1].getprice();
	                 				     
                                            break;
									    }
										
									}

							cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
	                 		cin>>ans;
                            if(ans=='y')
				{
					system("CLS");
					break;
				}
				else
				{
					exit(0);
				}
	                 		system("CLS");
	                 		break;
							  

                        case 3:
						          system("CLS");

	                 				cout<<"\n\n\t\t\t\t Enter your id: ";
	                 				cin>>id;
                                    for(int i=0;i<18;i++){
										                 if(tra[i].id==id){
										                 	cout<<"\n\t\t\t\t\t Valid ID!"<<endl;
										                 	cout<<"\n\n\n\t\t\t\t  Currently you are having the following tickets: ";
										                 	for(int j=0;j<tra[i].arr.size();j++){
										                 	cout<<"\t\t\t\tSr.No."<<j+1<<endl;		
										                 	cout<<"\n\t\t\t\t ID		        :"<<tra[i].arr[j].id;
	                 				                         cout<<"\n\t\t\t\t Name 		    :"<<tra[i].arr[j].Traveller_name;
										                 	cout<<"\n\t\t\t\t Date of Travel    :"<<tra[i].arr[j].date<<"/"<<tra[i].arr[j].month<<"/"<<tra[i].arr[j].year;
										                 	cout<<"\n\t\t\t\t Destination Planet:"<<tra[i].arr[j].Destination;
										                 	cout<<"\n\t\t\t\t Source Planet 	:"<<tra[i].arr[j].Source;
	                 				                         cout<<"\n\t\t\t\t Price 	        :";tra[i].arr[j].getprice();
										                 	}
                                                              int temp;
										                 	cout<<"\n\t\t\t\t Chose the ticket you want to cancel(give Sr.No.):"<<endl;
                                                            
										                 	cin>>temp;
                                                           tra[i].it=tra[i].arr.begin()+temp-1;
                                                           tra[i].arr.erase(tra[i].it);
                                                         
										                 	
                                                            break;
														 }

									}
										
							cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
	                 		cin>>ans;
                            if(ans=='y')
				{
					system("CLS");
					break;
				}
				else
				{
					exit(0);
				}
	                 		system("CLS");
	                 		break;
					    case 4: 
                        
	                 		cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
	                 		cin>>ans;
	                 		system("CLS");
	                 		break;
					} 
                    break;
               case 2:
               system("CLS");
                  cout<<"You don't need to book a ticket for flight.You are an astronaut"<<endl;
                  cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
	                 		cin>>ans;
	                 		
	                 		break;
                  
               case 3:
               system("CLS");
                  cout<<"You don't need to book a ticket for flight.You are a Commander"<<endl;
                  cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
	                 		cin>>ans;
	                 		
	                 		break;

	}
	}while(ans=='y');

}
	                 	




