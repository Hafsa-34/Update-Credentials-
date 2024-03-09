#include<iostream>
using namespace std;
int function(string& user_name, string& password)
{
	string n_user_name;
    string n_password;
	cout<<"Enter new user_name and password"<<endl;
	cout<<"New User_name: ";
	cin>>n_user_name;
	cout<<"New Password: ";
	cin>>n_password;
	user_name=n_user_name;
	password=n_password;
}
int main()
{
	string n_user_name;
	string n_password;
	
	string user_name="user123";
	string password="pass123";
	int opt;
	int i=1;
	do
	{
	cout<<"Enter user_name: "<<endl;
	cin>>user_name;
	cout<<"Enter password "<<endl;
	cin>>password;
	if(user_name=="user123" && password=="pass123")
	{
	cout<<"You have logged in successfully!"<<endl;
	cout<<"Choose any following options(1,2): "<<endl;
	cout<<"1. Change Password"<<endl;
	cout<<"2. Logout"<<endl;
	cin>>opt;
	if(opt==1)
	{
		function(user_name,password);
		cout << "Updated username: " << user_name << endl;
        cout << "Updated password: " << password << endl;
        return 0;
	}
	else if(opt==2)
	{
	cout<<"/*Logout*/";
	return 0;	
	}
	else
	{
		cout<<"Invalid option"<<endl;
	}
	}
	else
	{
		cout<<"Invalid user_name or password! Please try again"<<endl;
	}
    }
    while(user_name!="user123" && password!="pass123");
}
