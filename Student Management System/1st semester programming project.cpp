#include<iostream>           
#include<conio.h>
#include<limits>           
#include<windows.h>        
using namespace std;                                                                                           
int size = 50;
int z;             
float sum,x,a,b;
float percentage;
int totalfee=400000;
struct Student{
	int ID;               
	float CGPA;          
	int fee;
	string name;
	string rollno;
	string fathername;
	string CNIC ;
	string phonenumber;
	string address;
	int semester;
	string department;
	string book;
	float percentage;
	int hostelfee;
	float GPA[10];
}
	student[100];        
	void insertstatic(){
    student[0].ID =1;
    student[0].name ="Anwaar-ul-haq";
    student[0].rollno  ="20014198-001";
    student[0].fathername ="Nassar";
    student[0].CNIC ="34201-7965478-6";
    student[0].phonenumber ="0300-45677801";
    student[0].address ="Gujrat";
    student[0].semester =3;
    student[0].department ="Software Engineering";
    student[0].hostelfee =29000;
   	student[0].GPA[0]= 3.2;
   	student[0].GPA[1] = 3.4;
   	student[0].GPA[2] = 3.6;
   	student[0].CGPA =3.4;
	student[0].percentage = 84.0541; 
   	student[0].fee =42000;
   	student[0].book ="3";
   	student[1].ID =2;
   	student[1].name ="Shahzad";
   	student[1].rollno  ="20014198-002";
   	student[1].fathername ="M.Ashraf";
   	student[1].CNIC ="34205-5654856-2";
   	student[1].phonenumber ="0300-45677802";
   	student[1].address ="Sialkot";
   	student[1].semester =1;
 	student[1].department ="Software Engineering";
    student[1].hostelfee = 27000;
   	student[1].GPA[0]=3.2;
    student[1].CGPA =3.2;
    student[1].percentage = 78.8889 ; 
	student[1].fee =43000;
    student[1].book ="2";
    student[2].ID =3;
    student[2].name ="Saqlain";
    student[2].rollno  ="20014198-003";
    student[2].fathername ="Aslam";
    student[2].CNIC ="34205-5654856-3";
    student[2].phonenumber ="0300-45677803";
    student[2].address ="Gujarnwala";
    student[2].semester =1;
    student[2].department ="Software Engineering";
    student[2].hostelfee = 26000;
    student[2].GPA[0] =2.6;
    student[2].CGPA =2.6;
    student[2].percentage = 62.7027 ; 
   	student[2].book ="jsvs";
    student[3].ID =4;
    student[3].name ="Sohail";
    student[3].rollno  ="20014198-004";
    student[3].fathername ="Saleem";
    student[3].CNIC ="34205-5654856-4";
    student[3].phonenumber ="0300-45677804";
    student[3].address ="Sialkot";
    student[3].semester =1;
    student[3].department ="Software Engineering";
    student[3].hostelfee =27000;
    student[3].GPA [0]=2.4;
    student[3].percentage = 58.6957 ; 
    student[3].CGPA =2.4;
    student[3].fee =42000;
    student[3].book ="10";
    student[4].ID =5;
   	student[4].name ="Armghan";
   	student[4].rollno  ="19014198-005";
   	student[4].fathername ="Rizwan";
   	student[4].CNIC ="34205-5654856-5";
   	student[4].phonenumber ="0300-45677805";
   	student[4].address ="Gujrat";
   	student[4].semester =1;
   	student[4].department ="Software Engineering";
    student[4].hostelfee =26000;
	student[4].GPA [0]=3.1;
    student[4].CGPA =3.1;
    student[4].percentage = 76.1111 ; 
    student[4].fee =42000;
    student[4].book ="12";
    student[5].ID =6;
    student[5].name ="Mubashir";
    student[5].rollno  ="20014198-006";
    student[5].fathername ="M.Hussain";
    student[5].CNIC ="34205-5654856-6";
    student[5].phonenumber ="0300-45677806";
	student[5].address ="Gujarnwala";
    student[5].semester =1;
    student[5].department ="Software Engineering";
    student[5].hostelfee = 26000;
	student[5].GPA [0]=2.9;
    student[5].CGPA =2.9;
    student[5].percentage = 70.5556 ; 
    student[5].fee =42000;
    student[5].book ="6";	
    student[6].ID =7;
    student[6].name ="Abdullah";
    student[6].rollno  ="20014198-007";
    student[6].fathername ="Nadeem";
    student[6].CNIC ="34205-5654856-7";
    student[6].phonenumber ="0300-45677807";
    student[6].address ="Gujrat";
    student[6].semester =1;
    student[6].department ="Software Engineering";
    student[6].hostelfee = 25000;
	student[6].GPA [0]=3.4;
    student[6].CGPA =3.4;
    student[6].percentage = 84.0541 ; 
    student[6].fee =44000;
    student[6].book ="8";
    student[7].ID =8;
    student[7].name ="Taimoor";
    student[7].rollno  ="20014198-008";
    student[7].fathername ="Arshad";
    student[7].CNIC ="34205-5654856-8";
    student[7].phonenumber ="0300-45677807";
    student[7].address ="Sialkot";
    student[7].semester =1;
    student[7].department ="Software Engineering";
    student[7].hostelfee = 29000;
	student[7].GPA [0]=2.8;
	student[7].CGPA =2.8;
	student[7].percentage = 68.1081 ; 
	student[7].fee =44000;
    student[7].book ="0";
    student[8].ID =9;
    student[8].name ="Dil sheer";
    student[8].rollno  ="19014198-009";
    student[8].fathername ="Gulam nabi";
    student[8].CNIC ="34205-5654856-9";
    student[8].phonenumber ="0300-45677808";
    student[8].address ="Gujrat";
    student[8].semester =1;
    student[8].department ="Software Engineering";
    student[8].hostelfee = 27000;
	student[8].GPA [0]=3.2;
    student[8].CGPA =3.2;
    student[8].percentage = 78.8889 ; 
	student[8].fee =48000;
    student[8].book ="4";
    student[9].ID =10;
    student[9].name ="Waheed";
    student[9].rollno  ="20014198-010";
    student[9].fathername ="M.Rabani";
    student[9].CNIC ="34205-5654856-10";
    student[9].phonenumber ="0300-45677809";
    student[9].address ="Gujrat";
    student[9].semester =1;
    student[9].department ="Software Engineering";
    student[9].hostelfee = 27000;
	student[9].GPA [0]=2.6;
	student[9].CGPA =2.6;
	student[9].percentage = 62.7027 ; 
    student[9].fee =47000;
    student[9].book ="3";
    student[10].ID =11;
    student[10].name ="Faqar";
    student[10].rollno  ="20014198-011";
    student[10].fathername ="Sageer Hussain";
    student[10].CNIC ="34205-5654856-11";
    student[10].phonenumber ="0300-456778011";
    student[10].address ="Gujarnwala";
    student[10].semester =1;
    student[10].hostelfee =29000;
    student[10].GPA [0]=3.1;
    student[10].CGPA =3.1;
    student[10].percentage = 76.1111 ; 
    student[10].fee =42000;
    student[10].book ="1";
    student[11].ID =12;
    student[11].name ="Ahmed";
    student[11].rollno  ="20014198-012";
    student[11].fathername ="Subhani";
    student[11].CNIC ="34205-5654856-13";
    student[11].phonenumber ="0300-456778012";
    student[11].address ="Sialkot";
    student[11].semester =1;
    student[11].department ="Software Engineering";
    student[11].hostelfee = 26000; 
	student[11].GPA [0]=3.4;
    student[11].CGPA =3.4;
    student[11].percentage = 84.0541 ; 
    student[11].fee =43000;
    student[11].book ="2";
    student[12].ID =13;
    student[12].name ="Ali Raza";
    student[12].rollno  ="20014198-013";
    student[12].fathername ="Asif Hussain";
    student[12].CNIC ="34205-5654888-13";
    student[12].phonenumber ="0300-456778013";
    student[12].address ="Jehlam";
    student[12].semester =1;
    student[12].department ="Software Engineering";
    student[12].hostelfee = 26000;
	student[12].GPA [0]=2.9;
    student[12].CGPA =2.9;
    student[12].percentage = 70.5556 ; 
    student[12].fee =46000;
    student[12].book ="2";
    student[13].ID =14;
    student[13].name ="Hashir";
    student[13].rollno  ="20014198-014";
    student[13].fathername ="Shafeeq";
    student[13].CNIC ="34205-5654856-14";
    student[13].phonenumber ="0300-456778014";
    student[13].address ="Gujrat";
    student[13].semester =1;
    student[13].department ="Software Engineering";
    student[13].hostelfee = 28000;
	student[13].GPA [0]=3.1;
    student[13].CGPA =3.1;
    student[13].percentage = 76.1111 ; 
    student[13].fee =46000;
    student[13].book ="7";
    student[14].ID =15;
    student[14].name ="Zeeshan";
    student[14].rollno  ="20014198-015";
    student[14].fathername ="M.Arif";
    student[14].CNIC ="34205-5654856-15";
    student[14].phonenumber ="0300-456778015";
    student[14].address ="Gujarnwala";
    student[14].semester =1;
    student[14].department ="Software Engineering";
    student[14].hostelfee = 27000;
	student[14].GPA [0]=2.5;
    student[14].CGPA =2.5;
    student[14].percentage = 60.0 ; 
    student[14].fee =45000;
    student[14].book ="8";
    student[15].ID =16;
    student[15].name ="Ahsan";
    student[15].rollno  ="20014198-016";
    student[15].fathername ="Junaid Ali";
    student[15].CNIC ="34205-5654856-16";
    student[15].phonenumber ="0300-456778016";
    student[15].address ="Sialkot";
    student[15].semester =1;
    student[15].department ="Software Engineering";
    student[15].hostelfee = 27000;
	student[15].GPA [1]=3.3;
    student[15].CGPA =3.3;
    student[15].percentage = 81.3513 ; 
    student[15].fee =43000;
    student[15].book ="9";
    student[16].ID =17;
    student[16].name ="Ali Hassan";
    student[16].rollno  ="20014198-017";
    student[16].fathername ="Mujtaba";
    student[16].CNIC ="34205-5654856-17";
    student[16].phonenumber ="0300-456778017";
    student[16].address ="Jehlam";
    student[16].semester =1;
    student[16].department ="Software Engineering";
    student[16].hostelfee = 24000;
	student[16].GPA [0]=3.1;
    student[16].CGPA =3.1;
    student[16].percentage = 76.1111 ; 
    student[16].fee =47000;
    student[16].book ="4";
    student[17].ID =18;
    student[17].name ="Amjad";
	student[17].rollno  ="20014198-018";
    student[17].fathername ="Adeel";
    student[17].CNIC ="34205-5654856-18";
    student[17].phonenumber ="0300-456778018";
    student[17].address ="Gujrat";
    student[17].semester =1;
    student[17].department ="Software Engineering";
	student[17].hostelfee = 26000;
	student[17].GPA [0]=2.8;
    student[17].CGPA =2.8;
    student[17].percentage = 68.1081 ; 
    student[17].fee =43000;
    student[17].book ="none";
    student[18].ID =19;
    student[18].name ="Tanveer";
    student[18].rollno  ="20014198-019";
    student[18].fathername ="Haider Ali";
    student[18].CNIC ="34205-5654856-19";
    student[18].phonenumber ="0300-456778019";
    student[18].address ="Gujarnwala";
    student[18].semester =1;
    student[18].department ="Software Engineering";
    student[18].hostelfee = 24000;
	student[18].GPA [0]=3.1;
    student[18].CGPA =3.1;
    student[18].percentage = 76.1111 ; 
    student[18].fee =43000;
    student[18].book ="4";
    student[19].ID =20;
    student[19].name ="Abdullah";
    student[19].rollno  ="20014198-020";
    student[19].fathername ="shahzad";
	student[19].CNIC ="34205-5654856-20";
    student[19].phonenumber ="0300-456778020";
    student[19].address ="Gujrat";
    student[19].semester =3;
    student[19].department ="Software Engineering";
    student[19].hostelfee = 28000;
	student[19].GPA [0]=3.4;
	student[19].GPA [1]=3.3;
	student[19].GPA [2]=3.2;
    student[19].CGPA =3.3;
    student[19].percentage = 81.3513 ; 
    student[19].fee =42000;
    student[19].book ="3";
    student[20].ID =21;
    student[20].name ="sheeraj-ul-haq";
    student[20].rollno  ="20014888-021";
    student[20].fathername ="Noor Muhammad";
    student[20].CNIC ="34201-7965478-6";
    student[20].phonenumber ="0300-4567801";
    student[20].address ="Gujrat";
    student[20].semester =3;
    student[20].department ="Software Engineering";
    student[20].hostelfee = 29000;
   	student[20].GPA[0]= 3.2;
   	student[20].GPA[1] = 3.4;
   	student[20].GPA[2] = 3.6;
   	student[20].CGPA =3.4;
   	student[20].percentage =  84.0541 ; 
   	student[20].fee =42000;
   	student[20].book ="6";
   	student[21].ID =22;
   	student[21].name ="Shahzad";
   	student[21].rollno  ="20014198-022";
   	student[21].fathername ="M.Ashraf";
   	student[21].CNIC ="34205-5654856-2";
   	student[21].phonenumber ="0300-45677802";
   	student[21].address ="Sialkot";
   	student[21].semester =1;
 	student[21].department ="Software Engineering";
    student[21].hostelfee = 27000;
   	student[21].GPA[0]=3.2;
    student[21].CGPA =3.2;
    student[21].percentage = 78.8889 ; 
    student[21].fee =43000;
    student[21].book ="6";
    student[22].ID =23;
    student[22].name ="Saqlain";
    student[22].rollno  ="20014198-023";
    student[22].fathername ="Aslam";
    student[22].CNIC ="34205-5654856-3";
    student[22].phonenumber ="0300-45677803";
    student[22].address ="Gujarnwala";
    student[22].semester =1;
    student[22].department ="Software Engineering";
    student[22].hostelfee = 25000;
    student[22].GPA[0] =2.60;
    student[22].CGPA =2.60;
    student[23].percentage = 62.7027 ; 
    student[22].address ="hjfjyrig";
   	student[22].book ="8";
    student[23].ID =24;
    student[23].name ="Sohail";
    student[23].rollno  ="20014198-024";
    student[23].fathername ="Saleem";
    student[23].CNIC ="34205-5654856-4";
    student[23].phonenumber ="0300-45677804";
    student[23].address ="Sialkot";
    student[23].semester =1;
    student[23].department ="Software Engineering";
    student[23].hostelfee = 26000;
    student[23].GPA [0]=2.4;
    student[23].CGPA =2.4;
    student[23].percentage = 58.6957 ; 
    student[23].fee =42000;
    student[23].book ="18";
    student[24].ID =25;
   	student[24].name ="Armghan";
   	student[24].rollno  ="20014198-025";
   	student[24].fathername ="Rizwan";
   	student[24].CNIC ="34205-5654856-5";
   	student[24].phonenumber ="0300-45677805";
   	student[24].address ="Gujrat";
   	student[24].semester =1;
   	student[24].department ="Software Engineering";
    student[24].hostelfee = 24000;
	student[24].GPA [0]=3.1;
    student[24].CGPA =3.1;
    student[24].percentage = 76.1111 ; 
    student[24].fee =42000;
    student[24].book ="5";
    student[25].ID =26;
    student[25].name ="Mubashir";
    student[25].rollno  ="20014198-026";
    student[25].fathername ="M.Hussain";
    student[25].CNIC ="34205-5654856-6";
    student[25].phonenumber ="0300-45677806";
	student[25].address ="Gujarnwala";
    student[25].semester =1;
    student[25].department ="Software Engineering";
    student[25].hostelfee = 27000;
	student[25].GPA [0]=2.9;
    student[25].CGPA =2.9;
    student[25].percentage = 70.5556 ; 
    student[25].fee =42000;
    student[25].book ="none";	
    student[26].ID =27;
    student[26].name ="Abdullah";
    student[26].rollno  ="20014198-027";
    student[26].fathername ="Nadeem";
    student[26].CNIC ="34205-5654856-7";
    student[26].phonenumber ="0300-45677807";
    student[26].address ="Gujrat";
    student[26].semester =1;
    student[26].department ="Software Engineering";
    student[26].hostelfee = 29000;
	student[26].GPA [0]=3.4;
    student[26].CGPA =3.4;
    student[26].percentage = 84.0541 ; 
    student[26].fee =44000;
    student[26].book ="5";
    student[27].ID =28;
    student[27].name ="Taimoor";
    student[27].rollno  ="20014198-028";
    student[27].fathername ="Arshad";
    student[27].CNIC ="34205-5654856-8";
    student[27].phonenumber ="0300-45677807";
    student[27].address ="Sialkot";
    student[27].semester =1;
    student[27].department ="Software Engineering";
    student[27].hostelfee = 27000;
	student[27].GPA [0]=2.8;
	student[27].CGPA =2.8;
	student[27].percentage = 68.1081 ; 
	student[27].fee =44000;
    student[27].book ="6";
    student[28].ID =29;
    student[28].name ="Dil sheer";
    student[28].rollno  ="20014198-029";
    student[28].fathername ="Gulam nabi";
    student[28].CNIC ="34205-5654856-9";
    student[28].phonenumber ="0300-45677808";
    student[28].address ="Gujrat";
    student[28].semester =1;
    student[28].department ="Software Engineering";
    student[28].hostelfee = 24000;
	student[28].GPA [0]=3.2;
    student[28].CGPA =3.2;
    student[28].percentage = 78.8889 ; 
	student[28].fee =48000;
    student[28].book ="6";
    student[29].ID =30;
    student[29].name ="Waheed";
    student[29].rollno  ="20014198-030";
    student[29].fathername ="M.Rabani";
    student[29].CNIC ="34205-5654856-10";
    student[29].phonenumber ="0300-45677809";
    student[29].address ="Gujrat";
    student[29].semester =1;
    student[29].department ="Software Engineering";
    student[29].hostelfee = 28000;
	student[29].GPA [0]=2.6;
	student[29].CGPA =2.6;
	student[29].percentage =  62.7027 ; 
    student[29].fee =47000;
    student[29].book ="3";
    student[30].ID =31;
    student[30].name ="Faqar";
    student[30].rollno  ="20014198-031";
    student[30].fathername ="Sageer Hussain";
    student[30].CNIC ="34205-5654856-11";
    student[30].phonenumber ="0300-456778011";
    student[30].address ="Gujarnwala";
    student[30].semester =1;
    student[30].department ="Software Engineering";
    student[30].hostelfee = 25000;
    student[30].GPA [0]=3.1;
    student[30].CGPA =3.1;
    student[30].percentage = 76.1111 ; 
    student[30].fee =42000;
    student[30].book ="1";
    student[31].ID =32;
    student[31].name ="Ahmed";
    student[31].rollno  ="20014198-032";
    student[31].fathername ="Subhani";
    student[31].CNIC ="34205-5654856-13";
    student[31].phonenumber ="0300-456778012";
    student[31].address ="Sialkot";
    student[31].semester =1;
    student[31].department ="Software Engineering";
    student[31].hostelfee = 26000;
	student[31].GPA [0]=3.4;
    student[31].CGPA =3.4;
    student[31].percentage = 84.0541 ;
    student[31].fee =43000;
    student[31].book =2;
    student[32].ID =33;
    student[32].name ="Ali shafi";
    student[32].rollno  ="20014198-033";
    student[32].fathername ="Asif Hussain";
    student[32].CNIC ="34205-5654856-13";
    student[32].phonenumber ="0300-456778013";
    student[32].address ="Jehlam";
    student[32].semester =1;
    student[32].department ="Software Engineering";
    student[32].hostelfee = 25000;
	student[32].GPA [0]=2.9;
    student[32].CGPA =2.9;
    student[32].percentage = 70.5556 ; 
    student[32].fee =46000;
    student[32].book =5;
    student[33].ID =34;
    student[33].name ="Hashmat";
    student[33].rollno  ="20014198-034";
    student[33].fathername ="Shafeeq";
    student[33].CNIC ="34205-5654856-14";
    student[33].phonenumber ="0300-456778014";
    student[33].address ="Gujrat";
    student[33].semester =1;
    student[33].department ="Software Engineering";
    student[33].hostelfee = 28000;
	student[33].GPA [0]=3.1;
    student[33].CGPA =3.1;
    student[33].percentage = 76.1111 ; 
    student[33].fee =46000;
    student[33].book ="7";
    student[34].ID =35;
    student[34].name ="Zaryab";
    student[34].rollno  ="20014198-035";
    student[34].fathername ="M.Arif";
    student[34].CNIC ="34205-5654856-15";
    student[34].phonenumber ="0300-456778015";
    student[34].address ="Gujarnwala";
    student[34].semester =1;
    student[34].department ="Software Engineering";
    student[34].hostelfee = 24000;
	student[34].GPA [0]=2.5;
    student[34].CGPA =2.5;
    student[34].percentage = 60.0 ; 
    student[34].fee =45000;
    student[34].book ="8";
    student[35].ID =36;
    student[35].name ="Ahsan";
    student[35].rollno  ="20014198-036";
    student[35].fathername ="Junaid Ali";
    student[35].CNIC ="34205-5654856-16";
    student[35].phonenumber ="0300-456778016";
    student[35].address ="Sialkot";
    student[35].semester =1;
    student[35].department ="Software Engineering";
    student[35].hostelfee = 24000;
	student[35].GPA [1]=3.3;
    student[35].CGPA =3.3;
    student[35].percentage = 81.3513 ; 
    student[35].fee =43000;
    student[35].book ="4";
    student[36].ID =37;
    student[36].name ="Ali Hassan";
    student[36].rollno  ="200014198-037";
    student[36].fathername ="Mujtaba";
    student[36].CNIC ="34205-5654856-17";
    student[36].phonenumber ="0300-456778017";
    student[36].address ="Jehlam";
    student[36].semester =1;
    student[36].department ="Software Engineering";
    student[36].hostelfee = 28000;
	student[36].GPA [0]=3.1;
    student[36].CGPA =3.1;
    student[36].percentage = 76.1111 ; 
    student[36].fee =47000;
    student[36].book ="9";
    student[37].ID =38;
    student[37].name ="Amjad";
	student[37].rollno  ="20014198-038";
    student[37].fathername ="Perwayz";
    student[37].CNIC ="34205-5654856-18";
    student[37].phonenumber ="0300-456778018";
    student[37].address ="Gujrat";
    student[37].semester =1;
    student[37].department ="Software Engineering";
	student[37].hostelfee = 0;
	student[37].GPA [0]=2.8;
    student[37].CGPA =2.8;
    student[37].percentage = 68.1081 ; 
    student[37].fee =43000;
    student[37].book ="none";
    student[38].ID =39;
    student[38].name ="Tanveer";
    student[38].rollno  ="20014198-039";
    student[38].fathername ="Haider Ali";
    student[38].CNIC ="34205-5654856-19";
    student[38].phonenumber ="0300-456778019";
    student[38].address ="Gujarnwala";
    student[38].semester =1;
    student[38].department ="Software Engineering";
    student[38].hostelfee = 27000;
	student[38].GPA [0]=3.1;
    student[38].CGPA =3.1;
    student[38].percentage = 76.1111 ; 
    student[38].fee =43000;
    student[38].book ="4";
    student[39].ID =40;
    student[39].name ="Taimoor";
    student[39].rollno  ="20014198-040";
    student[39].fathername ="shahzad";
	student[39].CNIC ="34205-5654856-20";
    student[39].phonenumber ="0300-456778020";
    student[39].address ="Gujrat";
    student[39].semester =3;
    student[39].department ="Software Engineering";
    student[39].hostelfee = 00;
	student[39].GPA [0]=3.4;
	student[39].GPA [1]=3.3;
	student[39].GPA [2]=3.2;
    student[39].CGPA =3.3;
    student[39].percentage = 81.3513 ; 
    student[39].fee =42000;
    student[38].book ="4";
    student[40].ID =41;
    student[40].name ="Faqar";
    student[40].rollno  ="20014198-041";
    student[40].fathername ="Sageer Hussain";
    student[40].CNIC ="34205-5654856-11";
    student[40].phonenumber ="0300-456778011";
    student[40].address ="Gujarnwala";
    student[40].semester =1;
    student[40].department ="Software Engineering";
    student[40].hostelfee = 24000;
    student[40].GPA [0]=3.1;
    student[40].CGPA =3.1;
    student[40].percentage = 76.1111 ; 
    student[40].fee =42000;
    student[40].book ="1";
    student[41].ID =42;
    student[41].name ="Syed Ahmed";
    student[41].rollno  ="20014198-042";
    student[41].fathername ="Subhani";
    student[41].CNIC ="34205-5654856-13";
    student[41].phonenumber ="0300-456778012";
    student[41].address ="Sialkot";
    student[41].semester =1;
    student[41].department ="Software Engineering";
    student[41].hostelfee = 24000;
	student[41].GPA [0]=3.4;
    student[41].CGPA =3.4;
    student[41].percentage = 84.0541 ; 
    student[41].fee =43000;
    student[41].book =2;
    student[42].ID =43;
    student[42].name ="Ali Mushtaq";
    student[42].rollno  ="20014198-043";
    student[42].fathername ="Zulfiqar Hussain";
    student[42].CNIC ="34205-5654856-13";
    student[42].phonenumber ="0300-456778013";
    student[42].address ="Jehlam";
    student[42].semester =1;
    student[42].department ="Software Engineering";
    student[42].hostelfee = 26000;
	student[42].GPA [0]=2.9;
    student[42].CGPA =2.9;
    student[42].percentage = 70.5556 ; 
    student[42].fee =46000;
    student[42].book =5;
    student[43].ID =44;
    student[43].name ="Azmat";
    student[43].rollno  ="20014198-044";
    student[43].fathername ="Shafqat";
    student[43].CNIC ="34205-5654856-14";
    student[43].phonenumber ="0300-456778014";
    student[43].address ="Gujrat";
    student[43].semester =1;
    student[43].department ="Software Engineering";
    student[43].hostelfee = 27000;
	student[43].GPA [0]=3.1;
    student[43].CGPA =3.1;
    student[43].percentage = 76.1111 ; 
    student[43].fee =46000;
    student[43].book ="7";
    student[44].ID =45;
    student[44].name ="Atif";
    student[44].rollno  ="20014198-045";
    student[44].fathername ="M.Arif";
    student[44].CNIC ="34205-5654856-15";
    student[44].phonenumber ="0300-456778015";
    student[44].address ="Gujarnwala";
    student[44].semester =1;
    student[44].department ="Software Engineering";
    student[44].hostelfee = 27000;
	student[44].GPA [0]=2.5;
    student[44].CGPA =2.5;
    student[44].percentage = 60.0 ; 
    student[44].fee =45000;
    student[44].book ="8";
    student[45].ID =46;
    student[45].name ="Ahsan";
    student[45].rollno  ="20014198-046";
    student[45].fathername ="Junaid Ali";
    student[45].CNIC ="34205-5654856-16";
    student[45].phonenumber ="0300-456778016";
    student[45].address ="Sialkot";
    student[45].semester =1;
    student[45].department ="Software Engineering";
    student[45].hostelfee = 27000;
	student[45].GPA [1]=3.3;
    student[45].CGPA =3.3;
    student[45].percentage = 81.3513 ; 
    student[45].fee =43000;
    student[45].book ="8";
    student[46].ID =47;
    student[46].name ="Saad";
    student[46].rollno  ="20014198-047";
    student[46].fathername ="Shahzaib";
    student[46].CNIC ="34205-5654856-17";
    student[46].phonenumber ="0300-456778017";
    student[46].address ="Jehlam";
    student[46].semester =1;
    student[46].department ="Software Engineering";
    student[46].hostelfee = 26000;
	student[46].GPA [0]=3.1;
    student[46].CGPA =3.1;
    student[46].percentage = 76.1111 ; 
    student[46].fee =47000;
    student[46].book ="9";
    student[47].ID =48;
    student[47].name ="Haroon";
	student[47].rollno  ="20014198-048";
    student[47].fathername ="Perwayz";
    student[47].CNIC ="34205-5654856-18";
    student[47].phonenumber ="0300-456778018";
    student[47].address ="Gujrat";
    student[47].semester =1;
    student[47].department ="Software Engineering";
	student[47].hostelfee = 25000;
	student[47].GPA [0]=2.8;
    student[47].CGPA =2.8;
    student[47].percentage = 68.1081 ; 
    student[47].fee =43000;
    student[47].book ="0";
    student[48].ID =49;
    student[48].name ="Usama";
    student[48].rollno  ="20014198-049";
    student[48].fathername ="Haider Ali";
    student[48].CNIC ="34205-5654856-19";
    student[48].phonenumber ="0300-456778019";
    student[48].address ="Gujarnwala";
    student[48].semester =1;
    student[48].department ="Software Engineering";
    student[48].hostelfee = 23000;
	student[48].GPA [0]=3.0;
    student[48].CGPA =3.0;
    student[48].percentage = 76.1111 ; 
    student[48].fee =43000;
    student[48].book ="4";
    student[49].ID =50;
    student[49].name ="Mohsin";
    student[49].rollno  ="20014198-050";
    student[49].fathername ="shahzad";
	student[49].CNIC ="34205-5654856-20";
    student[49].phonenumber ="0300-456778020";
    student[49].address ="Gujrat";
    student[49].semester =3;
    student[49].department ="Software Engineering";
    student[49].hostelfee = 23000;
	student[49].GPA [0]=3.4;
	student[49].GPA [1]=3.3;
	student[49].GPA [2]=3.2;
    student[49].CGPA =3.3;
	student[49].percentage = 81.3513 ; 
    student[49].fee =42000;
    student[49].book ="4";
}
 int fee(){
 	int remainfee;
	int sum=0;
	int feepaid;
	for(int i=1; i<=z ; i++){
	    int feepaid;
	    cout<<"\n\tEnter the amount of fee that you have paid in semester "<<i<<" : ";
	    cin>>feepaid;
	     sum = sum + feepaid;
	}	
	     	cout<<"\n\tRmaining fee: "<<totalfee-sum<<endl;
            a = totalfee - sum;
        	return a;
}
int hostel(){                                                                 
	int hostelfee;
	cout<<"\t\tWelcome to the Hostel"<<endl;
			int choose;
			cout<<"\t1-Hostel fee is 27,000.Rs per semester without Air Conditioner."<<endl;
			cout<<"\t2-Hostel fee is 40,000.Rs per semester with Air Conditioner."<<endl;
			cout<<"\tPress \"1\" for 1st choice and\"2\" for 2nd choice.";
			cin>>choose;
			switch(choose){
				case 1:{
					cout<<"\tYour hostel fee is 27,000.Rs."<<endl;
					return 27000;
					break;
				}
				case 2: {
					cout<<"\tYour hostel fee is 40,000.Rs."<<endl;
					
					return 40000;
					break;
					}
				case 3:
				default:
					cout<<"\n\tInvalid input!!"<<endl;
					cout<<"\tPlease enter numbers between 1  or 2!!"<<endl;
	}		
}
void gpacalculator(){
	sum=0.0;
	for(int i=0; i<=z-1 ; i++){
		int choice;
		cout<<"\n\t\tGPA CALCULATOR";
		cout<<"\n\tPress-> \"1\" to Calculate GPA (Subject wise)\n\tPress-> \"2\" to just Enter GPA OF Each Semester: ";
		cout<<"\n\t";
		cin>>choice;
		if(choice==1){
			const double A_Plus = 4.0;
    		const double A = 3.70;
			const double B_PLUS = 3.40;
			const double B = 3.0;
			const double B_MINUS = 2.50;
			const double C_PLUS = 2.00;
			const double C = 1.50;
			const double D = 1.00;               
			const double F = 0.0;
			string lettergrade;
 			double credit;
    		double caltimes = 0;
    		double totalcal = 0;
    		double totalcredit = 0;
    		double finalgpa = 0;
    		int option;  
 			while(true){           
        		cout<<"\n\tEnter letter grade: ";
        		cin>>lettergrade;
        		cin.ignore();
        		cout<<"\tEnter the course credit hours: ";
        		cin>>credit;
    			if(lettergrade == "a" || lettergrade == "A"){
					caltimes = credit * A_Plus;
				}
				else if(lettergrade == "a" || lettergrade == "A"){
					caltimes = credit * A;
				}
				else if(lettergrade == "b+" || lettergrade == "B+"){
					caltimes = credit * B_PLUS;
				}
				else if(lettergrade == "b" || lettergrade == "B"){
					caltimes = credit * B;
				}
				else if(lettergrade == "b-" || lettergrade == "B-"){
					caltimes = credit * B_MINUS;
				}
				else if(lettergrade == "c+" || lettergrade == "C+"){
					caltimes = credit * C_PLUS;
				}
				else if(lettergrade == "c" || lettergrade == "C"){
					caltimes = credit * C;
				}
				else if(lettergrade == "d" || lettergrade == "D"){
					caltimes = credit * D;
				}
				else if(lettergrade == "f" || lettergrade == "F"){
					caltimes = credit * F;
				}	   
				else{
					cout<<"\n\tInvaild Input...";
				}	             
          		totalcredit = totalcredit + credit;
          		totalcal = totalcal + caltimes;
          
		  		cout<<"\n\tDo you want to Enter Another Grade ( Press-> 1 - Yes, Press-> 2 - No): ";
		  		cin>>option;
		  		if(option == 1){
		  			continue;
		  		}
		  		else{
					break;
		  		}      
 			}        
    		finalgpa = totalcal/totalcredit;
        	cout<<"\n\tStudent's GPA of semester "<<i+1<<" = "<<finalgpa<<"\n\t";
        	student[size].GPA[i] = finalgpa;
		}
			if(choice==2){
				cout<<"\n\tEnter GPA of "<<i+1<<" semester: ";
				cin>>student[size].GPA[i];
		}
		sum = sum+student[size].GPA[i];
	}
}
float CGPA(){
	float cgpa ;
	cgpa = sum/z;
	cout<<cgpa;
	return cgpa;
}
float Percentage (float x){
	if(x>=3.63){
		percentage = (x - 0.3)/0.037;
	}
	else if(x>=3.25){
		percentage = (x - 0.29)/0.037;		
	}
	else if(x>=2.88){
		percentage = (x- 0.36)/0.036;
		
	}
	else if(x >=2.5){
		percentage = (x- 0.28)/0.037;
		
	}
	else if(x >=1.8){
		percentage = (x + 1.65)/0.069;
		
	}
	else if(x >=1){
		percentage = (x + 2.16)/0.079;
		
	}
	else if(x >=0){
		percentage = (x / 0.0248);
	}
	cout<<"\n\tPercentage = "<<percentage<<endl;
	return percentage;
}
void Enter (){
	int range;
	cout<<"\n\tEnter the Number of Students whom Data you Want to add :";
	cin>>range;
	int a=size;
	for(int i=size ; i<a+range; i++){
		student[i].ID=i+1;
		cout<<"\n\tID of the Student: "<<student[i].ID<<".\n";
		cout<<"\n\tEnter Name of the Student: ";
		cin.ignore();
		getline (cin , student[i].name);
		cout<<"\tEnter Roll No of the Student: ";
		getline (cin , student[i].rollno);
		cout<<"\tEnter Father Name of the Student: ";
		getline (cin , student[i].fathername);
		cout<<"\tEnter CNIC of the Student: ";
    	getline (cin , student[i].CNIC);	
		cout<<"\tEnter Phone number of the Student: ";
		getline (cin , student[i].phonenumber);	
		cout<<"\tEnter Address of the Student: ";
		getline (cin , student[i].address);
		cout<<"\tEnter Semester of the Student: ";	
		cin>>student[i].semester;
		z = student[i].semester;
		cout<<"\tEnter Department of the student: ";
		cin.ignore();
		getline (cin , student[i].department);
		char ch;
		cout<<"\n\tPress-> 1 if you Want to live in  Hostel \n\tPress-> Any other key to Exit: ";		
		cin>>ch;
		{
			if(ch=='1')
			student[i].hostelfee = hostel();
		else
			student[i].hostelfee = 0;
		}
		gpacalculator();
		cout<<"\n\tCGPA : ";
		x =	CGPA();
		student[i].CGPA = x;
		cout<<"\n\t";
		 b = Percentage (x);
		student[i].percentage = b;	
		cin.ignore();
		student[i].fee = fee();
		cout<<"\n\tEnter number of books that the student has taken from the library : ";
		cin>>(student[i].book);
		cin.ignore();
		cout << "\n\tPress any key to go back...";
		getch();
		size++;
		system("cls");
	}
}	
void show(){
	for(int i=0; i<size; i++){
    	cout<<"\t---------------------------------------------------"<<endl;
    	cout<<"\n\tID of the student: "<<student[i].ID<<endl;
		cout<<"\tName of the student: "<<student[i].name<<endl;
		cout<<"\tRoll no of the student: "<<student[i].rollno<<endl;
		cout<<"\tFather name of the student: "<<student[i].fathername<<endl;
		cout<<"\tCNIC of the student: "<<student[i].CNIC<<endl;
		cout<<"\tContact of the student: "<<student[i].phonenumber<<endl;
		cout<<"\tAddress of the student: "<<student[i].address<<endl;
		cout<<"\tSemester of the student: "<<student[i].semester<<endl;       
		cout<<"\tDepartment of the student: "<<student[i].department<<endl;	
		cout<<"\tHostel fee taken from the university: "<<student[i].hostelfee<<endl;
		z=student[i].semester;
		for(int j=0; j<z; j++){
			cout<<"\tGPA of the student in semester "<<j+1<<" is :"<<student[i].GPA[j]<<endl;
		}                 
		cout<<"\tCGPA of the student: "<<student[i].CGPA<<endl;
		cout<<"\tPercentage of student CGPA: "<<student[i].percentage<<endl;
		cout<<"\tFee of the student: "<<student[i].fee<<endl;                 
		cout<<"\tNumber of books that student has taken from the library: "<<student[i].book<<endl;
		cout<<"\t----------------------------------------------------\n\n";
	}
		cout << "\n\tPress any key to go back...";
		getch();
		system("cls");	
		
		if(size==0){
		cout<<"\n\tNO record found!!"<<endl;
		Sleep(2000);
		system("cls");
	}
}
void Search(){   
	string rollno;
	int a=1;
	cout<<"\n\tEnter the Roll No of the Student Whom you want to search: ";
	cin>>rollno;
	for(int i=0; i<size; i++){
		if(rollno==student[i].rollno){
			cout<<"\n\n\tName of the student: "<<student[i].name<<endl;
			cout<<"\tRoll no of the student: "<<student[i].rollno<<endl;
			cout<<"\tFather name of the student: "<<student[i].fathername<<endl;
			cout<<"\tCNIC of the student: "<<student[i].CNIC<<endl;
			cout<<"\tContact of the student: "<<student[i].phonenumber<<endl;
			cout<<"\tAddress of the student: "<<student[i].address<<endl;
			cout<<"\tSemester of the student: "<<student[i].semester<<endl;
			z=student[i].semester;
			for(int j=0; j<z; j++){
			cout<<"\tGPA of the student: "<<student[i].GPA[j]<<endl;
			} 
			cout<<"\tDepartment of the student: "<<student[i].department<<endl;
			cout<<"\tHostel fee from the university: "<<student[i].hostelfee<<endl;
			cout<<"\tCGPA of the student: "<<student[i].CGPA<<endl;
			cout<<"\tPercentage of CGPA: "<<student[i].percentage<<endl;
			cout<<"\tFee of the student: "<<student[i].fee<<endl;
			cout<<"\tNo of book that student has taken from the library: "<<student[i].book<<endl;
			a=-1;
			cout << "\n\tPress any key to go back...";
			getch();
			system("cls");
		}	                                         
	}
	if(a==1)
		cout<<"\n\tUser has entered invalid roll no!.";
		Sleep(2000);
		system("cls");
}
void Update(){
	string rollno; 
	int a=-1;               
	cout<<"\n\tEnter the roll no of student whose data you want to update: ";
	cin>>rollno;
	for(int i=0;i<size;i++){
		if(rollno==student[i].rollno){
			cout<<"\n\tName of the Student: "<<student[i].name<<endl;
			cout<<"\tRoll no of the Student: "<<student[i].rollno<<endl;
			cout<<"\tFather name of the Student: "<<student[i].fathername<<endl;
			cout<<"\tCNIC of the Student: "<<student[i].CNIC<<endl;
			cout<<"\tPhone No. of the Student: "<<student[i].phonenumber<<endl;
			cout<<"\tAddress of the Student: "<<student[i].address<<endl;
			cout<<"\tSemester of the Student: "<<student[i].semester<<endl;
			cout<<"\tDepartment of the Student: "<<student[i].department<<endl;
			cout<<"\tHostel fee of the Student: "<<student[i].hostelfee<<endl;
			z=student[i].semester;
			for(int j=0; j<z; j++){
				cout<<"\tGPA of the Student: "<<student[i].GPA[j]<<endl;
			}
			cout<<"\tCGPA of the student: "<<student[i].CGPA<<endl;
			cout<<"\tPercentage of students CGPA: "<<student[i].percentage<<endl;
			cout<<"\tFee of the student: "<<student[i].fee<<endl;
			cout<<"\tNo of book that student has taken from the library: "<<student[i].book<<endl;
			a=1;
			{	cout<<"\n\t\t Updated Data"<<endl;	
				cout<<"\n\n\tEnter name of the Student: ";
				cin.ignore();
				getline (cin , student[i].name);
				cout<<"\tEnter Roll no of the student: ";
				getline (cin , student[i].rollno);
				cout<<"\tEnter Father name of the student: ";
				getline (cin , student[i].fathername);
				cout<<"\tEnter CNIC of the student: ";
				getline (cin , student[i].CNIC);
				cout<<"\tEnter Phone number of the student: ";
				getline (cin , student[i].phonenumber);
				cout<<"\tEnter Address of the Student: ";
				getline (cin , student[i].address);
				cout<<"\tEnter department of the Student: ";
				cin.ignore();
				getline (cin , student[i].department);
	            char ch;
	          	cout<<"\tPress-> 1 if you Want to live in  Hostel \n\tPress-> Any other key to Exit: ";		
	        	cin>>ch;
				{
					if(ch=='1')
					student[i].hostelfee = hostel();
					else
					student[i].hostelfee = 0;
				}
				cout<<"\tEnter Semester of the Student: ";	
				cin>>student[i].semester;
				z = student[i].semester;
				gpacalculator();
				cout<<"\n\tCGPA of the Student : ";
				x =	CGPA();
				student[i].CGPA = x;
				cout<<"\n\t";
				b = Percentage (x);
				student[i].percentage = b;
				cin.ignore();
				student[i].fee = fee();	
				cout<<"\tEnter the number of books that you have taken from library : ";
				cin>>(student[i].book);
				cout << "\n\tPress any key to go back...";
				getch();
				system("cls");
    		}
  		}
	}
	if (a==-1){
	cout<<"\n\tInvalid ! roll no.";
    Sleep(3000);
	system("cls");
	}
}      
void Delete(){
	int a=-1,choice,j;
	cout<<"\n\t-> Press \"1\" to delete all record."<<endl;
	cout<<"\n\t-> Press \"2\" to delete specific record."<<endl;
	cout<<"\n\t";
	cin>>choice;
	if(choice==1){
		size=0;
		cout<<"\n\t->All record has been deleted..!!"<<endl;
		Sleep(3000);
		system("cls");
		a=0;
	}
	else if(choice==2){
    	string rollno;
		cout<<"\n\tEnter the Roll No of student which you want to delete: ";
		cin>>rollno;
		for(int i=0;i<size;i++){
			if(rollno==student[i].rollno){
				for( j=i;j<size-1;j++){
					student[j].ID = student[j+1].ID;
					student[j].name = student[j+1].name;
					student[j].rollno= student[j+1].rollno;
					student[j].fathername= student[j+1].fathername;
					student[j].phonenumber= student[j+1].phonenumber;
					student[j].semester= student[j+1].semester;
					student[j].CNIC=student[j+1].CNIC;
					student[j].address= student[j+1].address;
					student[j].hostelfee= student[j+1].hostelfee;
					student[j].book= student[j+1].book;
					for(int m=0;m<student[j+1].semester;m++)
					student[j].GPA[m]= student[j+1].GPA[m];
					student[j].CGPA= student[j+1].CGPA;
					student[j].department= student[j+1].department;
					student[j].fee= student[j+1].fee;
				}	
				a = j; 
				size= size-1;
				cout<<"\n\tYour desired record has been deleted.";
				Sleep(3000);
				system("cls");
			}
	  	}		
	}
	if(a==-1){
		cout<<"\n\tRecord not found.";
		Sleep(3000);
		system("cls");
    }
}
void greeting(){
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t     L O A D I N G\n";
	cout<<"\n\n\t\t";
	for(int i=1; i<=70; i++){
		char c = 219;
		Sleep(15);
		cout<<c;
	}
}
int main(){
    system("color B4");
   	greeting();
    system("CLS");
	insertstatic();
	char value;
	while(true){     
	    cout<<"\n\n\n\t\t\t\t***********STUDENT DATABASE MANAGMENT SYSTEM***********\t\t\t\n\n\n";
       	cout<<"\n\t-> Press \"1\" to Enter the Data of a New Student."<<endl;
	    cout<<"\t-> Press \"2\" to Show the Data of all the Students."<<endl;
	    cout<<"\t-> Press \"3\" to Search for the Data of the desired Student."<<endl;
	    cout<<"\t-> Press \"4\" to Update the Data of the Students."<<endl;
	    cout<<"\t-> Press \"5\" to Delete the Data of the Students."<<endl;
	    cout<<"\t-> Press \"6\" to Exit the program."<<endl;
	    cout<<"\n\n\t";
	    cout<<"Enter your choice here: ";
        value = getche();                       
	    system("CLS");          
		switch(value){
			case '1':
			Enter();          
			break;
			case '2':
			show();
    		break;
			case '3':
			Search();
			break;
			case '4':
			Update();
			break; 
			case '5':
			Delete();
			break;
			case '6':
			exit(0);
			break;
			default:
    		cout<<"\n\tInvalid input!!"<<endl;
			cout<<"\tPlease enter numerbs between 1 to 6!!"<<endl;
			Sleep(3000);
			system("cls");
		}
	}
return 0;
}
