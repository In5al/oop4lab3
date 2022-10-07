#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
using namespace std;

class Students{
public:
    string name[3]={"Dan","Bogdan","Dana"};
    int age;
    string sex[2]={"male","female"};
    };
class Week:public Students{
public:
    int nrh=0;
      void Wake(){
         cout<<"On specified day of the week we wake up early\n";
    }
       void Breakfast(){
         cout<<"On specified day of the week we drink and eat breakfast fast\n";
    }
       void SchoolL(){
        cout<<"On specified day of the week days we go to school\n";
    }
    void SLesson(){
         cout<<"On specified day of the week we have a specified number and type of lessons as well as breaks \n";
    }
    void GHome(){
         cout<<"On specified day of the week we go home at a specified time  \n";
    }
    void TDinner(){
         cout<<"On specified day of the week we eat different food on a different time \n";
    }
   void DHomework(){
         cout<<"On specified day of the week we do the work on different subjects and on a different time \n";
    }
    void GSleep(){
         cout<<"On specified day of the week we go to sleep on different times \n";
    }
    void Late(){
         cout<<"On specified day of the week we should be sleeping at this hour \n";
    }
 };
class Weekends:public Studets{
public:
    int nrc=0;


    void Wake(){
         cout<<"On specified day of the week we wake up late\n";
    }
    void Breakfast(){
         cout<<"On specified day of the week we drink and eat breakfast when we want as much as we want\n";
    }
    void SchoolL(){
        cout<<"On specified day of the week days we go to school\n";
    }
    void HomeS(){
        cout<<"On weekends we stay at home\n";
    }
    void HomeD(){
         cout<<"On specified day of the weeked we do specific tasks\n";
    }
    void Chores(){
         cout<<"On specified day of the weekend we do give time to certain house chores\n";
    }
   void LDinner(){
         cout<<"On specified day of the weekend we take the dinner on a specified time \n";
    }
    void GLSleep(){
         cout<<"On specified day of the weekend we go to sleep on different times \n";
  }
  void WLate(){
         cout<<"On specified day of the weekend at this hour we may be out partying \n";
    }
};


class SummerBreaks{
public:
  string Events[6]={"Valentines","Christmas","Easter","Halloween","ChildDay","EuropesDay"};
  string MoE[6]={"February","January","April","October","June","May"};
  string DoE[6]={"Fourteen","Seven","TwentySix","ThirtyOne","First","Eight"};

  SummerBreaks(){
      int re=rand()%8;
      int rm=rand()%8;
      int rd=rand()%8;
      cout<<"The  "<<Events[re]<<" its on "<<MoE[rm]<<" of "<<DoE[rd]<<endl;
  }
  };

class Monday:public Week{
public:
  Week nr;
  Monday(){
      int s=rand()%2,a=rand()%10,c=rand()%3;
      string name_c=name[c];
      string sex_s=sex[s];
      cout<<"The student name is "<<name_c<<" he is a "<<sex_s<<" and he/she is "<<age<<" years old"<<endl;
  }
   void Wake(){
         cout<<"On Monday "<<name_c<<" wakes up at six and prepares for a new week\n";
    }
       void Breakfast(){
         cout<<"On specified day of the week we drink and eat breakfast fast\n";
    }
       void SchoolL(){
        cout<<"On specified day of the week days we go to school\n";
    }
    void SLesson(){
         cout<<"On specified day of the week we have a specified number and type of lessons as well as breaks \n";
    }
    void GHome(){
         cout<<"On specified day of the week we go home at a specified time  \n";
    }
    void TDinner(){
         cout<<"On specified day of the week we eat different food on a different time \n";
    }
   void DHomework(){
         cout<<"On specified day of the week we do the work on different subjects and on a different time \n";
    }
    void GSleep(){
         cout<<"On specified day of the week we go to sleep on different times \n";
    }
     void Late(){
         cout<<"On specified day of the week we should be sleeping at this hour \n";
    }
 };
};
class Thursday:public Week{
public:
  Thursday(){
      int s=rand()%2,a=rand()%10,c=rand()%3;
      string name_c=name[c];
      string sex_s=sex[s];
      cout<<"The student name is "<<name_c<<" he is a "<<sex_s<<" and he/she is "<<age<<" years old"<<endl;
}

  void Wake(){
         cout<<"On Thursday "<<name_c<<" wakes up at six and he/she is ready for the new day\n";
    }
       void Breakfast(){
         cout<<"On specified day of the week we drink and eat breakfast fast\n";
    }
       void SchoolL(){
        cout<<"On specified day of the week days we go to school\n";
    }
    void SLesson(){
         cout<<"On specified day of the week we have a specified number and type of lessons as well as breaks \n";
    }
    void GHome(){
         cout<<"On specified day of the week we go home at a specified time  \n";
    }
    void TDinner(){
         cout<<"On specified day of the week we eat different food on a different time \n";
    }
   void DHomework(){
         cout<<"On specified day of the week we do the work on different subjects and on a different time \n";
    }
    void GSleep(){
         cout<<"On specified day of the week we go to sleep on different times \n";
    }
     void Late(){
         cout<<"On specified day of the week we should be sleeping at this hour \n";
    }
 };

};
class Wednesday:public Week{
public:
  Wednesday(){
      int s=rand()%2,a=rand()%10,c=rand()%3;
      string name_c=name[c];
      string sex_s=sex[s];
      cout<<"The student name is "<<name_c<<" he is a "<<sex_s<<" and he/she is "<<age<<" years old"<<endl;
  }
   void Wake(){
         cout<<"On Wednesday "<<name_c<<" wakes up at six and prepares for a new week\n";
    }
       void Breakfast(){
         cout<<"On specified day of the week we drink and eat breakfast fast\n";
    }
       void SchoolL(){
        cout<<"On specified day of the week days we go to school\n";
    }
    void SLesson(){
         cout<<"On specified day of the week we have a specified number and type of lessons as well as breaks \n";
    }
    void GHome(){
         cout<<"On specified day of the week we go home at a specified time  \n";
    }
    void TDinner(){
         cout<<"On specified day of the week we eat different food on a different time \n";
    }
   void DHomework(){
         cout<<"On specified day of the week we do the work on different subjects and on a different time \n";
    }
    void GSleep(){
         cout<<"On specified day of the week we go to sleep on different times \n";
    }
     void Late(){
         cout<<"On specified day of the week we should be sleeping at this hour \n";
    }
 };
};
class Tuesday:public Week{
 public:
  Tuesday(){
      int s=rand()%2,a=rand()%10,c=rand()%3;
      string name_c=name[c];
      string sex_s=sex[s];
      cout<<"The student name is "<<name_c<<" he is a "<<sex_s<<" and he/she is "<<age<<" years old"<<endl;
  }
   void Wake(){
         cout<<"On Tuesday "<<name_c<<" wakes up exhausted at six after a long night of working\n";
    }
       void Breakfast(){
         cout<<"On specified day of the week we drink and eat breakfast fast\n";
    }
       void SchoolL(){
        cout<<"On specified day of the week days we go to school\n";
    }
    void SLesson(){
         cout<<"On specified day of the week we have a specified number and type of lessons as well as breaks \n";
    }
    void GHome(){
         cout<<"On specified day of the week we go home at a specified time  \n";
    }
    void TDinner(){
         cout<<"On specified day of the week we eat different food on a different time \n";
    }
   void DHomework(){
         cout<<"On specified day of the week we do the work on different subjects and on a different time \n";
    }
    void GSleep(){
         cout<<"On specified day of the week we go to sleep on different times \n";
    }
     void Late(){
         cout<<"On specified day of the week we should be sleeping at this hour \n";
    }
};
class Friday:public Week{
public:
  Friday(){
      int s=rand()%2,a=rand()%10,c=rand()%3;
      string name_c=name[c];
      string sex_s=sex[s];
      cout<<"The student name is "<<name_c<<" he is a "<<sex_s<<" and he/she is "<<age<<" years old"<<endl;
  }

   void Wake(){
         cout<<"On Friday "<<name_c<<" wakes up at six happy knowing its the last day of the week \n";
    }
       void Breakfast(){
         cout<<"On specified day of the week we drink and eat breakfast fast\n";
    }
       void SchoolL(){
        cout<<"On specified day of the week days we go to school\n";
    }
    void SLesson(){
         cout<<"On specified day of the week we have a specified number and type of lessons as well as breaks \n";
    }
    void GHome(){
         cout<<"On specified day of the week we go home at a specified time  \n";
    }
    void TDinner(){
         cout<<"On specified day of the week we eat different food on a different time \n";
    }
   void DHomework(){
         cout<<"On specified day of the week we do the work on different subjects and on a different time \n";
    }
    void GSleep(){
         cout<<"On specified day of the week we go to sleep on different times \n";
    }
     void Late(){
         cout<<"On specified day of the week we should be sleeping at this hour \n";
    }
};
class Saturday:public Weekends{
public:
 Saturday(){
      int s=rand()%2,a=rand()%10,c=rand()%3;
      string name_c=name[c];
      string sex_s=sex[s];
      cout<<"The student name is "<<name_c<<" he is a "<<sex_s<<" and he/she is "<<age<<" years old"<<endl;
  }
  void Wake(){
         cout<<"On Saturday "<<name_c<<" wakes up at eleven taking his sweet time to get ready for a new day\n";
    }
       void Breakfast(){
         cout<<"On specified day of the week we drink and eat breakfast when we want as much as we want\n";
    }
       void SchoolL(){
        cout<<"On specified day of the week days we go to school\n";
    }
    void HomeS(){
        cout<<"On weekends we stay at home\n";
    }
    void HomeD(){
         cout<<"On specified day of the weeked we do specific tasks\n";
    }
    void Chores(){
         cout<<"On specified day of the weekend we do give time to certain house chores\n";
    }
   void LDinner(){
         cout<<"On specified day of the weekend we take the dinner on a specified time \n";
    }
    void GLSleep(){
         cout<<"On specified day of the weekend we go to sleep on different times \n";
    }
    void WLate(){
         cout<<"On specified day of the weekend at this hour we may be out partying \n";
    }
};
class Sunday:public Weekends{
public:
 Sunday(){
      int s=rand()%2,a=rand()%10,c=rand()%3;
      string name_c=name[c];
      string sex_s=sex[s];
      cout<<"The student name is "<<name_c<<" he is a "<<sex_s<<" and he/she is "<<age<<" years old"<<endl;
  }
  void Wake(){
         cout<<"On Sunday "<<name_c<<" wakes up at ten planning to continue the unfinished work from Saturday\n";
    }
       void Breakfast(){
         cout<<"On specified day of the week we drink and eat breakfast when we want as much as we want\n";
    }
       void SchoolL(){
        cout<<"On specified day of the week days we go to school\n";
    }
    void HomeS(){
        cout<<"On weekends we stay at home\n";
    }
    void HomeD(){
         cout<<"On specified day of the weekend we do specific tasks\n";
    }
    void Chores(){
         cout<<"On specified day of the weekend we do give time to certain house chores\n";
    }
   void LDinner(){
         cout<<"On specified day of the weekend we take the dinner on a specified time \n";
    }
    void GLSleep(){
         cout<<"On specified day of the weekend we go to sleep on different times \n";
    }
    void WLate(){
         cout<<"On specified day of the weekend at this hour we may be out partying \n";
    }
};


int main(){
srand(time(0));
Week numberh;
Weekends numberc;
SummerBreaks srbk;
Monday mon;
Thursday thu;
Wednesday wed;
Tuesday tue;
Friday  fri;
Saturday sat;
Sunday sun;
numberh.nrh=50;
numberc.nrc=50;
cout<<"\n Look up the schedule!\n";
/*
 while(1){
    int nr=rand()%8+1;
    if(nr==1){
        nr=rand()%8+1;
        if(nr==1){
            mon.Wake();
            numberh.nrh++;
        }
        else if(nr==2){
            mon.Breakfast();
            numberh.nrh++;

        }
        else if(nr==3){
            mon.SLesson();
            numberc.nrc++;

        }
        else if(nr==4){
            mon.GHome();
            numberc.nrc++;
        }
        else if(nr==5){
            mon.TDinner();
            numberh.nrh++;
        }
        else if(nr==6){
            mon.DHomework();
            numberc.nrc++;
        }
        else if(nr==7){
            mon.GSleep();
            numberc.nrc++;
        }
        else{
            mon.Late();
            numberc.nrc++;
        }
    }
    else if(nr==2){
        nr=rand()%8+1;
        if(nr==1){
            squir.Die();
            numberh.nrh--;
        }
        else if(nr==2){
            deer.Die();
            numberh.nrh--;
        }
        else if(nr==3){
            mar.Die();
            numberc.nrc--;
        }
        else if(nr==4){
            liza.Die();
            numberc.nrc--;
        }
        else if(nr==5){
            rabb.Die();
            numberh.nrh--;
        }
        else if(nr==6){
            auf.Die();
            numberc.nrc--;
        }
        else if(nr==7){
            fire.Die();
            numberc.nrc--;
        }
        else{
            griz.Die();
            numberc.nrc--;
        }
    }
    else if(nr==3){
        nr=rand()%3+1;
        if(nr==1){
            squir.Eat();
        }
        else if(nr==2){
            deer.Eat();
        }
        else{
            rabb.Eat();
        }
    }
    else if(nr==4){
        nr=rand()%5+1;
        if(nr==1){
            mar.Hunt();
            sleep(1);
            squir.Run();
            sleep(1);
            nr=rand()%2+1;
            if(nr==1){
                cout<<"The squirrel escaped\n";
            }
            else{
                cout<<"The marten caught the squirrel\n";
                numberh.nrh--;

            }
        }
        else if(nr==2){
            liza.Hunt();
        }
        else if(nr==3){
            auf.Hunt();
            sleep(1);
            deer.Run();
            sleep(1);
            nr=rand()%2+1;
            if(nr==1){
                cout<<"The deer escaped\n";
            }
            else{
                cout<<"The wolf caught the deer\n";
                numberh.nrh--;

            }
        }
        else if(nr==4){
            fire.Hunt();
            sleep(1);
            rabb.Run();
            sleep(1);
            nr=rand()%2+1;
            if(nr==1){
                cout<<"The rabbit escaped\n";
            }
            else{
                cout<<"The fox caught the rabbit\n";
                numberh.nrh--;

            }
        }
        else{
            griz.Hunt();
            sleep(1);
            deer.Run();
            sleep(1);
            nr=rand()%2+1;
            if(nr==1){
                cout<<"The deer escaped\n";
            }
            else{
                cout<<"The bear caught the deer\n";
                numberh.nrh--;

            }
        }
    }
    else if(nr==5){
        nr=rand()%4+1;
        if(nr==1){
            mar.Protect();
        }
        else if(nr==2){
            auf.Protect();
        }
        else if(nr==3){
            fire.Protect();
        }
        else {
            griz.Protect();
        }
    }
    else if(nr==6){
        bact.Decompose();
    }
    else if(nr==7){
        bfly.Pollinate();
    }
    else if(nr==8){
        griz.Eat();
    }
    else{
        rabb.Home();
    }
    sleep(1);
    if(numberh.nrh==60 or numberc.nrc==60 or numberh.nrh==40 or numberc.nrc==40 ){
        break;
    }
}
return 0;
}
*\
