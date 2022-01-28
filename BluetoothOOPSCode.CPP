/* Question-

   (press "Page down" twice to skip reading this)

   When we turn on the Bluetooth we can access to connect to other phone
   but not access to call or send sms from that phone ,that level is hidden
   from encapsulation(some abstraction is available).


   The program includes the following OOP 
	 int close()
	{
	 clrscr();
	 State=0;

     BluetoothDevice()
     {
       if(check()==1)
       {
	State=1;
	strcpy(name,"D_one");

       class1=2;
       }
  }
  };


class Device2
 {
//assume this device has turned on bluetooth
//open to network
//acts as client only
//slave device
public: int TurnOn;
    static char Dname[20];
	int class2;
	int accept;
	int pairCode;
   static  char Dtype[30];
protected:  static char BD_ADDR_2[48];
public:
int open()
{
 TurnOn=1;

return TurnOn;
}
public:
int About()
{
 class2=2;
 return 1;
}
protected:
int acceptRequest()
{
 accept=1;
 return accept;
}
protected:
int code()
{
pairCode=3491;
return pairCode;
}
 };


class BluetoothSocket: public Device2, protected  BluetoothDevice
{
public: int chc;
      static int p;
private:
int ConnectAs()
{

  if(check()==1)
{
cout<<endl;
cout<<endl;
 cout<<"For connecting as server press 1 and for client press 2"<<endl;
 cin>>chc;
 if(chc==1)
   p=1;
 else if(chc==2)
 {
  p=2;
 }
else
 close();
}
 return p;
}
public:
int ConnectingAs()
{

  if(check()==1)
{
 if(ConnectAs()==1)
 {
  p=1;
 }
// else if(ConnectingAs()==2)
else
 {
 cout<<"Wait for server"<<endl;
// close();
 p=0;
 }
}
return p;
}

// 1 Find device
// 2 Query paired device
// 3 Discover device
// 4 Connect Devices
// 5 Connect as client or server,,,, ( ask and proceed )
//separate classes for client and server


public: int i;
protected:
  int FindDevice()
{
 clrscr();
 cout<<endl;
 cout<<endl;
   if(check()==1)
   {   gotoxy(20,41);
       if(n==0)
       cout<<"No previously connected devices found"<<endl;
       puts("Looking for a device to connect\n");
       getch();
       gotoxy(25,42);
       puts("...............................................................................\n");
       getch();
       puts("................................................................................\n");
       gotoxy(30,12);
       cout<<"....................."<<endl;
       getch();
       if(open()==1)
       {
	 clrscr();
	 cout<<endl;
	 cout<<"Found a device "<<Dname<<endl;

	 i=1;
       }
   }
   return i;

}

int GetBondedDevice()
{
 if(n==0)
 {
 cout<<endl;
 cout<<"Share your first file using bluetooth";
 cout<<endl;
 }
 return n;
}

public:
int DiscoverDevice()
{

 int y,reply;
 if(ConnectingAs()==1)
 {
if(check()==1)
{
  if(FindDevice()==1)
  {
    GetBondedDevice();
    cout<<endl;
    cout<<"Press 1 for connecting to "<<Dname<<endl;
    cout<<endl;
    cout<<endl;
    cin>>y;
    if(y==1)
    {
    cout<<endl;
     cout<<"Connection Request Sent.."<<endl<<endl;
/*     gotoxy(30,12);
     cout<<"......................."<<endl;
     getch();    */

     if(acceptRequest()==1)
     {
     cout<<endl;
     cout<<"Connected successfully with "<<Dname<<endl;
//       if(reply==1)
 //      cout<<BD_ADDR_2<<endl;
       n++;   //first device to be connected
     }
    }
    else
    {
    cout<<"Aborting operations"<<endl;
    close();
    }

    }
}
}
    return y;
    }


};


 class BluetoothServerSocket :private BluetoothDevice, private Device2
  {
 public: int chk;
	 char loc[100];
private:
	int A2DP; //Advanced audio distribution Profile
	int AVRCP; //Audio video remote control profile
       int SAP,MAP; //SIM access profiles and message access profile
       int PBAP; //phone book access profile
       int OPP; //Object push profile
       int OBEX; //Object exchange over logical link control and Adaptation protocol
       int HFP,HSP; //headset profiles
       int HDF; //Health device profile
       int SPP; //serial port profile  for pairing
       int DIP; //device Id profile
       int BIP;    //basic imaging profile
       int GAVDP; //general audio video distribution profile
       int VDP;  //Video distribute profile
       int GOEP; //Generic object exchange profile
       int FTP;  //file transfer profile
       int PAN;   //personal area network
       int CIP;   //common ISDN profile
       int CTP;     //cordless telephony profile
       int DUN;    //dial up network


private:    int clk;
   int g;

  void Function()
{
	 A2DP=1;
	 AVRCP=1;
	 BIP=1;
	 GAVDP=1;
	 GOEP=1;
	 VDP=1;
	 FTP=1;
	 PAN=1;
	 CIP=1;
	 DUN=1;
	 CTP=0;
	SAP=0,MAP=0;
	PBAP=0;
	OPP=1;
	OBEX=1;
	HFP,HSP=1;
	HDF=1;
	SPP=1;
	DIP=0;

}
public:
 int see()
 {

   if(check()==1)
   {
   match();
   }
   return 1;
   }

  public:
       int match()
       {


	if(strcmpi(Dtype,"Mobile")==0)
	{
	    chk=1;
	 Abstract(g);
	}


	 return chk;
       }

  private:
      int Abstract(int g)
  {
      clrscr();
      int num;

    int get;
  cout<<"Enter the number corresponding to media type"<<endl;
  cout<<"1. Images"<<endl;
  cout<<"2. Audio files"<<endl;
  cout<<"3. Video files"<<endl;
  cout<<"4. Documents(.txt, .ppt, .html etc)"<<endl;
  cout<<"5. Tethering"<<endl;
  cout<<"6. Request SMS access"<<endl;
  cout<<"7. Request call access"<<endl;
  cin>>get;

  switch(get)
 {
   case 1:
	   sendMedia();  //image
	   break;
   case 2:
	   sendMedia1();      //audio
	   break;
   case 3: sendMedia2(); //video
	   break;
   case 4: sendMedia3();  //docs
	   break;
   case 5: sendMedia4(); //tether
	   break;
   case 6: sendMedia5();      //sms
	   break;
   case 7: sendMedia6();  //calls
	   break;
  default: cout<<"Turning off"<<endl;
	   close();

 }
 return 1;
 }

private:
  int sendMedia( )  //image
  {
     Function();
     cout<<"Write the location from where to select the files\n"<<endl;
	   gets(loc);
     if(OPP==1 && OBEX==1 && BIP==1)
     {
      cout<<"Sending......"<<endl;
       if(acceptRequest()==1)
      {
	cout<<"Sent file"<<endl;
       cout<<"1 succesful, 0 Unsuccessful "<<endl;
	   cout<<"For sharing more  click 5"<<endl;
       cin>>clk;
       if(clk==5)
       Abstract(g);
       else
       close();

      }

     }

    return 1;
}
private:
  int sendMedia1()    //audio
  {
     Function();
   int dgt;
abc:     cout<<"Write the location from where to select the files\n"<<endl;
	   gets(loc);
     if(A2DP==1 && AVRCP==1)
     {
      cout<<"Sending......"<<endl;
       if(acceptRequest()==1)
      {
	cout<<"Sent files"<<endl;
       cout<<"1 succesful, 0 Unsuccessful "<<endl;
	   cout<<"For sharing more  click 5"<<endl;
       cin>>clk;
       if(clk==5)
       Abstract(g);
       else
       close();

      }

     }

    return 1;
}

private:                          //video
  int sendMedia2( )
  {
   Function();
     cout<<"Write the location from where to select the files\n"<<endl<<endl;
	   gets(loc);
     if(GAVDP==1 && AVRCP==1 && OPP==1 && VDP==1)
     {
      cout<<"Sending......"<<endl<<endl;
       if(acceptRequest()==1)
      {
	 cout<<"Sent files"<<endl;
       cout<<"1 succesful, 0 Unsuccessful "<<endl;
	   cout<<"For sharing more  click 5"<<endl;
       cin>>clk;
       if(clk==5)
       Abstract(g);
       else
       close();
      }
     }

    return 1;
}
private:
  int sendMedia3()                       //.docx,.ppt,.exe etc(text docs)
  {
    Function();
     cout<<"Write the location from where to select the files\n"<<endl;
	   gets(loc);
     if(FTP==1 && GOEP==1 && OPP==1)
     {
      cout<<"Sending......"<<endl;
       if(acceptRequest()==1)
      {
	cout<<"Sent file"<<endl;
       cout<<"1 succesful, 0 Unsuccessful "<<endl;
	   cout<<"For sharing more  click 5"<<endl;
       cin>>clk;
	if(clk==5)
       Abstract(g);
       else
       close();
      }
     }

    return 1;
}
private:
  int sendMedia4()  //tether
{
     Function();
     if(g!=1)
{
     if(DUN==1 && CIP==1 && PAN==1)
      {
      cout<<"Turning On mobile data"<<endl;
       if(acceptRequest()==1)
	 {
       cout<<"Bluetooth Tethering turned on "<<endl;
       g=1;
       }
       cout<<"For more operations  click 5"<<endl;
       cin>>clk;
       if(clk==5)
       Abstract(g);
	 }
 }

      else
       cout<<"Already turned on"<<endl;


    return 1;
}

private:
  int sendMedia5( )     //sms
  {
	Function();
     if(SAP ==1 && MAP==1 && DIP==1)
     {
      cout<<"Wait for a moment......"<<endl;
       if(acceptRequest()==1)
      {
       cout<<"Permitted"<<endl;
       cout<<"Connected device can use for messaging"<<endl;
	   cout<<"For sharing more  click 5"<<endl;
       cin>>clk;
       if(clk==5)
       Abstract(g);
       else
       close();
      }
     }
  else
   cout<<"This file type can not be shared"<<endl;
   cout<<"Access denied"<<endl;
       cout<<"For sending more  click 5"<<endl;
       cin>>clk;
       if(clk==5)
       Abstract(g);
       else
       close();

    return 1;
}

private:
  int sendMedia6( )     //calls
  {

	    Function();
	    cout<<"Wait for a moment"<<endl;
     if(SAP==1 && PBAP==1 && DIP==1 && CTP==1 && CIP==1)
     {

       if(acceptRequest()==1)
      {
       cout<<"Permitted"<<endl;
	   cout<<"For sharing more  click 5"<<endl;
       cin>>clk;
       if(clk==5)
       Abstract(g);
       else
       close();
      }
     }
  else
   cout<<"Access Denied"<<endl;
       cout<<"For sharing more files  click 5"<<endl;
       cin>>clk;
       if(clk==5)
       Abstract(g);
       else
       close();

    return 1;
}

  };

  int BluetoothAdapter::S;
  int BluetoothAdapter::State;
  //MAC address
  char BluetoothDevice::BD_ADDR[48] = {'0','0',':','1','1',':','2','2',':','3','3',':','F','F',':','E','E',':','J','J',':','5','5'};
  int BluetoothSocket::p;
 char Device2:: BD_ADDR_2[]={'1','1',':','4','4',':','6','8',':','2','B',':','4','0',':','7','7',':','D','D',':','4','D'};
 char Device2::Dname[]={'D','2'};
 char Device2::Dtype[]={'M','o','b','i','l','e'};
  int main()
  {
    clrscr();
    int ARE,k;

    BluetoothAdapter A;       //first class
    A.isEnabled(ARE,k);
    A.showState();

    BluetoothDevice B;                     //second
    B.check();

    Device2 two;                        //(client) third
    two.open();
    two.About();

    BluetoothSocket S; //fourth
    S.DiscoverDevice();


 BluetoothServerSocket T;
  T.see();
  getch();
  return 0;
    }



/* DRAWBACKS
1. Absence of a data structure to save the connected device names
2. Limited number(1) of device availability for connecting
3. No pairing done
*/
