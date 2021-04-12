
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
using namespace std;


class rep
{

	public:
	char sex,dname[30],name[30],test[30][30],widal_inter[30];
	char rec[10],repo[10],sample[25];
	long p_id;
	float age,amount,t_no,widalo,widalh,widalah,widalbh;
	float hb_read,tlc_read,esr_read,dlcn,dlcl,dlce,dlcm,dlcb;		
    float bsp,bsf,bsr,urea,cret, sbil,sgpt,sgot;
	
	rep()
	{
		hb_read=0;
		tlc_read=0;
		esr_read=0;
		dlcn=0;
		dlcl=0;
		dlce=0;
		dlcm=0;
		dlcb=0;
		widalo=0;
		widalh=0;
		widalah=0;
		widalbh=0;
		bsp=0;
		bsf=0;
		bsr=0;
		urea=0;
		cret=0;
		sbil=0;
		sgpt=0;
		sgot=0;
		sex='O';
	strcpy(sample,"null");
	strcpy(rec,"null");
	strcpy(repo,"null");
	strcpy(widal_inter,"null");
	strcpy(dname,"null");
	strcpy(name,"null");	
	for(int i=0;i<10;i++)
		{
		strcpy(test[i],"null");
		}	
	}
	
	void input_p();
	void search_p(int id);
	void search_d(char doc[8]);
	
	void hb();
	void tlc();
	void esr();
	void widal();
	void dlc();
	void bsfr();
	void bspr();
	void bsrr();
	void ure();
	void creat();
	void sbi();
	void got();
	void gpt();
	
	void report();
	void saverep();
	void showp();
	
	 
};

void rep::hb()
{
	cout<<"\n\tEnter the reading of hemoglobin :";
	cin>>hb_read;
}


void rep::tlc()
{
	cout<<"\n\tEnter the reading of tlc :";
	cin>>tlc_read;
}


void rep::esr()
{
	cout<<"\n\tEnter the reading of esr :";
	cin>>esr_read;
}

void rep::bspr()
{
	cout<<"\n\tEnter the reading of BSP :";
	cin>>bsp;
}

void rep::bsfr()
{
	cout<<"\n\tEnter the reading of BSF :";
	cin>>bsf;
}

void rep::bsrr()
{
	cout<<"\n\tEnter the reading of BSR :";
	cin>>bsr;
}

void rep::ure()
{
	cout<<"\n\tEnter the reading of UREA :";
	cin>>urea;
}
void rep::creat()
{
	cout<<"\n\tEnter the reading of CREATNINE :";
	cin>>cret;
}

void rep::sbi()
{
	cout<<"\n\tEnter the reading of SBILIRUBIN :";
	cin>>sbil;
}

void rep::got()
{
	cout<<"\n\tEnter the reading of SGOT :";
	cin>>sgot;
}

void rep::gpt()
{
	cout<<"\n\tEnter the reading of SGPT :";
	cin>>sgpt;
}

void rep::widal()
{
	char dummy[25];
	cout<<"\n\tWIDAL :";
	cout<<"\n\tEnter the no of + in S.typhi(O) :";
	cin>>widalo;
	cout<<"\tEnter the no of + in S.typhi(H) :";
	cin>>widalh;
	cout<<"\tEnter the no of + in S.paratyphiA(H) :";
	cin>>widalah;
	cout<<"\tEnter the no of + in S.paratyphiA(H) :";
	cin>>widalbh;
	cout<<"\tEnter the Interpretation :";
	cin.getline(dummy,5);
	cin.getline(widal_inter,30);
}

void rep::dlc()
{
	cout<<"\n\tDLC";
	cout<<"\n\tEnter the reading of neutro :";
	cin>>dlcn;
	
	cout<<"\tEnter the reading of lympho :";
	cin>>dlcl;
	
	cout<<"\tEnter the reading of esno :";
	cin>>dlce;
	
	cout<<"\tEnter the reading of mono :";
	cin>>dlcm;
	
	cout<<"\tEnter the reading of baso :";
	cin>>dlcb;
	
}

void rep::input_p()
{
	char dummy[25];
	cin.getline(dummy,5);
	strcpy(dummy,"null");
	cout<<"\t\tEnter  patient name :";
	cin.getline(name,30);
	cout<<"\t\tEnter patient id :";
	cin>>p_id;
	cout<<"\t\tEnter patient age :";
	cin>>age;
	cout<<"\t\tEnter gender of patient :";
	cin>>sex;
	cout<<"\t\tEnter doctor's name :";
	cin.getline(dummy,5);
	cin.getline(dname,30);
	cout<<"\t\tEnter the sample recieved date :";
	//cin.getline(dummy,25);
	cin.getline(rec,10);
	cout<<"\t\tEnter the sample repoted date :";
	//cin.getline(dummy,25);
	cin.getline(repo,10);
	cout<<"\t\tEnter the sample type :";
	//cin.getline(dummy,25);
	cin.getline(sample,25);
	system("cls");
	cout<<"\t\tEnter the no of tests :";
	cin>>t_no;
	cout<<"\t\tEnter the tests :";
	for(int i=0;i<t_no;i++)
	{
		cin>>test[i];
	}
	
}

int main()
{
	int value,searchid;
	char searchdoc[10];
	rep pat,p;
	pat.amount=0;
	int choice;
	
	system("cls");
	cout<<"\t\t\t WELCOME TO PATH_SOFT\n\n\n";
	cout<<"\t\t1.Add Patient\n\n";
	cout<<"\t\t2.Add Doctor\n\n";
	cout<<"\t\t3.Patient Detail\n\n";
	cout<<"\t\t4.Doctor Details\n\n";
	cout<<"\t\t5.Quit\n\n";
	
	cout<<"Enter your choice\n\n\t\t";

	cin>>choice;
	system("cls");
	
	switch(choice)
	{
	    case 1:pat.input_p();
		
		for(int i=0;i<pat.t_no;i++)
		{
			if(!strcmp(pat.test[i],"HB"))
			{
				pat.hb();
			}
			if(!strcmp(pat.test[i],"ESR"))
			{
				pat.esr();
			}
			if(!strcmp(pat.test[i],"WIDAL"))
			{
				pat.widal();
			}
			if(!strcmp(pat.test[i],"TLC"))
			{
				pat.tlc();
			}
			if(!strcmp(pat.test[i],"DLC"))
			{
				pat.dlc();
			}
			if(!strcmp(pat.test[i],"BSP"))
			{
				pat.bspr();
			}
			if(!strcmp(pat.test[i],"BSF"))
			{
				pat.bsfr();
			}
			if(!strcmp(pat.test[i],"BSR"))
			{
				pat.bsrr();
			}
			if(!strcmp(pat.test[i],"UREA"))
			{
				pat.ure();
			}
			if(!strcmp(pat.test[i],"CREATININE"))
			{
				pat.creat();
			}
			if(!strcmp(pat.test[i],"SBILIRUBIN"))
			{
				pat.sbi();
			}
			if(!strcmp(pat.test[i],"SGOT"))
			{
				pat.got();
			}
			if(!strcmp(pat.test[i],"SGPT"))
			{
				pat.gpt();
			}
		}
		
		
		pat.report();
		cout<<"\n\tPRESS 1. to PRINT other key to DISCARD REPORT : ";
		cin>>value;
		
		system("cls");
		if(value==1)
		{
			pat.saverep();
			system("notepad.exe report.txt");
			cout<<"\n\n\t\tPRINT SUCCESSFUL\n";
			cout<<"\n\t\tTOTAL AMOUNT :"<<pat.amount<<"\n";
			cout<<"\n\n\t";	
			pat.showp();
			getch();
			system("notepad /p report.txt");
		}
		
		break;
		
	/*	case 2:addd();
		break;*/
		
		case 3:
			cout<<"\n\t\tEnter the Patient_id:";
			cin>>searchid;
			system("cls");
			pat.search_p(searchid);
			
		break;
		
		case 4:
			cout<<"\n\t\tEnter the Doctors's Name:";
			cin>>searchdoc;
			pat.search_d(searchdoc);
		break;
		
	}
	
	system("cls");

}

void rep::showp()
{
	
	
	cout<<"PATIENT ID "<<p_id<<"\n\t\t "<<"NAME :"<<name<<"\n\t\t "<<"SEX :"<<sex<<"\n\t\t "<<"AGE :"<<age<<" \n\t\t"<<" DOCTOR'S NAME :"<<dname;
	cout<<"\n\t\tSAMPLE :"<<sample<<"\n\t\tRECV ON :"<<rec<<"\n\t\tREPORTED :"<<repo;
	if(hb_read!=0)
		cout<<"\n\t\t "<<"HB :"<<hb_read;
	
	if(tlc_read!=0)
		cout<<"\n\t\t "<<"TLC :"<<tlc_read;
	
	if(esr_read!=0)
		cout<<"\n\t\t "<<"ESR :"<<esr_read;
		
	if(bsp!=0)
		cout<<"\n\t\t "<<"BSP :"<<bsp;
		
	if(bsf!=0)
		cout<<"\n\t\t "<<"BSF :"<<bsf;
		
	if(bsr!=0)
		cout<<"\n\t\t "<<"BSR :"<<bsr;
		
	if(urea!=0)
		cout<<"\n\t\t "<<"UREA :"<<urea;
		
	if(cret!=0)
		cout<<"\n\t\t "<<"CREATNINE :"<<cret;
		
	if(sbil!=0)
		cout<<"\n\t\t "<<"SBILIRUBIN :"<<sbil;
		
	if(sgot!=0)
		cout<<"\n\t\t "<<"SGOT :"<<sgot;	
	
	if(sgpt!=0)
		cout<<"\n\t\t "<<"SGPT :"<<sgpt;
		
	if(strcmp(widal_inter,"null"))
	{
	
		cout<<"\n\t\t "<<"WIDAL :";
		cout<<"\n\tS.typhi(O)\t";
		for(int i=0;i<widalo;i++)
		cout<<" +";
		for(int i=widalo;i<6;i++)
		cout<<" -";
		cout<<"\n\tS.typhi(H)\t";
		for(int i=0;i<widalh;i++)
		cout<<" +";
		for(int i=widalh;i<6;i++)
		cout<<" -";
		cout<<"\n\tS.paratyphiA(H)\t";
		for(int i=0;i<widalah;i++)
		cout<<" +";
		for(int i=widalah;i<6;i++)
		cout<<" -";
		cout<<"\n\tS.paratyphiB(H)\t";
		for(int i=0;i<widalbh;i++)
		cout<<" +";
		for(int i=widalbh;i<6;i++)
		cout<<" -";
		
		cout<<"\n\t\tINTERPRETAION "<<widal_inter;
	}
	
	if(dlcb!=0)
	{
	
		cout<<"\t\n\tNeutrophils :";
		cout<<dlcn;
	
		cout<<"\t\n\tLymphocytes :";
		cout<<dlcl;
	
		cout<<"\t\n\tEosinophils :";
		cout<<dlce;
	
		cout<<"\t\n\tMonocytes :";
		cout<<dlcm;
	
		cout<<"\t\n\tBasophils :";
		cout<<dlcb;
	}
	cout<<endl<<endl;	
}

	void rep:: report()
{
	int c,countb=0,counts=0,counth=0; 
	
	ofstream fout;
	fout.open("report.txt",ios::out);
	fout<<"Patient's Name :"<<name<<"\t\t\t\t\tAge/Sex :"<<age<<"/"<<sex;
	fout<<"\nRef by Dr. :"<<dname;
	//if(dnamesize()<=12)
	//fout<<"\t";
	fout<<"\t\tRecv on :"<<rec<<"\tRepotes :"<<repo;
	fout<<"\nTests :";
	for(int i=0;i<t_no-1;i++)
	fout<<test[i]<<",";
	c=t_no-1;
	fout<<test[c]<<".";
	fout<<"\t\t\t\t\tSample :"<<sample;
	

	
	for(int i=0;i<t_no;i++)
		{	

			
			if(!strcmp(test[i],"HB"))
			{
				if(counth==0)
				{
				fout<<"\n\n\n\t\t\tHAEMTOLOGY REPORT";
				counth=1;
				fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
				}
				fout<<"\n\tHB\t\t\t"<<hb_read<<"\t\tgm/dl"<<"\t\t12-18";
				amount=amount+50;
			}
			if(!strcmp(test[i],"ESR"))
			{
				if(counth==0)
				{
				fout<<"\n\n\n\t\t\tHAEMTOLOGY REPORT";
				counth=1;
					fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
				}
				fout<<"\n\tESR\t\t\t"<<esr_read<<"\tmm at the end of 1st hr"<<"\t00-20";
				amount=amount+50;
			}
			
			if(!strcmp(test[i],"TLC"))
			{
				if(counth==0)
				{
				fout<<"\n\n\n\t\t\tHAEMTOLOGY REPORT";
				counth=1;
					fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
				}				
				
				fout<<"\n\tTLC\t\t\t"<<tlc_read<<"\t\t/cmm"<<"\t\t(4-10)*10^3";
				amount=amount+50;
			}
			if(!strcmp(test[i],"DLC"))
			{
				if(counth==0)
				{
				fout<<"\n\n\n\t\t\tHAEMTOLOGY REPORT";
				counth=1;
					fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
				}				
				fout<<"\n\tDLC ";
				fout<<"\n\tNeutrophils :\t\t"<<dlcn<<"\t\t%"<<"\t\t40-75";
	
				fout<<"\n\tLymphocytes :\t\t"<<dlcl<<"\t\t%"<<"\t\t20-40";
	
				fout<<"\n\tEosinophils :\t\t"<<dlce<<"\t\t%"<<"\t\t01-06";
	
				fout<<"\n\tMonocytes :\t\t"<<dlcm<<"\t\t%"<<"\t\t02-10";
	
				fout<<"\n\tBasophils :\t\t"<<dlcb<<"\t\t%"<<"\t\t00-01";
			
				amount=amount+50;
			}
			
		}
		fout<<"\n";
		
		for(int i=0;i<t_no;i++)
		{	
		
				if(!strcmp(test[i],"BSP"))
				{
					if(countb==0)
					{
					fout<<"\n\n\n\t\t\t\tBIOCHEMISTRY REPORT";
					countb=1;
						fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
					}		
				fout<<"\n\tB-Sugar-P\t\t\t"<<bsp<<"\t\tmg/dl"<<"\t\t110-160";
				amount=amount+50;
				}
				if(!strcmp(test[i],"BSF"))
				{
									
					if(countb==0)
					{
					fout<<"\n\n\n\t\t\t\tBIOCHEMISTRY REPORT";
					countb=1;
						fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
					}		
				fout<<"\n\tB-Sugar-F\t\t\t"<<bsf<<"\t\tmg/dl"<<"\t\t60-110";
				amount=amount+50;
				}
				if(!strcmp(test[i],"BSR"))
				{
													
					if(countb==0)
					{
					fout<<"\n\n\n\t\t\tBIOCHEMISTRY REPORT";
					countb=1;
						fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
					}		
				fout<<"\n\tB-Sugar-R\t\t\t"<<bsr<"\t\tmg/dl";
				fout<<"\t\t60-130";
				amount=amount+50;
				}
				if(!strcmp(test[i],"UREA"))
				{
													
					if(countb==0)
					{
					fout<<"\n\n\n\t\tBIOCHEMISTRY REPORT";
					countb=1;
						fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
					}		
				fout<<"\n\tUrea\t\t\t"<<urea<<"\t\tmg/dl"<<"\t\tupto-50";
				amount=amount+80;
				}
				if(!strcmp(test[i],"CREATNINE"))
				{
													
					if(countb==0)
					{
					fout<<"\n\n\n\t\t\tBIOCHEMISTRY REPORT";
					countb=1;
						fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
					}		
				fout<<"\n\tCreatnine\t\t\t"<<cret<<"\t\tmg/dl"<<"\t\t0.6-1.5";
				amount=amount+80;
				}
				if(!strcmp(test[i],"SBILIRUBIN"))
				{
													
					if(countb==0)
					{
					fout<<"\n\n\n\t\t\tBIOCHEMISTRY REPORT";
					countb=1;
						fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
					}		
				fout<<"\n\tSbilirubin\t\t\t"<<sbil<<"\t\tmg/dl"<<"\t\t0.1-1.0";
				amount=amount+100;
				}
				if(!strcmp(test[i],"SGOT"))
				{
													
					if(countb==0)
					{
					fout<<"\n\n\n\t\t\tBIOCHEMISTRY REPORT";
					countb=1;
						fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
					}		
				fout<<"\n\tSGOT\t\t\t"<<sgot<<"\t\tU/L"<<"\t\tupto-37";
				amount=amount+70;
				}
				if(!strcmp(test[i],"SGPT"))
				{
													
					if(countb==0)
					{
					fout<<"\n\n\n\t\t\tBIOCHEMISTRY REPORT";
					countb=1;
						fout<<"\n\tTESTS"<<"\t\t\tRESULT"<<"\t\tUNITS"<<"\t\tRANGE";
					}		
				fout<<"\n\tSGPT\t\t\t"<<sgpt<<"\t\tU/L"<<"\t\tupto-40";
				amount=amount+70;
				}
		
				
		}
			fout<<"\n";
		
		for(int i=0;i<t_no;i++)
		{
			
			
			if(!strcmp(test[i],"WIDAL"))
			{
				
				if(counts==0)
				{
				fout<<"\n\n\n\t\t\tSEROLOGY REPORT";
				counts=1;
				}
				fout<<"\n\tWIDAL TEST :";
				fout<<"\n\tS.typhi(O)\t\t\t";
					for(int i=0;i<widalo;i++)
					fout<<" +";
					for(int i=widalo;i<6;i++)
					fout<<" -";
				
				fout<<"\n\tS.typhi(H)\t\t\t";
					for(int i=0;i<widalh;i++)
					fout<<" +";
					for(int i=widalh;i<6;i++)
					fout<<" -";
				
				fout<<"\n\tS.paratyphiA(H)\t\t";
					for(int i=0;i<widalah;i++)
					fout<<" +";
					for(int i=widalah;i<6;i++)
					fout<<" -";
				
				fout<<"\n\tS.paratyphiB(H)\t\t";
					for(int i=0;i<widalbh;i++)
					fout<<" +";
					for(int i=widalbh;i<6;i++)
					fout<<" -";
				
				fout<<"\n\tINTERPRETATION :"<<widal_inter;
			
				amount=amount+100;
		
			}
	
			
		}
			fout<<"\n";	
	
	fout.close();
}


void rep::saverep()
{
	ofstream fout;
	fout.open("patientdetails.dat",ios::app|ios::binary);
	fout.write((char*)this,sizeof (*this));
	fout.close();
	//cout<<"\t\tsave succesful\n";
}
void rep:: search_p(int id)
{
	int check;
	check=0;
	
	ifstream search;
	search.open("patientdetails.dat",ios::app|ios ::binary);
	
	search.read((char*)this,sizeof (*this));
	while(!search.eof())
	{
		
		if(p_id==id)
		{
			showp();
			check=1;
		    break;
	
		}
	search.read((char*)this,sizeof (*this));
	}
		if(check==0) 
		cout<<"\n\n\t\tpatient not found";
	search.close();
	getch();
	
	
}

void rep:: search_d(char doc[8])
{
	char copy1[8],copy2[8];
	int check,money=0,count=0;
	check=0;
	int j;

	ifstream search;
	search.open("patientdetails.dat",ios::app|ios ::binary);
	
	search.read((char*)this,sizeof (*this));
	while(!search.eof())
	{
	for(int i=0;i<4;i++)
	{
		if(dname[i]==doc[i])
		count++;
		//cout<<count<<" "<<i;
	}
	
		
		if(count==4)
		{
			showp();
			money=money+amount;
			check=1;
	
		}
		count=0;
	search.read((char*)this,sizeof (*this));
	//showp();	
	
	}
	if(check==0) 
		cout<<"\n\n\t\tdoctor not found";
		
		cout<<"\n\t\tdoctors total :"<<money;
	search.close();
	getch();
	
	
}
