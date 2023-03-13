#include <iostream>
#include <string>
using namespace std;
int i,j,k,l,m,n,o;
string a,b,username,password, username1,password1="0",password2="0",password3="0",password4="0",password5="0",newpassword1,newpassword2,newpassword3,newpassword4,newpassword5;
struct Student {
    string name;
    string id;
    int attendance,attendance2,attendance3,attendance4,attendance5;
};

const int MAX_STUDENTS = 100;
Student students[MAX_STUDENTS];
int numStudents = 0;

void adminLogin() 
{
   cout << "Enter admin username: ";
    cin >> username;

    cout << "Enter admin password: ";
    cin >> password1;
    if (username == "coa" && password1 ==newpassword1) {
        cout<<"LOGGEDIN SUCCESSFULLY"<<endl;
        cout << "Student IDs and attendance records:" << endl;
        for (int i = 0; i < numStudents; i++) {
            cout << students[i].id << ": " << students[i].attendance << endl;
        }

        for (int i = 0; i < numStudents; i++) {
            int attendance;
            cout << "Enter attendance for student " << students[i].name << " (ID " << students[i].id << "): ";
            cin >> attendance;
            students[i].attendance = attendance;
        }
        cout << "Attendance has been updated." << endl;
   }
   else 
   {
        cout << "Please enter correct admin id and password " << endl;
   }

}
void adminlogin2() 
{  
     cout << "Enter admin username: ";
    cin >> username;

    cout << "Enter admin password: ";
    cin >> password2;
   
    if (username == "ade" && password2 == newpassword2) 
    {
        cout<<"LOGGEDIN SUCCESSFULLY"<<endl;
        cout << "Student IDs and attendance2 records:" << endl;
        for (int j = 0; j < numStudents; j++) {
            cout << students[j].id << ": " << students[j].attendance2 << endl;
        }

        for (int j = 0; j < numStudents; j++) {
            int attendance2;
            cout << "Enter attendance for student " << students[j].name << " (ID " << students[j].id << "): ";
            cin >> attendance2;
            students[j].attendance2 = attendance2;
        }
 
        cout << "Attendance has been updated." << endl;
   }
   else 
   {
        cout << "Please enter correct admin id and password " << endl;
   }

}
void adminlogin3() 
{
    cout << "Enter admin username: ";
    cin >> username;

    cout << "Enter admin password: ";
    cin >> password;
   
    if (username == "aec" && password3 == newpassword3) 
    {
        cout<<"LOGGEDIN SUCCESSFULLY"<<endl;
        cout << "Student IDs and attendance records:" << endl;
        for (int k = 0; k < numStudents; k++) {
            cout << students[k].id << ": " << students[k].attendance3 << endl;
        }

        for (int k = 0; k < numStudents; k++) {
            int attendance3;
            cout << "Enter attendance for student " << students[k].name << " (ID " << students[k].id << "): ";
            cin >> attendance3;
            students[k].attendance3 = attendance3;
        }
 
        cout << "Attendance has been updated." << endl;
   }
   else 
   {
        cout << "Please enter correct admin id and password " << endl;
   }

}
void adminlogin4() 
{
    cout << "Enter admin username: ";
    cin >> username;

    cout << "Enter admin password: ";
    cin >> password2;
   
    if (username == "math" && password4 == newpassword4) 
    {
        cout<<"LOGGEDIN SUCCESSFULLY"<<endl;
        cout << "Student IDs and attendance records:" << endl;
        for (int l = 0; l < numStudents; l++) {
            cout << students[j].id << ": " << students[j].attendance4 << endl;
        }

        for (int l = 0; l < numStudents; l++) {
            int attendance4;
            cout << "Enter attendance for student " << students[l].name << " (ID " << students[l].id << "): ";
            cin >> attendance4;
            students[l].attendance4 = attendance4;
        }
 
        cout << "Attendance has been updated." << endl;
   }
   else 
   {
        cout << "Please enter correct admin id and password " << endl;
   }

}
void adminlogin5() 
{
    cout << "Enter admin username: ";
    cin >> username;

    cout << "Enter admin password: ";
    cin >> password2;
   
    if (username == "dsa" && password5 == newpassword5) 
    {
        cout<<"LOGGEDIN SUCCESSFULLY"<<endl;
        cout << "Student IDs and attendance records:" << endl;
        for (int m = 0; m < numStudents; m++) {
            cout << students[m].id << ": " << students[m].attendance5 << endl;
        }

        for (int m = 0; m < numStudents; m++) {
            int attendance5;
            cout << "Enter attendance for student " << students[m].name << " (ID " << students[m].id << "): ";
            cin >> attendance5;
            students[m].attendance5 = attendance5;
        }
 
        cout << "Attendance has been updated." << endl;
   }
   else 
   {
        cout << "Please enter correct admin id and password " << endl;
   }

}
void studentLogin()
 {
    string id, name;

    cout << "Enter your ID: ";
    cin >> id;
    for (int i = 0; i < numStudents; i++) 
    {
        if (students[i].id == id) {
            name = students[i].name;
            int attendance = students[i].attendance;

            cout << "Name: " << name << endl;
            cout << "Your attendance in COA  : " << attendance << endl;
           
            break;
        }
    }
    for(int j=0;j<numStudents;j++)
    {
        if (students[j].id == id) 
        {
            int attendance2 = students[j].attendance2;
            cout << "Your attendance in ADE : " << attendance2 << endl;
        
            break;
        }
    }
    for(int k=0;k<numStudents;k++)
    {
        if (students[k].id == id)
        {
            int attendance3 = students[k].attendance3;
            cout << "Your attendance in AEC : " << attendance3 << endl;
        
            break;
        }
    }
    for(int l=0;l<numStudents;l++)
    {
        if (students[l].id == id)
        {
            name = students[l].name;
            int attendance4 = students[l].attendance4;
            cout << "Your attendance in MAT : " << attendance4 << endl;
        
            break;
        }
    }
    for(int m=0;m<numStudents;m++)
    {
        if (students[m].id == id)
        {
            int attendance5 = students[m].attendance5;
            cout << "Your attendance in DSA : " << attendance5 << endl;
        
            break;
        }
    }
    if (i == numStudents) {
        cout << "Student ID not found." << endl;
    }
}

int main() 
{
    cout << "<--------WELCOME TO ATTENDANCE READER APP-------> "<<endl;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        string name, id;
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter ID for student " << i + 1 << ": ";
        cin >> id;
        students[i] = {name, id, 0};
    }

    int choice;
    while (true)
    {
        cout << endl << "Select a login option:" << endl;
        cout << "1. Faculty Login" << endl;
        cout << "2. Student Login" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch (choice) 
        {
            case 1:
            cout<<"1 Login for coa"<<endl;
            cout<<"2 Login for ade"<<endl;
            cout<<"3 Login for aec"<<endl;
            cout<<"4 Login for math"<<endl;
            cout<<"5 Login for dsa"<<endl;
            cin>>n;
            switch(n)
            {
                case 0 : a:adminLogin(); break;
               
                case 1: cout<<"1 Login "<<endl;
                        cout<<"2 Update your Password"<<endl;
                        cin>>o;
                        switch(o)
                        {
                            case 1 :goto a;
                            case 2 :cout<<"Enter Your current Password"<<endl;
                                    cin>>a;
                                    if(a==password1)
                                    {
                                        cout<<"Enter Your new Password"<<endl;
                                        cin>>newpassword1;
                                        password1=newpassword1;
                                        cout<<"Password Updated Successfully"<<endl;
                                        goto a;
                                    }
                                    else{
                                        cout<<"Forgot Password?"<<endl;
                                        cout<<"Enter Your USERNAME"<<endl;
                                        cin>>b;
                                        if(b==username)
                                        {
                                            cout<<"Enter the new Password"<<endl;
                                            cin>>newpassword1;
                                            cout<<"Password Updated Successfully"<<endl;
                                            goto a;
                                        }
                                        else{
                                            cout<<"Please enter the correct username"<<endl;
                                        }
                                    }
                                    
                                    break;

                        }
                case -1 : b:adminlogin2(); break;
                case -2 : c:adminlogin3(); break;
                case -3 : d:adminlogin4(); break;
                case -4 : e:adminlogin5(); break;
                
                case 2: cout<<"1 Login "<<endl;
                        cout<<"2 Update your Password"<<endl;
                        cin>>o;
                        switch(o)
                        {
                            case 1 :goto b;
                            case 2 :cout<<"Enter Your current Password"<<endl;
                                    cin>>a;
                                    if(a==password2)
                                    {
                                        cout<<"Enter Your new Password"<<endl;
                                        cin>>newpassword2;
                                        password2=newpassword2;
                                        cout<<"Password Updated Successfully"<<endl;
                                        goto b;
                                    }
                                    else
                                    {
                                        cout<<"Forgot Password?"<<endl;
                                        cout<<"Enter Your USERNAME"<<endl;
                                        cin>>b;
                                        if(b==username)
                                        {
                                            cout<<"Enter the new Password"<<endl;
                                            cin>>newpassword2;
                                            cout<<"Password Updated Successfully"<<endl;
                                            goto b;
                                        }
                                        else{
                                            cout<<"Please enter the correct username"<<endl;
                                        }
                         }   break;        
                         }
                case 3: cout<<"1 Login "<<endl;
                        cout<<"2 Update your Password"<<endl;
                        cin>>o;
                        switch(o)
                        {
                            case 1 :goto c;
                            case 2 :cout<<"Enter Your current Password"<<endl;
                                    cin>>a;
                                    if(a==password3)
                                    {
                                        cout<<"Enter Your new Password"<<endl;
                                        cin>>newpassword3;
                                        password3=newpassword3;
                                        cout<<"Password Updated Successfully"<<endl;
                                        goto c;
                                    }
                                    else{
                                        cout<<"Forgot Password?"<<endl;
                                        cout<<"Enter Your USERNAME"<<endl;
                                        cin>>b;
                                        if(b==username)
                                        {
                                            cout<<"Enter the new Password"<<endl;
                                            cin>>newpassword3;
                                            cout<<"Password Updated Successfully"<<endl;
                                            goto c;
                                        }
                                        else{
                                            cout<<"Please enter the correct username"<<endl;
                                        }
                                    }break;}
                case 4: cout<<"1 Login "<<endl;
                        cout<<"2 Update your Password"<<endl;
                        cin>>o;
                        switch(o)
                        {
                            case 1 :goto d;
                            case 2 :cout<<"Enter Your current Password"<<endl;
                                    cin>>a;
                                    if(a==password4)
                                    {
                                        cout<<"Enter Your new Password"<<endl;
                                        cin>>newpassword4;
                                        password4=newpassword4;
                                        cout<<"Password Updated Successfully"<<endl;
                                        goto d;
                                    }
                                    else{
                                        cout<<"Forgot Password?"<<endl;
                                        cout<<"Enter Your USERNAME"<<endl;
                                        cin>>b;
                                        if(b==username)
                                        {
                                            cout<<"Enter the new Password"<<endl;
                                            cin>>newpassword4;
                                            cout<<"Password Updated Successfully"<<endl;
                                            goto d;
                                        }
                                        else{
                                            cout<<"Please enter the correct username"<<endl;
                                        }
                                    }break;}
                case 5: cout<<"1 Login "<<endl;
                        cout<<"2 Update your Password"<<endl;
                        cin>>o;
                        switch(o)
                        {
                            case 1 :goto e;
                            case 2 :cout<<"Enter Your current Password"<<endl;
                                    cin>>a;
                                    if(a==password5)
                                    {
                                        cout<<"Enter Your new Password"<<endl;
                                        cin>>newpassword5;
                                        password5=newpassword5;
                                        cout<<"Password Updated Successfully"<<endl;
                                        goto e;
                                    }
                                    else{
                                        cout<<"Forgot Password?"<<endl;
                                        cout<<"Enter Your USERNAME"<<endl;
                                        cin>>b;
                                        if(b==username)
                                        {
                                            cout<<"Enter the new Password"<<endl;
                                            cin>>newpassword5;
                                            cout<<"Password Updated Successfully"<<endl;
                                            goto e;
                                        }
                                        else{
                                            cout<<"Please enter the correct username"<<endl;
                                        }
                                    }break;}
            }
             break;
            case 2:
                studentLogin();
                break;
            
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
            

