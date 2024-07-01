#include<iostream>
#include<string>
#include<vector>
 using namespace std;
  //define a structure for personal information
  struct personalinfo
  {
    string name;
    int age;
    string email;
    string phone;
  };

// define a structure for projects
  struct Project {
    string name;
    string description;
    int year;
    string technologyused;
};


  int main()
  {
    personalinfo me={"viraj jadhav",18,"jadhavviraj043@gmail.com","+91 8766035667"};
    //update as per information 

   vector<Project> projects= {
        {"Project 1", "Dice Roller App ", 2021 , "Kotlin, java sdk"},
        {"Project 2", "Banksystem", 2023, "c, c++"},
        {"Project 3", "E-commerce website", 2024, "Html, css,javascript"},
        {"Project 4", "BMI calculator", 2024, "Html, css,javascript"}
    };

    int choice ;
    do
    {
        cout<<"=======About Me======\n";
        cout<<"1.About Me\n";
        cout<<"2.projects\n";
        cout<<"3.contact information\n";
        cout<<"4.Exit\n";
        cout<<"Enter the choice:";
        cin>>choice;

        switch(choice)
        {
            case 1:
             cout<<"====== About Me ======\n";
             cout<<"Name:"<<me.name<<"\n";
             cout<<"Age:"<<me.age<<"\n";
             cout<<"Email:"<<me.email<<"\n";
             cout<<"phone:"<<me.phone<<"\n\n";
             break;

            case 2:
               cout << "========== Projects ==========\n";
                  for (const Project& p : projects) {
                    cout << "Project Name: " << p.name << "\n";
                    cout << "Description: " << p.description << "\n";
                    cout << "Year: " << p.year << "\n";
                    cout << "Technologies Used: " << p.technologyused << "\n\n";
                }
                break;

        case 3:
           cout<<"====== Contact Information ======\n";
           cout<<"Email Id:"<<me.email<<"\n";
           cout<<"phone No:"<<me.phone<<"\n\n";
            break;
        case 4:
            cout<<"Exiting....\n";
            break;
           default:
            cout<<"invalid choice ,please try again.\n";
           

        }

    } while(choice!=4);
    return 0;
  }
  