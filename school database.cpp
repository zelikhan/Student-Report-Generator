#include<iostream>//library to input data.
#include<string>//library for strings.
#include<fstream>//library for files.
using namespace std;
//Starting structure body.
struct student 
{
	//saving the attributes of student structure....!
	int std_id; 
	string std_firstname;
	string std_lastname;
	string std_dept;
	int p_marks, c_marks, m_marks, e_marks, cs_marks;
	double per,total, CGPA;
	//functions.
	void show_particular_data();	
	void searchstd_id(int std_id);
	void searchbystd_dpt(string std_dept);
}s[5];
int index=0;
bool spaceisfull()
{
	if(index==5)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//function defination............!
void stddata(int std_id,string std_firstname,string std_lastname,string std_dept,int p_marks,int c_marks,int m_marks,int e_marks,int cs_marks,double total,double CGPA,double per)
{
	//if IF-codition is true then run 1st statement
	if(spaceisfull())
	{
		cout<<"\n\n\t\t\t\t\t\t\t\a...........SORRY LIST IS FULL.........."<<endl;
	}
	//othervise run ELSE.
	else
	{
		s[index].std_id=std_id;//same index
		s[index].std_firstname=std_firstname;
		s[index].std_lastname=std_lastname;
		s[index].std_dept=std_dept;
		s[index].p_marks=p_marks;
		s[index].c_marks=c_marks;
		s[index].m_marks=m_marks;
		s[index].e_marks=e_marks;
		s[index].cs_marks=cs_marks;
		s[index].total=total;
		s[index].CGPA=CGPA;
		s[index].per=per;
		index++;//index increment...
	}
}
//function defination.
void searchstd_id(int std_id)
{
	if(spaceisfull())
	{
		cout<<"\n\a|||||||||||||||We are sorry|||||||||||||||"<<endl;
	}
	else
	{
		bool flag=true;
		for(int i=0;i<index;i++)
		{
			if(s[i].std_id==std_id)
			{
				cout<<"\n\t\t AIR UNIVERSITY STUDENT REPORT CARD";
				cout<<"\n\t\t Session : 2020-21";
				cout<<"\n-------------------------------------------------------------------------------";
				cout<<"\n\n Name  :"<<s[i].std_firstname <<"\t\t Last Name :"<<s[i].std_lastname<<"\t\t Depertment :"<<s[i].std_dept;
				cout<<"\n\n-------------------------------------------------------------------------------";
				cout<<"\n Subject\tTotal Mark\tPassing Mark\t Marks Obtained";
				cout<<"\n--------------------------------------------------------------------------------";
				cout<<"\n Physics\t100\t\t33\t\t\t"<<s[i].p_marks;
				cout<<"\n\n Chemistry\t100\t\t33\t\t\t"<<s[i].c_marks;
				cout<<"\n\n Maths\t\t100\t\t33\t\t\t"<<s[i].m_marks;
				cout<<"\n\n Computer\t100\t\t33\t\t\t"<<s[i].cs_marks;
				cout<<"\n\n English\t100\t\t33\t\t\t"<<s[i].e_marks;
				cout<<"\n\n--------------------------------------------------------------------------------";
				cout<<"\nTotal Marks : "<<s[i].total<<"/500"<<"\t"<<"\tPercentage : "<<s[i].per<<"\t"<<"\tCGPA :"<<s[i].CGPA;
				cout<<"\n------------------------------------------------------------------------------";
				flag=false;
				break;
		}	
	}
	if(flag)
	{
		cout<<"\n\a............No Data Exist of this ID SORRY...........\n"<<endl;
	}

}
}
//function body...!
void searchbystd_dpt(string std_dept)
{
	if(index==0)
	{
		cout<<"\n\t\t\a..........NO DEPT EXIST OF THIS NAME ..........\n"<<endl;
	}
	else
	{
		bool flag=true;
			for(int i=0;i<index;i++)
				{
					//compare the dept thatpreviously save on indexes....!
					if(s[i].std_dept.compare(std_dept)==0)
						{
							cout<<"\n===================================="<<endl;
							cout<<"\n  ..........STUDENT DATA........"<<endl;	
							cout<<"\n===================================="<<endl;
							cout<<"\nStudent Id :"<<s[i].std_id;
							cout<<"\nStudent First Name :"<<s[i].std_firstname;
							cout<<"\nStudent Last Name :"<<s[i].std_lastname;
							cout<<"\nStudent Department :"<<s[i].std_dept;
							cout<<"\nmarks in physics out of 100 :"<<s[i].p_marks;
							cout<<"\nmarks in chemistry out of 100 :"<<s[i].c_marks;
							cout<<"\nmarks in maths out of 100 :"<<s[i].m_marks;
							cout<<"\nmarks in english out of 100 :"<<s[i].e_marks;
							cout<<"\nmarks in computer science out of 100 :"<<s[i].cs_marks;
							cout<<"\nTotal marks of student :"<<s[i].total;
							cout<<"\nPercentage of student :"<<s[i].per;
							cout<<"\nCGPA of student :"<<s[i].CGPA;
							cout<<endl;
							cout<<"========================================="<<endl;
						}						
				}		
	}
}
int main()
{
	system("color 0C");
	cout<<"\t\t*********************************************"<<endl;
	cout<<"\t\t     STUDENT RECORD OF AIR UNIVERSITY"<<endl;
	cout<<"\t\t*********************************************"<<endl;
	cout<<"\n\n";
	cout<<"\t\t=>(PRESS 1 TO CREATE STUDENTT RECORD)<="<<endl;
	cout<<"\t\t=>(PRESS 2 TO PRINT PERTICULAR STUDENT RECORD)<="<<endl;
	cout<<"\t\t=>(PRESS 3 TO PRINT WHOLE DEPARTMENT RECORD)<="<<endl;
	cout<<"\t\t=>(PRESS 4 TO EXIT FROM THIS PROGRAM)<="<<endl;
	cout<<"\t\t*********************************************"<<endl;
	int x;
	do
	{
	cout<<"\n\n........Enter your choise.........\n";
	cout<<" <1-4> = ";
	cin>>x;
	//bool flag=true;
	switch(x)
	{
			case 1:
			{
				system("cls");
				int std_id;
				string std_firstname,std_lastname,std_dept;
				int p_marks, c_marks, m_marks, e_marks, cs_marks;
					cout<<"\nEnter The roll number of student = ";
					if(std_id>=30||std_id<=39)//ASCII table values
					{
						cin>>std_id;
					}
					else
					{
						cout<<"\n\aEnter correct id please........!";
					}
					cout<<"\nEnter The FIrst Name of student = ";
					cin>>std_firstname;
					cout<<"\nEnter your Last Name = ";
					cin>>std_lastname;
					cout<<"\nEnter the department of student = ";
					cin>>std_dept;
					cout<<"\nEnter The marks in physics out of 100 =  ";
					cin>>p_marks;
					cout<<"\nEnter The marks in chemistry out of 100 = ";
					cin>>c_marks;
					cout<<"\nEnter The marks in maths out of 100 = ";
					cin>>m_marks;
					cout<<"\nEnter The marks in english out of 100 = ";
					cin>>e_marks;
					cout<<"\nEnter The marks in computer science out of 100 = ";
					cin>>cs_marks;
					double total,per,CGPA;
					total=p_marks+ c_marks+ m_marks+ e_marks+ cs_marks;
					per=(p_marks+c_marks+m_marks+e_marks+cs_marks)*100/500;
					if(per>=90)
					CGPA=4;
					else if(per>=85)
					CGPA=3.7;
					else if(per>=80)
					CGPA=3.6;
					else if(per>=75)
					CGPA=3.5;
					else if(per>=70)
					CGPA=3.0;
					else if(per>=65)
					CGPA=2.7;
					else if(per>=60)
					CGPA=2.5;
					else if(per>=55)
					CGPA=2.3;
					else if(per>=50)
					CGPA=2.0;
					else if(per>=45)
					CGPA=1.7;
				//function call to line 32.....!
				stddata(std_id,std_firstname,std_lastname,std_dept,p_marks,c_marks,m_marks,e_marks,cs_marks,total,CGPA,per);
				break;
			}
		   case 2:
			{
				
				system("cls");
				int std_id;
					cout<<"Enter the Id of student that you want to print the record = ";
				cin>>std_id;
					cout<<"\n";
				//function call to line 58.....!
				searchstd_id(std_id);
				cout<<endl;
				break;
			}
			case 3:
			{
				system("cls");
				string std_dept;
					cout<<"Enter Department = ";
				cin>>std_dept;
					cout<<endl;
				//function call to line 98......!
				searchbystd_dpt(std_dept);
				break;	
			}	
			case 4:
			{
					system("cls");
					cout<<"\n\n\n\t\t\t\t\t\t\t .............SUBMITTED TO............"<<endl;
					cout<<"\n\n\n\t\t\t\t\t\t\t               *SIR KHWAJA BILAL* "<<endl;
					cout<<"\n\n\n\t\t\t\t\t\t\t .............GROUP MEMBERS............"<<endl;
					cout<<"\n\t\t\t\t\t\t\t\t   *IQRA NAZIR_205354"<<endl;
					cout<<"\n\t\t\t\t\t\t\t\t   *FATIMA MASOOD_205366:"<<endl;
					cout<<"\n\t\t\t\t\t\t\t\t  *MUZAMMIL SHOUKAT_205320"<<endl;
					cout<<"\n\n\n\t\t\t\t\t\t\t.........THANKS FOR USING OUR PROGRAM........."<<endl;
					cout<<"\n\t\t\t\t\t\t\t    .............EXIT............"<<endl;
				break;
			}	
			default:
				system("cls");
					cout<<"\n\n\n\t\t\aYou entered a invalid choice"<<endl;
				break;
	}
	}
	while(x!=4);
	return 0;			
}
//~~~~~~~~~~~~~~~~~~~~
//END OF THE PROJECT
//~~~~~~~~~~~~~~~~~~~~
