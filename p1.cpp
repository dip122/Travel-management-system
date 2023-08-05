#include<bits/stdc++.h>
#include<fstream>
#include<iomanip>
#include<chrono>
using namespace std;
void menu();

class Managemenu{

	protected:
		string username;//hide admin name

	public:
		Managemenu(){
			cout<<"\n\n\n\n\n\n\n\t Enter Your Name to continue"<<endl;
			cin>>username;
		//	system("CLS");
			menu();
		}

		~Managemenu(){}

};

class Customers{

	public:
		string name,gender,adress;
		long long age,mobileno;
		static int cusID;
		char all[5000];

		void getDetails(){
			
			// to all the things put in text file we have to use fstream library
			// now we will put the details of the customer to the file
			ofstream out("Customers.txt",ios :: app);{ // file opened in append mode...to add the details of the customers 
			cout<<"Enter Customer ID: ";
			cin>>cusID;
			cout<<"Enter Name: ";
			cin>> name;
			cout<<"Enter Mobile No: ";
			cin>>mobileno;
			cout<<"Enter Adress:";
			cin>>adress;
			cout<<"Enter Gender : ";
			cin>>gender;
			cout<<"Enter age: ";
			cin>>age;
			}

		//now print what we have put into the file ....so use out ....we have opend the customer.txt using creating out 
		       out<<"\nCustomer ID "<<cusID<<"\nname "<<name<<"\nage "<<age<<"\nMobile No "<<mobileno<<"\nAddress "<<adress<<"\nGender "<<gender<<endl;
	        	out.close();
	        	cout<<"\n Entered massage is Saved in the server\n"<<endl;
                }

		void printdetails(){

			ifstream in("Customers.txt");
			{
				if(!in){
					cout<<"File is not opend because there is an error in file"<<endl;
				}
				else 
				{
					while(!in.eof()){
						in.getline(all,5000);
						cout<<all<<endl;
					}
					//close the file 
					in.close();
				}
			}
		} 

};
int Customers :: cusID;

class Cabs{

	public:
		int cabchoice;
		int kilometers;
		float cabcost;
		static float lastcabcost;

		void cabdetails(){

			cout<<"we collaborated with the fastest,safest and smartest cab service around the country\n"<<endl;
			cout<<"----------------ABC Cabs----------------\n"<<endl;
			cout<<"1.Rent for a standered cab is -- RS->15 for 1 km"<<endl;
			cout<<"2.Rent for a luxury cab is------RS-> 25 for 1 km"<<endl;
			
			cout<<"\n"<<endl;

			cout<<"\n To calculate the cost of the journey: "<<endl;
			cout<<"Enter the cab details you need ? "<<endl;
			cin>>cabchoice;
			cout<<"Enter the kilometer you have to travel"<<endl;
			cin>>kilometers;

			int hirecab;
			if(cabchoice == 1){
				cabcost = kilometers*15;
				cout<<"\nYour tour cost in cab is "<<cabcost<<" rupees for a stndered cab"<<endl;
				cout<<"Press 1 to hire cab : or";
				cout<<"press 2 for another cab"<<endl;
				cin>>hirecab;

				system("CLS");

				if(hirecab == 1){
					lastcabcost = cabcost;
					cout<<"\nYou have succesfully hired Standared Cab"<<endl;
					cout<<"Goto menu and take the receipt"<<endl;
				}
				else if(hirecab == 2){
					cabdetails();
				}
				else{
					cout<<"\nInvalid input! Redirecting to the Previous menu\n Please wait!"<<endl;
					//sleep(999);
		//			system("CLS");
					cabdetails();
				}

			}
			else if(cabchoice == 2){
				cabcost = kilometers*25.0;
				cout<<"\nYout tour cost in cab is "<<cabcost<<" ruppees for a luxury cab"<<endl;
				cout<<"Press 1 to hire the cab : or";
				cout<<"Press 2 to select another cab: ";
				cin>>hirecab;

				system("CLS");
				if(hirecab ==1){
					lastcabcost = cabcost;
					cout<<"\nYou have successfully hired Luxury cab"<<endl;
					cout<<"Goto main menu and take the receipt"<<endl;
				}
				else if(hirecab == 2){
					cabdetails();
				}
				else{
					cout<<"InValid input! Redirecting to the Previous menu\n Please wait"<<endl;
					//sleep(1100);
		//			system("CLS");
					cabdetails();
				}
			}
			else{
				cout<<"Invalid input! Redirecting to main menu\n Please wait"<<endl;
				//Sleep(1100);
		//		system("CLS");
				//menu();
			}
			cout<<"\nPress 1 to Redirect to main menu: ";
			cin>>hirecab;
		//	system("CLS");
			//menu();
		}

};
float Cabs :: lastcabcost;

class Booking{


	public:
		int hotelchoice;
		int packchoice;
		static float hotelcost;

		void hotels(){

			string hotelNo[] = {"Summer hotel","Choice You","The Tiger"};
			for(int a=0;a<3;a++){
				cout<<(a+1)<<". Hotel --->"<<hotelNo[a]<<endl;
			}

			cout<<"\nCurrently we collaborated with above hotels"<<endl;

			cout<<"Press any key to back or\nEnter number of a hotel you want to book";
			cin>>hotelchoice;
		//	system("CLS");

			if(hotelchoice == 1){
				cout<<"----------------WELCOME TO HOTEL SUMMER HOTEL-----------------"<<endl;
				cout<<"ENjoy the  food drink and stay cool and get chilled in the summer sun"<<endl;
				cout<<"Packages offered by Summer Hotel\n"<<endl;
				cout<<"1 . Standared Pack";
				cout<<"\t All basic facilities ....You Need 5000-/ only"<<endl;
				cout<<" 2. premmium packages";
				cout<<"\tFor some Advanced facilities You have to pay 10000-/ only"<<endl;
				cout<<"3. Luxury Pack";
				cout<<"\t For more luxury pacakge you have to pay 15000-/ only"<<endl;

				cout<<"\nPress another key to back or\nEnter package number you want to book: ";
				cin>>packchoice;

				if(packchoice == 1){
					hotelcost = 5000.0;
					cout<<"You Have successfully book Standared pack of Summer Hotel"<<endl;
					cout<<"Go to main menu and take the receipt"<<endl;
				}
				else if(packchoice == 2){
					hotelcost = 10000.0;
					cout<<"You have successfully booked premium  pack of Summer Hotel"<<endl;
					cout<<"Go to main menu and take the Receipt"<<endl;
				}
				else if(packchoice == 3){
					hotelcost = 15000.0;
					cout<<"You Have successfully booked the Luxury Package of Summer Hotel"<<endl;
					cout<<"Go to main menu and take the receipt"<<endl;
				}
			}
			else if(hotelchoice == 2){
                                cout<<"----------------WELCOME TO HOTEL CHOICE YOU-----------------"<<endl;
                                cout<<"ENjoy the  food drink and stay cool and get chilled in the summer sun"<<endl;
                                cout<<"Packages offered by Summer Hotel\n"<<endl;
                                cout<<"1 . Standared Pack";
                                cout<<"\t All basic facilities ....You Need 10000-/ only"<<endl;
                                cout<<" 2. premmium packages";
                                cout<<"\tFor some Advanced facilities You have to pay 20000-/ only"<<endl;
                                cout<<"3. Luxury Pack";
                                cout<<"\t For more luxury pacakge you have to pay 25000-/ only"<<endl;

                                cout<<"\nPress another key to back or\nEnter package number you want to book: ";
                                cin>>packchoice;

                                if(packchoice == 1){
                                        hotelcost = 10000.0;
                                        cout<<"You Have successfully book Standared pack of choice you"<<endl;
                                        cout<<"Go to main menu and take the receipt"<<endl;
                                }
                                else if(packchoice == 2){
                                        hotelcost = 20000.0;
                                        cout<<"YOu have successfully booked premium  pack of choice you"<<endl;
                                        cout<<"Go to main menu and take the Receipt"<<endl;
                                }
                                else if(packchoice == 3){
                                        hotelcost = 25000.0;
                                        cout<<"You Have successfully booked the Luxury Package of choice you"<<endl;
                                        cout<<"Go to main menu and take the receipt"<<endl;
                                }

			}
			else if(hotelchoice == 3){
                                cout<<"----------------WELCOME TO HOTEL THE TIGER-----------------"<<endl;
                                cout<<"Ejoy the  food drink and stay cool and get chilled in the summer sun"<<endl;
                                cout<<"Packages offered by Summer Hotel\n"<<endl;
                                cout<<"1 . Standared Pack";
                                cout<<"\t All basic facilities ....You Need 5000-/ only"<<endl;

                                cout<<"\nPress another key to back or\nEnter package number you want to book: ";
                                cin>>packchoice;

                                if(packchoice == 1){
                                        hotelcost = 5000.0;
                                        cout<<"You Have successfully book Standared pack of The Tiger"<<endl;
                                        cout<<"Go to main menu and take the receipt"<<endl;
                                }
                                else{
					cout<<"Invalid input! Redirecting to the Previous menu\n Please wait!"<<endl;
		//			system("CLS");
					hotels();
				}
			}
			int gomenu;
			cout<<"Press 1 to redirect to main menu:";
			cin>>gomenu;
			if(gomenu == 1){
				menu();
			}
			else{
				menu();
			}

		}


};

float Booking :: hotelcost;

class Charges : public Booking,Cabs,Customers
{
	public:
		void printBill(){

			ofstream outf("receipt.txt");//we created receipt.txt and we write the following things below 
			{
				outf<<"-------------ABC Travel Agency-----------"<<endl;
				outf<<"---------------Receipt-----------------"<<endl;
				outf<<" ______________________________________"<<endl;
				outf<<"Customer IDS:"<<cusID<<endl;
				outf<<"Descriptions\t\t total"<<endl;
				outf<<"Hotel cost:\t\t"<<Booking::hotelcost<<endl;
				outf<<"Travel Cost\t\t"<<Cabs::lastcabcost<<endl;
				outf<<"_______________________________________"<<endl;
				outf<<"Total charge\t\t"<<Booking::hotelcost + Cabs::lastcabcost<<endl;
				outf<<"_______________________________________"<<endl;
				outf<<"-----------THANK--- YOU---------------"<<endl;
			}
			outf.close();
		}

		void showreceipt(){
			//now i want to show the bill which i have entered in receipt.txt
			ifstream inf("receipt.txt");
			{
				if(!inf){
					cout<<"File is not opened due to some error"<<endl;
				}
				else{
					while(!inf.eof()){
						inf.getline(all,5000);//I have created a string all[5000] in customer
					       //chareges is inheriting the customer , Booking and cabs class 	
						cout<<all<<endl;
					}
				}
			}
		}

};

void menu(){

	int mainchoice;
	int inchoice;
	int gotomenu;
	//main menu function for this programme
	cout<<"\t\t----------------ABC Trevels----------------\n"<<endl;
	cout<<"\t\t--------------Welcome to main menu------------\n"<<endl;

	cout<<"\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\tcustomer managemenet----1\t"<<endl;
	cout<<"\tCabs Management---------2\t"<<endl;
	cout<<"\tBookings Management-----3\t"<<endl;
	cout<<"\tCharges and Bills-------4\t"<<endl;
	cout<<"\tExit--------------------5\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\t----------------------------------------------"<<endl;

	cout<<"\nEnter Your Choice------>"<<endl;
	cin>>mainchoice;

	//make the object of the class
	Customers ob1;
	Booking ob2;
	Cabs ob3;
	Charges ob4;

	if(mainchoice == 1){

		cout<<"-------Customer---------"<<endl;
		cout<<"1. Enter New Customer\n"<<endl;
		cout<<"2. see Old Customer\n"<<endl;

		cout<<"\n Enter choice : "<<endl;
		cin>>inchoice;

	//	system("CLS");
		if(inchoice == 1){
			ob1.getDetails();
		}
		else if(inchoice == 2){
			ob1.printdetails();
		}
		else{
			cout<<"Invalid input! Redirecting to the main menu\t please wait"<<endl;
	//		sleep(1000);
	//		system("CLS");
			menu();
		}

		cout<<"\nPress 1 to Redirect to main menu\n"<<endl;
		cin>>gotomenu;
	//	system("CLS");
		if(gotomenu == 1){
			menu();
		}
		else{
			menu();
		}
	}
	else if(mainchoice == 2){//Cab choice 

		ob3.cabdetails();
	}
	else if(mainchoice == 3){//Booking choice
	        cout<<"---------Book Luxury Hotels using the System\t"<<endl;	
		ob2.hotels();
	}
	else if(mainchoice == 4){
		cout<<"----Get Receipt----\t"<<endl;
		ob4.printBill();
		cout<<"Your receipt is already printed You can get it from file path\n"<<endl;
		cout<<"To display receipt Enter 1: or Enter any other key to go to main menu\n"<<endl;

		cin>>gotomenu;
		if(gotomenu == 1){
	//		system("CLS");

			ob4.showreceipt();
			cout<<"Press 1 to Redirect to main menu\t"<<endl;
			cin>>gotomenu;

	//		system("CLS");
			if(gotomenu == 1){
				menu();
			}
			else menu();
		}
		else{
//
			system("CLS");
			menu();
		}
	}
	else if(mainchoice == 5){
		cout<<"----------GOOD BYE -----------\t"<<endl;
	//	sleep(1000);
//		system("CLS");
		menu();
	}
	else{
		cout<<"Invalid input ! Redirect to main menu----"<<endl;
	//	sleep(1000);
//		system("CLS");
		menu();
	}
//	system("CLS");
}

int main()
{
	Managemenu startobj;
	return 0;
}

