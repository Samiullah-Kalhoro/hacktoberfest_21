#include<iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
using namespace std;
int welcome()
{system("cls");
cout<<"\n\t\t\t--------> ``";Sleep(300);cout<<" WELCOME TO Burger King ";Sleep(200);cout<<"`` <---------";Sleep(200);cout<<endl;
	cout<<"\t\t\t\t|  ENJOY OUR SERVICES  |";Sleep(300);cout<<"\n\t\t\t\t|   HAVE A GOOD DAY    |"<<endl<<endl<<endl<<endl<<endl;
	Sleep(600);}
int menu()
{cout<<"***************\n";
	cout<<" 1 : Customer menu"<<"                      |\n\n 2 : Administrator menu                 |\n\n 3 : Staff login                        |";cout<<"\n\n 4 : Exit                               |";cout<<""<<endl;
	cout<<"***************\n";
}
int list()
{
cout<<"\n\n\t\t\tYou choose The Customer menu\n\n\t\t\t\tOur menu is :-\n\n\n\n\t\t**************\n\n\t\t1: Burgers\t ---------\t >>>>>\n\t\t2: Hot Wings\t ---------\t >>>>>\n\t\t3: Fries\t ---------\t >>>>>\n\t\t4: Ice cream\t ---------\t >>>>>\n\t\t5: Drink\t ---------\t >>>>>\n\n\t\t**************\n\n";
cout<<"\n** Please place your order ** :";
}
int menulist()
{
	cout<<"\n\n\t\t\tYou choose The Customer menu\n\n\t\t\t\tOur menu is :-\n\n\n\n\t\t**************\n\n\t\t";
	cout<<"1: Burgers\t ---------\t >>>>>\n\t\t2: Hot Wings\t ---------\t >>>>>\n\t\t3: Fries\t ---------\t >>>>>\n\t\t";
	cout<<"4: Ice cream\t ---------\t >>>>>\n\t\t5: Drink\t ---------\t >>>>>\n\n\t\t**************\n\n";}
int burgerlist()
{cout<<"\n\t\t\t\tOur menu is :-\n\n\n\n\t\t**************\n\n\t\t1: Zinger Burger \t----\t250 PKR\n\n\t\t2: Chiken Cheese Burger\t----\t300 PKR\n\n\t\t3: BBQ Bacon Burger \t----\t100 PKR\n\n\n\t\t**************\n\n";}
int hotlist()
{	cout<<"\n\t\t\t\tOur menu is :-\n\n\n\n\t\t**************\n\n\t\t1: Hot Honey Mustard \t----\t220 PKR\n\n\t\t2: Spicy BBQ      \t----\t350 PKR\n\n\t\t3: Citrus Lemon Pepper \t----\t400 PKR\n\n\n\t\t**************\n\n";
}
int frieslist()
{cout<<"\n\t\t\t\tOur menu is :-\n\n\n\n\t\t**************\n\n\t\t1: Texas Cheese Fries \t----\t175 PKR\n\n\t\t2: Waffel Fries \t----\t190 PKR\n\n\t\t3: Sweet Potato \t----\t125 PKR\n\n\n\t\t**************\n\n";

}
int icelist()
{cout<<"\n\t\t\t\tOur menu is :-\n\n\n\n\t\t**************\n\n\t\t1: Double Chocolate \t----\t180 PKR\n\n\t\t2: Oreo Vanilla \t----\t220 PKR\n\n\t\t3: Caramel & HazelNut\t----\t215 PKR\n\n\n\t\t**************\n\n";

}
int drinklist()
{cout<<"\n\t\t\t\tOur menu is :-\n\n\n\n\t\t**************\n\n\t\t1: COKE \t---------\t150 PKR\n\n\t\t2: PEPSI\t---------\t175 PKR\n\n\t\t3: FANTA \t---------\t120 PKR\n\n\n\t\t**************\n\n";

}
int monogram()
{    cout<<"\t---------------------------------------------------------------\n"; 
    cout<<"\t|        --------->   -  Customer Bill   -  <-----------      |\n";
	 cout<<"\t---------------------------------------------------------------\n";
	 cout<<"            |\t\t\t     ";
	 Sleep(300);
	 cout<<"K";Sleep(300);cout<<"F";Sleep(300);cout<<"C";Sleep(300);cout<<"\t\t\t  |\n";

	 cout<<"\t   ---------------------------------------------------------   \n";
	 cout<<"\t    Sr#   Product Name      Quantity     Price    TotalPrice      \n";
	 cout<<"\t---------------------------------------------------------------\n\n\n";
}
int bill(int zt,int ct,int bt,int hht,int sht,int cht,int tft,int idt,int dct,int wft,int iot,int dpt,int sft,int ict,int dft,int sum)
{
int q[]={zt,ct,bt,hht,sht,cht,tft,wft,sft,idt,iot,ict,dct,dpt,dft};
 int p[]={250,300,100,220,350,400,175,190,125,180,220,215,150,175,120};
 int c=1;
string n[]={"Zinger Burgers","Chicken Burgers","BBQ Beacon Burger","Hot Honey Mustard","Spicy BBQ","Citrus Lemon Pepper","Texas Cheese Fries","Waffel Fries","Sweet Potato Fries","Choco IceCream","Vanilla IceCream","Carmel IceCream","Coke","Pepsi","Fanta"};

    for(int i=0;i<15;i++)
    {
	 if(q[i]>0)
	  {
		cout<<right<<setw(14)<<c<<"    "<<left<<setw(20) <<n[i]<<" "<<left<<setw(10)<<q[i]<<"Rs:"<<left<<setw(7)<<p[i]<<"Rs:"<<q[i]*p[i]<<"/-"<<endl<<endl;
		c++;}
	}
	if(sum==0)
cout<<"\n\n\n\n\t\t\t\t Empty List \n\n\n\n";
	cout<<"\n\n\t---------------------------------------------------------------\n";
	cout<<"\t                    ToTal Bill = Rs"<<sum<<"/-                             \n";
	cout<<"\t---------------------------------------------------------------\n";
	cout<<"\n\t\t          .";Sleep(100);cout<<".";Sleep(100);cout<<".";Sleep(100);cout<<".";Sleep(100);cout<<".";Sleep(100);cout<<".";Sleep(200);cout<<"Press Any Key To Continue";Sleep(50);cout<<".";Sleep(50);cout<<".";Sleep(50);cout<<".";Sleep(50);cout<<".";Sleep(50);cout<<".";Sleep(50);cout<<".";Sleep(50);cout<<".";
	getch();
	system("cls");
	cout<<"\n\n\n\n";
	cout<<endl<<endl<<endl<<"|      --------->   -  :Your Order Has Been Registered:   -  <-----------      |\n";

}
int fullbill(int zt,int ct,int bt,int hht,int sht,int cht,int tft,int idt,int dct,int wft,int iot,int dpt,int sft,int ict,int dft,int sum)
{system("cls");
monogram();
Sleep(700);
bill( zt,ct,bt,hht,sht,cht,tft,idt,dct,wft,iot,dpt,sft,ict,dft,sum);
}
int exit()
 {
 system("cls");
 Sleep(500);
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t     Thanks For Visiting \n\n\t\t\t\t    KFC\n\n\n\n\n\n\n\n";
 Sleep(500);
  system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t     Thanks For Visiting \n\n\t\t\t\t    KFC\n\n\n\n\n\n\n\n"; 
 Sleep(500);
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     Thanks For Visiting \n\n\t\t\t\t    KFC\n\n\n\n\n\n\n\n";
  Sleep(500);
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     Thanks For Visiting \n\n\t\t\t\t    KFC\n\n\n\n\n\n\n\n";
  Sleep(500);
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     Thanks For Visiting \n\n\t\t\t\t    KFC\n\n\n\n\n\n\n\n";
   Sleep(500);
  system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     Thanks For Visiting \n\n\t\t\t\t    KFC\n\n\n\n\n\n\n\n";
  Sleep(500);
   system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     Thanks For Visiting \n\n\t\t\t\t    KFC\n\n\n\n\n\n\n\n";
  Sleep(500);
    system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t     Thanks For Visiting \n\n\t\t\t\t    KFC\n\n\n\n\n\n\n\n"; 
 Sleep(500);
  system("cls");
 Sleep(500);
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t     Thanks For Visiting \n\n\t\t\t\t    KFC\n\n\n\n\n\n\n\n";
 Sleep(500);
 
 }
int soon()
{
	for(int s=1;s<=4;s++)
   	{system("cls");
   	 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t";Sleep(200);cout<<".";Sleep(100);cout<<".";Sleep(100);cout<<".";Sleep(150);cout<<".";Sleep(200);cout<<"COMING ";Sleep(200);cout<<"SOON";Sleep(100);cout<<".";Sleep(100);cout<<".";Sleep(100);cout<<".";Sleep(100);cout<<".\n\n\n\n\n\n\n\n\n\n\n";
   	 Sleep(500);
    }
}
int cancelorder(int zt,int ct,int bt,int hht,int sht,int cht,int tft,int idt,int dct,int wft,int iot,int dpt,int sft,int ict,int dft,int sum)
{ sum=0;
int q[15]={zt,ct,bt,hht,sht,cht,tft,wft,sft,idt,iot,ict,dct,dpt,dft};
 string p[15]={"Zinger Burgers","Chicken Burgers","BBQ Beacon Burger","Hot Honey Mustard","Spicy BBQ","Citrus Lemon Pepper","Texas Cheese Fries","Waffel Fries","Sweet Potato Fries","Choco IceCream","Vanilla IceCream","Carmel IceCream","Coke","Pepsi","Fanta"};
 int pr[15]={250,300,100,220,350,400,175,190,125,180,220,215,150,175,120};
 int v[15];
 cout<<endl<<endl<<"\t\t\tEnter Quantities of Following to Cancel Order\n\n\n";
 for(int i=0;i<15;i++)
 {if(q[i]>0)
 {
 
  cout<<"--> "<<left<<setw(20)<<p[i]<<" <-- : ";
  cin>>v[i];
  if((q[i]-v[i])<0)
   	{
	   q[i]=0;
   	    sum=0;}
else
  {
  q[i]=q[i]-v[i];
  sum=sum+(q[i]*pr[i]);}
  }}
  
  fullbill(q[0],q[1],q[2],q[3],q[4],q[5],q[6],q[7],q[8],q[9],q[10],q[11],q[12],q[13],q[14],sum);
  return (q[0],q[1],q[2],q[3],q[4],q[5],q[6],q[7],q[8],q[9],q[10],q[11],q[12],q[13],q[14],sum);
  }
int addorder(int zt,int ct,int bt,int hht,int sht,int cht,int tft,int idt,int dct,int wft,int iot,int dpt,int sft,int ict,int dft,int sum)
{ sum=0;
int q[15]={zt,ct,bt,hht,sht,cht,tft,wft,sft,idt,iot,ict,dct,dpt,dft};
 string p[15]={"Zinger Burgers","Chicken Burgers","BBQ Beacon Burger","Hot Honey Mustard","Spicy BBQ","Citrus Lemon Pepper","Texas Cheese Fries","Waffel Fries","Sweet Potato Fries","Choco IceCream","Vanilla IceCream","Carmel IceCream","Coke","Pepsi","Fanta"};
 int pr[15]={250,300,100,220,350,400,175,190,125,180,220,215,150,175,120};
 int v[15];
 cout<<endl<<endl<<"\t\t\tEnter Quantities of Following to Add in Order\n\n\n";
 for(int i=0;i<15;i++)

 {
 
  cout<<"--> "<<left<<setw(20)<<p[i]<<" <-- : ";
  cin>>v[i];
  if((q[i]+v[i])<0)
   	q[i]=0;
  q[i]=q[i]+v[i];
  sum=sum+(q[i]*pr[i]);
  }
  
  fullbill(q[0],q[1],q[2],q[3],q[4],q[5],q[6],q[7],q[8],q[9],q[10],q[11],q[12],q[13],q[14],sum);
  return (q[0],q[1],q[2],q[3],q[4],q[5],q[6],q[7],q[8],q[9],q[10],q[11],q[12],q[13],q[14],sum);
  }
//-----------------------------------------------------------------------------------------------------------------------------
int main()
{char repeat='y';

while(repeat=='y'||repeat=='Y')
 {
int zq=0,zt=0,zp=1,cq=0,ct=0,cp=1,bq=0,bt=0,bp=1;
int hhq=0,hht=0,hhp=1,shq=0,sht=0,shp=1,chq=0,cht=0,chp=1;
int tfq=0,tft=0,tfp=1,wfq=0,wft=0,wfp=1,sfq=0,sft=0,sfp=1;
int idq=0,idt=0,idp=1,ioq=0,iot=0,iop=1,icq=0,ict=0,icp=1;
int dcq=0,dct=0,dcp=1,dpq=0,dpt=0,dpp=1,dfq=0,dft=0,dfp=1;
int sum=0;
int menuid=0,listid=0,order=0;
char o='y';

//------------------------------------------------------------------
welcome();
menu();
//----------
while(menuid<1||menuid>4)
 {
  cout<<"\n\nPlease Select Menu : ";
  cin>>menuid;
  //------------
  switch(menuid)
   {
   
    case 1:
  	
  	 //===========================================================================================
  	    
          while(o=='y'||o=='Y') //Add Another product	
             { 
			   order=0;listid=0;
               system("cls");
  	           menulist();
  	                while(listid<1||listid>5)
                        {
		
	  
                            cout<<"\n\nPlease Select Menu : ";
  		                    cin>>listid;
  		                    switch(listid)
  		                       {
			
  			                    case 1:
  				
  					                system("cls");
  						            burgerlist();
  		                                while(order<1||order>3)
				                        {
					  
  				                         	//=================================================================================
  					                        cout<<"\n** Please place your order ** :";
  				                         	cin>>order;
  				                        	switch(order)
  					                            {
					  
					                               case 1:
					  	
					                                	cout<<endl<<"\t\tEnter Quantity of -> Zinger Burgers <- : ";
					                                   	cin>>zq;
					                                	zt=zq+zt;
					  	                                zp=zt*250;
					  	                                sum=sum+zp;
					  	                                cout<<"\n\nYour Balance is : "<<sum<<"\t\t\tZinger Burgers : "<<zt;
					                                 	break;
  		          	                                case 2:
  		          	                                  	cout<<endl<<"\t\tEnter Quantity of -> Chicken Cheese Burgers <- : ";
					                                	cin>>cq;
					                                	ct=cq+ct;
					  	                                cp=ct*300;
					                                	sum=sum+cp;
					                                  	cout<<"\n\nYour Balance is : "<<sum<<"\t\t Chicken Cheese Burgers : "<<ct;
					                                    break;
  			                                        case 3:
  			                                           	cout<<endl<<"\t\tEnter Quantity of -> BBQ Bacon Burgers <- : ";
					                                	cin>>bq;
					                                  	bt=bq+bt;
					                                 	bp=bt*100;
					                                 	sum=sum+bp;
					  	                                cout<<"\n\nYour Balance is : "<<sum<<"\t\t BBQ Bacon Burgers : "<<bt;
  					                                	break;
  			                                        default:
  						                                system("cls");
  					                                 	burgerlist();
  						                                cout<<endl<<"\t\t\tInvalid Burger ID";//if customer enter wrong menu
                                                        cout<<endl<<"\n\t\tPLease Place Order From 1-3 Thanks"<<endl;
  					                                	break;
												}
  				                            }
 	
		    
  					//==================================================================================
  				    
  				                break;
  				                case 2:
  				                	system("cls");
  						            hotlist();
  		                                while(order<1||order>3)
				                        {
					  
  				                         	//=================================================================================
  					                        cout<<"\n** Please place your order ** :";
  				                         	cin>>order;
  				                        	switch(order)
  					                            {
					  
					                               case 1:
					  	
					                                	cout<<endl<<"\t\tEnter Quantity of -> Hot Honey Mustard <- : ";
					                                   	cin>>hhq;
					                                	hht=hhq+hht;
					  	                                hhp=hht*220;
					  	                                sum=sum+hhp;
					  	                                cout<<"\n\nYour Balance is : "<<sum<<"\t\t\tHot Honey Mustard : "<<hht;
					                                 	break;
  		          	                                case 2:
  		          	                                  	cout<<endl<<"\t\tEnter Quantity of -> Spicy BBQ  <- :";
					                                	cin>>shq;
					                                	sht=shq+sht;
					  	                                shp=sht*350;
					                                	sum=sum+shp;
					                                  	cout<<"\n\nYour Balance is : "<<sum<<"\t\t Spicy BBQ : "<<sht;
					                                    break;
  			                                        case 3:
  			                                           	cout<<endl<<"\t\tEnter Quantity of  -> Citrus Lemon Pepper <- : ";
					                                	cin>>chq;
					                                  	cht=chq+cht;
					                                 	chp=cht*400;
					                                 	sum=sum+chp;
					  	                                cout<<"\n\nYour Balance is : "<<sum<<"\t\t Citrus Lemon Pepper : "<<cht;
  					                                	break;
  			                                        default:
  						                                system("cls");
  					                                 	burgerlist();
  						                                cout<<endl<<"\t\t\tInvalid Hot Wings ID";//if customer enter wrong menu
                                                        cout<<endl<<"\n\t\tPLease Place Order From 1-3 Thanks"<<endl;
  					                                	break;
												}
  				                            }
 	 
  				                break;
  				                case 3:
  				                	system("cls");
  						            frieslist();
  		                                while(order<1||order>3)
				                        {
					  
  				                         	//=================================================================================
  					                        cout<<"\n** Please place your order ** :";
  				                         	cin>>order;
  				                        	switch(order)
  					                            {
					  
					                               case 1:
					  	
					                                	cout<<endl<<"\t\tEnter Quantity of -> Texas Cheese Fries <- : ";
					                                   	cin>>tfq;
					                                	tft=tfq+tft;
					  	                                tfp=tft*175;
					  	                                sum=sum+tfp;
					  	                                cout<<"\n\nYour Balance is : "<<sum<<"\t\t\tTexas Cheese Fries : "<<tft;
					                                 	break;
  		          	                                case 2:
  		          	                                  	cout<<endl<<"\t\tEnter Quantity of -> Waffel <- : ";
					                                	cin>>wfq;
					                                	wft=wfq+wft;
					  	                                wfp=wft*190;
					                                	sum=sum+wfp;
					                                  	cout<<"\n\nYour Balance is : "<<sum<<"\t\t Waffel : "<<wft;
					                                    break;
  			                                        case 3:
  			                                           	cout<<endl<<"\t\tEnter Quantity of -> Sweet Potato <- : ";
					                                	cin>>sfq;
					                                  	sft=sfq+sft;
					                                 	sfp=sft*125;
					                                 	sum=sum+sfp;
					  	                                cout<<"\n\nYour Balance is : "<<sum<<"\t\t Sweet Potato : "<<sft;
  					                                	break;
  			                                        default:
  						                                system("cls");
  					                                 	frieslist();
  						                                cout<<endl<<"\t\t\tInvalid Fries ID";//if customer enter wrong menu
                                                        cout<<endl<<"\n\t\tPLease Place Order From 1-3 Thanks"<<endl;
  					                                	break;
												}
  				                            }
 	 
  				                break;
  			                    case 4:
  			                    	system("cls");
  						            icelist();
  		                                while(order<1||order>3)
				                        {
					  
  				                         	//=================================================================================
  					                        cout<<"\n** Please place your order ** :";
  				                         	cin>>order;
  				                        	switch(order)
  					                            {
					  
					                               case 1:
					  	
					                                	cout<<endl<<"\t\tEnter Quantity of -> Double Choco <- : ";
					                                   	cin>>idq;
					                                	idt=idq+idt;
					  	                                idp=idt*180;
					  	                                sum=sum+idp;
					  	                                cout<<"\n\nYour Balance is : "<<sum<<"\t\t\tDouble Choco : "<<idt;
					                                 	break;
  		          	                                case 2:
  		          	                                  	cout<<endl<<"\t\tEnter Quantity of -> Oreo Vanilla <- : ";
					                                	cin>>ioq;
					                                	iot=ioq+iot;
					  	                                iop=iot*220;
					                                	sum=sum+iop;
					                                  	cout<<"\n\nYour Balance is : "<<sum<<"\t\t Oreo Vanilla : "<<iot;
					                                    break;
  			                                        case 3:
  			                                           	cout<<endl<<"\t\tEnter Quantity of -> Caramel & Hazel Nut <- : ";
					                                	cin>>icq;
					                                  	ict=icq+ict;
					                                 	icp=ict*215;
					                                 	sum=sum+icp;
					  	                                cout<<"\n\nYour Balance is : "<<sum<<"\t\t Caramel & Hazel Nut : "<<ict;
  					                                	break;
  			                                        default:
  						                                system("cls");
  					                                 	icelist();
  						                                cout<<endl<<"\t\t\tInvalid Ice Cream ID";//if customer enter wrong menu
                                                        cout<<endl<<"\n\t\tPLease Place Order From 1-3 Thanks"<<endl;
  					                                	break;
												}
  				                            }
 	 
  				                break;
  				                case 5:
  				                	system("cls");
  						            drinklist();
  		                                while(order<1||order>3)
				                        {
					  
  				                         	//=================================================================================
  					                        cout<<"\n** Please place your order ** :";
  				                         	cin>>order;
  				                        	switch(order)
  					                            {
					  
					                               case 1:
					  	
					                                	cout<<endl<<"\t\tEnter Quantity of -> Coke  <- :";
					                                   	cin>>dcq;
					                                	dct=dcq+dct;
					  	                                dcp=dct*150;
					  	                                sum=sum+dcp;
					  	                                cout<<"\n\nYour Balance is : "<<sum<<"\t\t\tCoke : "<<dct;
					                                 	break;
  		          	                                case 2:
  		          	                                  	cout<<endl<<"\t\tEnter Quantity of -> Pepsi <- : ";
					                                	cin>>dpq;
					                                	dpt=dpq+dpt;
					  	                               dpp=dpt*175;
					                                	sum=sum+dpp;
					                                  	cout<<"\n\nYour Balance is : "<<sum<<"\t\t Pepsi : "<<dpt;
					                                    break;
  			                                        case 3:
  			                                           	cout<<endl<<"\t\tEnter Quantity of -> Fanta  <- :";
					                                	cin>>dfq;
					                                  	dft=dfq+dft;
					                                 	dfp=dft*120;
					                                 	sum=sum+dfp;
					  	                                cout<<"\n\nYour Balance is : "<<sum<<"\t\t Fanta : "<<dft;
  					                                	break;
  			                                        default:
  						                                system("cls");
  					                                 	drinklist();
  						                                cout<<endl<<"\t\t\tInvalid Drink ID";//if customer enter wrong menu
                                                        cout<<endl<<"\n\t\tPLease Place Order From 1-3 Thanks"<<endl;
  					                                	break;
												}
  				                            }
 	 
  			                 	break;
  			                    default:
  			                 	system("cls");				
  					            list();
  					            cout<<endl<<"\t\t\tInvalid Menu ID";//if customer enter wrong menu
                                cout<<endl<<"\n\t\tPLease Select  Menu From 1-5 Thanks"<<endl;
  					            break;           
					            }
		                  
  				        }
  				cout<<"\n\n\t\tWould you like to  place another order? (Y/N)";	//to add another order in bill if y is pressed to quit n is pressed.				
			    o=getche();
			    system("cls");
		
	             }
	  
	//===========================================================================================	
	  
  break;
//---------------------------------------
   case 2:
     soon();
   	 break;
   	case 3:
  	 soon();
   	 break;
   	 case 4:
   	 	    exit();
   	 	 
   	break;
   	default:
   	
		   	system("cls");
   		welcome();
        menu();
   		  cout<<endl<<"\t\t\tInvalid Menu ID";//if customer enter wrong menu
  cout<<endl<<"\n\t\tPLease Select  Menu From 1-4 Thanks"<<endl;
   		break;
		   }
	//-------------
   }
//-----------
//-------------------Bill--------------------
if(menuid==1)
{

fullbill( zt,ct,bt,hht,sht,cht,tft,idt,dct,wft,iot,dpt,sft,ict,dft,sum);

char choice='a';

if(sum!=0)
    cout<<endl<<endl<<endl<<"|           --------->   -  To Cencel Order Press : S   -  <-----------        |";
Sleep(500);
                cout<<endl<<"|           --------->   -  To Add in Order Press : A   -  <-----------        |";
Sleep(500);
                cout<<endl<<"|         --------->  -  To Confirm Order Press : Any Key -  <-----------      |\n\n\n\t\t\t\t\t>>";

choice=getche();
system("cls");
cout<<endl<<endl<<endl<<"|      --------->   -  :Your Order Has Been Registered:   -  <-----------         |\n";
if(choice=='s')
cancelorder(zt,ct,bt,hht,sht,cht,tft,idt,dct,wft,iot,dpt,sft,ict,dft,sum);
if(choice=='a')
addorder(zt,ct,bt,hht,sht,cht,tft,idt,dct,wft,iot,dpt,sft,ict,dft,sum);}

//-------------------------------------------
//------------------------Exit-----------------------------------
 if(menuid!=4)
    {    
      Sleep(300);

		cout<<endl<<"\n\n\n";Sleep(450);cout<<"\t\t\t    ---(To Main Menu)---\t\t\t";cout<<endl<<endl<<"\t|        --------->   -  Press : Y   -  <-----------      |\n";Sleep(450);Sleep(450);cout<<"\n\n\n\n\n\t\t\t     ----(To Quit)----";Sleep(450);cout<<endl<<endl<<"\t|        --------->   -  Press : N   -  <-----------      |\n\n\t\t\t\t...<";

      repeat=getch();
      if(repeat!='y')
      exit();
   
   }
else
repeat='n';
	  
 }
//----------------------------------------------------------------
}
