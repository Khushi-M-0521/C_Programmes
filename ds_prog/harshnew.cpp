#include <iostream>
#include <string>
#define max 100
using namespace std;
int nStudents=max;

class Students
{
    public:
    string name;
    string id;
    int attendance[5]={0};
}s[max];

class Subject{
    public:
    string subject[5]={"COA","ADE","AEC","MATH","DSA"};
}sub;

class CreateData
{
    public:
    void static create()
    {
        //int nStudents;
        cout << "\nEnter the number of students: ";
        cin >> nStudents;

        for (int i = 0; i < nStudents; i++) 
        {
            cout << "Enter ID for student " << i + 1 << ": ";
            cin >> s[i].id;
            cout << "Enter name for student " << i + 1 << ": ";
            cin >> s[i].name;
        }

    }
};

class FacultyLogin
{
    public:
    static string username,password[5];
    void static Faculty()
    {
        int n,i;
        cout<<"Choose your subject: \n1. COA\n2. ADE\n3. AEC\n4. MATH\n5. DSA\n: ";
        cin>>i;
        cout<<"1 Login "<<endl;
        cout<<"2 Update your Password\n Choose:"<<endl;
        cin>>n;
        switch(n)
        {
            case 1: F_Login(i-1);
            case 2: update(i-1);
        }
    }

    void static F_Login(int i)
    {
        string user,pass;
        a:
        cout<<"Enter Username"<<endl;
        cin>>user;
        cout<<"Enter Password"<<endl;
        cin>>pass;
        if(user==sub.subject[i] && pass ==FacultyLogin::password[i])
        {
            cout<<"LOGGEDIN SUCCESSFULLY"<<endl;
            cout<<"Student Name and Attendance"<<endl;
            for(int j=0;j<nStudents;j++)
            {
                cout<<" "<<s[j].name<<" "<<s[j].attendance[i]<<endl;
            }
            cout<<"Update the attendance"<<endl;
            for(int j=0;j<nStudents;j++)
            {
                cout<<"Student Name "<<s[j].name<<"  ID("<<s[j].id<<")"<<endl;
                cin>>s[j].attendance[i];            
            }
        }
        else
        {
            cout<<"Incorrect Credentials Try Again!"<<endl;
            goto a;
        }
    }

    void static Forgot(int i)
    {   
        string b;
        do{
        cout<<"Enter Your USERNAME"<<endl;
        cin>>b;
        if(b!=sub.subject[i])
            cout<<"Please enter the correct username"<<endl;
        }while(b==sub.subject[i]);
        cout<<"Enter the new Password"<<endl;
        cin>>FacultyLogin::password[i];
        cout<<"Password Updated Successfully"<<endl;
    }

    void static update(int i)
    {
        string pass;

        do{
            cout<<"Enter Your current Password"<<endl;
            cin>>pass;
            if(pass!=FacultyLogin::password[i])
            {   cout<<"Wrong password.\nEnter 1. Try Again\t 2.Forgot Password?\n: ";
                cin>>i;
                if(i==2)
                    Forgot(i);
            }
        }while(pass!=FacultyLogin::password[i]);

        cout<<"Enter your new Password"<<endl;
        cin>>FacultyLogin::password[i];
        cout<<"Password Updated Successfully"<<endl;
        F_Login(i);
    }
};

class StudentLogin
{
    public : 
    void static S_Login()
    {
        string id;
        cout<<"Enter your Id :";
        cin>>id;
        for(int i=0;i<nStudents;i++)
            if(id==s[i].id)
            {
                cout<<"Your Name :"<<s[i].name;
                for (int j=0;j<5;j++)
                    cout<<"Subject :"<<sub.subject[j]<<":"<<s[i].attendance[j]<<endl;
            }
    }

};

string FacultyLogin::password[5]={"0","0","0","0","0"};
int main()
{
    CreateData::create();

   // for(int i=0;i<5;i++)
     //   FacultyLogin::password[i]="0";
    //FacultyLogin::password[5]={0};

    int choice;
    while (true)
    {
        cout << endl << "\nSelect a login option:" << endl;
        cout << "1. Faculty Login" << endl;
        cout << "2. Student Login" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch(choice)
        {
            case 1: FacultyLogin::Faculty();break;
            case 2: StudentLogin::S_Login();break;
            case 3: cout<<"Exit...\n";exit(0);
            default:cout<<"Invalid choice\n";
        }
    }
}