#include <iostream>
#include <fstream>
#include<time.h>
using namespace std;

//********************1ST CLASS BOX START****************************
class Name {
private:
	char* fName;
	char* lName;
public:
	Name(char* fN, char* lN);
	Name();
	Name(const Name& obj);
	void setfName(char* fN);
	void setlName(char* lN);
	char* getfName();
	char* getlName();
	~Name();
	// add following functions //Getter, Setters
	//Destructor, Default Constructor, Copy Constructor 
	friend ostream & operator<<(ostream & out, const Name & n);

	Name& operator=(const Name& obj)
	{
		if (fName != NULL)
		{
			delete[] fName; fName = NULL;
		}
		if (lName != NULL)
		{
			delete[] lName; lName = NULL;
		}
		int len = strlen(obj.fName); fName = new char[len + 1];
		int len1 = strlen(obj.lName); lName = new char[len1 + 1];
		for (int i = 0; i < len; i++)
		{
			fName[i] = obj.fName[i];
		}fName[len] = '\0';
		for (int i = 0; i < len1; i++)
		{
			lName[i] = obj.lName[i];
		}lName[len1] = '\0';
		return *this;
	}
};
Name::~Name()
{
	if (fName != NULL)
	{
		delete[] fName; fName = NULL;
	}
	if (lName != NULL)
	{
		delete[] lName; lName = NULL;
	}
}
Name::Name()
{
	fName = NULL; lName = NULL;
}
Name::Name(char* fN, char* lN)
{
	int len = strlen(fN); fName = new char[len+1];
	int len1 = strlen(lN); lName = new char[len1+1];
	for (int i = 0; i < len; i++)
	{
		fName[i] = fN[i];
	}fName[len] = '\0';
	for (int i = 0; i < len1; i++)
	{
		lName[i] = lN[i];
	}
	lName[len1] = '\0';
	
}
Name::Name(const Name& obj)
{
	int len = strlen(obj.fName); fName = new char[len + 1];
	int len1 = strlen(obj.lName); lName = new char[len1 + 1];
	for (int i = 0; i < len; i++)
	{
		fName[i] = obj.fName[i];
	}fName[len] = '\0';
	for (int i = 0; i < len1; i++)
	{
		lName[i] = obj.lName[i];
	}lName[len1] = '\0';
}

void Name::setfName(char* fN)
{
	int len = strlen(fN);
	if (fName != NULL)
	{
		delete [] fName;
	}
	fName = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		fName[i] = fN[i];
	}
	fName[len] = '\0';
}
void Name::setlName(char* lN)
{
	int len = strlen(lN);
	if (lName != NULL)
	{
		delete [] lName;
	}
	lName = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		lName[i] = lN[i];
	}
	lName[len] = '\0';
}
char* Name::getfName()
{
	return fName;
}
char* Name::getlName()
{
	return lName;
}
ostream & operator<<(ostream & out, const Name & n)
{
	out << n.fName << " " << n.lName << endl;
	return out;
}

 class Date{
	 int day;
	 int month;
	 int year;
 public:
	 Date(int d, int m, int y);
	 Date(const Date& obj);
	 void setDay(int);
	 void setMonth(int);
	 void setYear(int);
	 int getDay();
	 int getMonth();
	 int getYear();
	 friend ostream& operator<<(ostream& out, const Date& n);
	 friend bool operator==(Date& obj, Date& obj1);
	
	 Date& operator=(const Date obj)
	 {
		 day = obj.day; month = obj.month; year = obj.year;
		 return *this;
	 }

	 // add constructurs getter setters and stream output function,
	 //which output date in given format day / Mon / Year
 };
 bool operator==(Date&obj,Date&obj1)
 {
	
		 if (obj1.day == obj.day && obj1.month == obj.month && obj1.year == obj.year)
		 {
			 return true;
		 }
		 else
			 return false;
	 
 }
 Date::Date(int d = 0, int m = 0, int y = 0)
 {
	 day = d; month = m; year = y;
 }
 Date::Date(const Date& obj)
 {
	 day = obj.day; month = obj.month; year = obj.year;
 }
 void Date::setDay(int n)
 {
	 day = n;
 }
 void Date::setMonth(int n)
 {
	 month = n;
 }
 void Date::setYear(int n)
 {
	 year = n;
 }
 int Date::getDay()
 {
	 return day;
 }
 int Date::getMonth()
 {
	 return month;
 }
 int Date::getYear()
 {
	 return year;
 }
 ostream& operator<<(ostream& out, const Date& n)
 {
	 out << n.day << "/" << n.month << "/" << n.year << endl;
	 return out;
 }

class mTime{
     int hour;
     int min;
     int sec;
public:
	mTime(int h, int m, int s);
	mTime(const mTime& obj);
	void setHour(int);
	void setMin(int);
	void setSec(int);
	int getHour();
	int getMin();
	int getSec();
	friend ostream& operator<<(ostream& out, const mTime& n);
	mTime& operator=(mTime& obj);
     //add constructurs getter setters and stream output function, which output time 
     //in given format How Min : Sec
};
mTime::mTime(int h=0, int m=0, int s=0)
{
	hour = h; min = m; sec = s;
}
mTime::mTime(const mTime& obj)
{
	hour = obj.hour; min = obj.min; sec = obj.sec;
}
mTime& mTime::operator=(mTime& obj)
{
	hour = obj.hour; min = obj.min; sec = obj.sec;
	return *this;
}

void mTime::setHour(int n)
{
	hour = n;
}
void mTime::setMin(int n)
{
	min = n;
}
void mTime::setSec(int n)
{
	sec = n;
}
int mTime::getHour()
{
	return hour;
}
int mTime::getMin()
{
	return min;
}
int mTime::getSec()
{
	return sec;
}
ostream& operator<<(ostream& out, const mTime& n)
{
	out << n.hour << ":" << n.min << ":" << n.sec << endl;
	return out;
}
//********************1ST CLASS BOX END****************************

//********************2ND CLASS BOX START****************************
class Service {
	int sId;
	char* source;
	char* destination;
	float distance; //in km
	Date bookingDate;
	mTime bookingTime;
	int status; // false for pending, true if complete
	float fuelrate;

	int cId; // Customer Id who booked the ride
	int	dId; // Driver Id
	int vId; // vehicle Id

	//you can add more members here if required 
	//add member functions
public:
	Service();
	Service(char* s, char* dest, float dis, Date d, mTime t,int stat,float frate,int c,int di,int v,int si);
	virtual ~Service();
	virtual void print()
	{
		cout << "*************************" << endl;
		cout << "Source::" << source << endl;
		cout << "Destination::" << destination << endl;
		cout << "Distance::" <<distance << endl;
		cout << "BookingDate::" << bookingDate << endl;
		cout << "BookingTime::" << bookingTime << endl;
		if (status == 0)
		{
			cout << "Status::Pending" << endl;
		}
		else if(status==1)
			cout << "Status::Completed" << endl;
		else if(status==2)
			cout << "Status::Cancelled" << endl;

		cout << "FuelRate::" << fuelrate << endl;
		cout << "sID::" << sId << endl;
		cout << "cId::" << cId << endl;
		cout << "dId::" << dId << endl;
		cout << "vId::" << vId << endl;
	}
	void setsid(int n)
	{
		sId = n;
	}
	int getsid()
	{
		return sId;
	}
	void setsource(char* n)
	{
		int len = strlen(n);
		if (source != NULL)
		{
			delete [] source;
		}
		source = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			source[i] = n[i];
		}
		source[len] = '\0';
	}
	void setdest(char* n)
	{
		int len = strlen(n);
		if (destination != NULL)
		{
			delete [] destination;
		}
		destination = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			destination[i] = n[i];
		}
		destination[len] = '\0';
	}
	void setdistance(float n)
	{
		distance = n;
	}
	void setdate(Date n)
	{
		bookingDate = n;
	}
	void settime(mTime n)
	{
		bookingTime = n;
	}
	void setstatus(int n)
	{
		status = n;
	}
	void setfuelrate(float n)
	{
		fuelrate = n;
	}
	void setcid(int n)
	{
		cId = n;
	}
	void setdid(int n)
	{
		dId = n;
	}
	void setvid(int n)
	{
		vId = n;
	}
	int getcid()
	{
		return cId;
	}
	int getdid()
	{
		return dId;
	}
	int getvid()
	{
		return vId;
	}
	void getsource(char*& n)
	{
		int len = strlen(source);
		if (n != NULL)
		{
			delete [] n;
		}
		n = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			n[i] = source[i];
		}
		n[len] = '\0';
	}
	void getdest(char*& n)
	{
		int len = strlen(destination);
		if (n != NULL)
		{
			delete [] n;
		}
		n = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			n[i] = destination[i];
		}
		n[len] = '\0';
	}
	float getdistance()
	{
		return distance;
	}
	Date getdate()
	{
		return bookingDate;
	}
	mTime gettime()
	{
		return bookingTime;
	}
	int getstatus()
	{
		return status;
	}
	float getfuelrate()
	{
		return fuelrate;
	}
	Service& operator=(Service obj);
	friend ostream& operator<<(ostream& out, const Service& obj);
};
ostream& operator<<(ostream& out, const Service& obj)
{
	out << "Source:" << obj.source << endl;
	out << "Destination:" << obj.destination << endl;
	out << "Distance:" << obj.distance << endl;
	out << "BookingDate:" << obj.bookingDate << endl;
	out << "BookingTime:" << obj.bookingTime << endl;
	if (obj.status == 0)
	{
		cout << "Status::Pending" << endl;
	}
	else if (obj.status == 1)
		cout << "Status::Completed" << endl;
	else if (obj.status == 2)
		cout << "Status::Cancelled" << endl;
	out << "FuelRate:" << obj.fuelrate << endl;
	out << "sID::" << obj.sId << endl;
	out << "cId" << obj.cId << endl;
	out << "dId" << obj.dId << endl;
	out << "vId" << obj.vId << endl;

	return out;
}

Service::Service()
{
	source = NULL; destination = NULL; distance = 0.0; status = false; fuelrate = 0.0; cId = dId = vId = 0;
}
Service::Service(char* s, char* dest, float dis, Date d, mTime t, int stat, float frate, int c, int di, int v,int si)
{
	sId = si;
	int len = strlen(s); source = new char[len + 1];
	int len1 = strlen(dest); destination = new char[len1 + 1];
	for (int i = 0; i < len; i++)
	{
		source[i] = s[i];
	}source[len] = '\0';
	for (int i = 0; i < len1; i++)
	{
		destination[i] = dest[i];
	}
	destination[len1] = '\0';
	distance = dis; status = stat; fuelrate = frate;
	cId = c; dId = di; vId = v;
	bookingDate.setDay(d.getDay());
	bookingDate.setMonth(d.getMonth());
	bookingDate.setYear(d.getYear());
	bookingTime.setHour(t.getHour());
	bookingTime.setMin(t.getMin());
	bookingTime.setSec(t.getSec());

}
Service::~Service()
{
	if (source != NULL)
	{
		delete[]source; source = NULL;
	}
	if (destination != NULL)
	{
		delete[]destination; destination = NULL;
	}
}
Service& Service::operator=(Service obj)
{
	if (source != NULL)
	{
		delete[]source; source = NULL;
	}
	if (destination != NULL)
	{
		delete[]destination; destination = NULL;
	}
	int len = strlen(obj.source); source = new char[len + 1];
	int len1 = strlen(obj.destination); destination = new char[len1 + 1];
	for (int i = 0; i < len; i++)
	{
		source[i] = obj.source[i];
	}source[len] = '\0';
	for (int i = 0; i < len1; i++)
	{
		destination[i] = obj.destination[i];
	}
	destination[len1] = '\0';
	distance = obj.distance; status = obj.status; fuelrate = obj.fuelrate;
	cId = obj.cId; dId = obj.dId; vId = obj.vId;
	bookingDate.setDay(obj.bookingDate.getDay());
	bookingDate.setMonth(obj.bookingDate.getMonth());
	bookingDate.setYear(obj.bookingDate.getYear());
	bookingTime.setHour(obj.bookingTime.getHour());
	bookingTime.setMin(obj.bookingTime.getMin());
	bookingTime.setSec(obj.bookingTime.getSec());
	return *this;
}


class Ride : public Service {
	int noofPassengers; // false for pending, true if complete
	char* rideType; // intercity, intrasity
	float DriverRanking; //0 to 5 scale (worst to best)
	float VehicleRanking; // 0 to 5 scale (worst to best)
	//you can add more members here if required
	//add member functions
public:
	Ride();
	Ride(char* s, char* dest, float dis, Date d, mTime t, int stat, float frate, int c, int di, int v, int noofpass, char* rtype, float drank, float vrank,int si);
	~Ride();
	Ride& operator=(Ride& obj);
	void print()
	{
		Service::print();
		cout << "noofPassengers::" << noofPassengers << endl;
		cout << "rideType::" << rideType << endl;
		cout << "DriverRanking::" << DriverRanking << endl;
		cout << "VehicleRanking::" << VehicleRanking << endl;
		cout << "*************************" << endl;

	}
	void setnoofpassengers(int n)
	{
		noofPassengers = n;
	}
	void setridetype(char* n)
	{
		int len = strlen(n);
		if (rideType != NULL)
		{
			delete [] rideType;
		}
		rideType = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			rideType[i] = n[i];
		}
		rideType[len] = '\0';
	}
	void setdrivrank(float n)
	{
		DriverRanking = n;
	}
	void setvehiclerank(float n)
	{
		VehicleRanking = n;
	}

	int getnoofpassengers()
	{
		return noofPassengers;
	}
	void getridetype(char*& n)
	{
		int len = strlen(rideType);
		if (n != NULL)
		{
			delete [] n;
		}
		n = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			n[i] = rideType[i];
		}
		n[len] = '\0';
	}
	float getdrivrank()
	{
		return DriverRanking;
	}
	float getvehiclerank()
	{
		return VehicleRanking;
	}
};
Ride& Ride::operator=(Ride& obj)
{
	noofPassengers = obj.noofPassengers;
	DriverRanking = obj.DriverRanking;
	VehicleRanking = obj.VehicleRanking;
	char* n; n = NULL;
	obj.getridetype(n); setridetype(n);
	obj.getsource(n); setsource(n);
	obj.getdest(n); setdest(n); delete[]n;
	setdistance(obj.getdistance());
	setdate(obj.getdate());
	settime(obj.gettime());
	setstatus(obj.getstatus());
	setfuelrate(obj.getfuelrate());
	setsid(obj.getsid());
	setcid(obj.getcid());
	setdid(obj.getdid());
	setvid(obj.getvid());
	return *this;
}
Ride::Ride() :Service()
{
	noofPassengers = 0; DriverRanking = VehicleRanking = 0.0; rideType = NULL;
}
Ride::Ride(char* s, char* dest, float dis, Date d, mTime t, int stat, float frate, int c, int di, int v, int noofpass, char* rtype, float drank, float vrank, int si):Service(s,dest,dis,d,t,stat,frate,c,di,v,si)
{
	noofPassengers = noofpass; DriverRanking = drank; VehicleRanking = vrank;
	int len = strlen(rtype); rideType = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		rideType[i] = rtype[i];
	}rideType[len] = '\0';

}
Ride::~Ride()
{
	if (rideType != NULL)
	{
		delete[] rideType; rideType = NULL;
	}
}
class Delivery : public Service {
	float goodsWeight; // Weight of goods in kg
	char* goodsType; //type of goods food, furniture, petroleum, chemicals, etc.
	//you can add more members here if required
	//add member functions
public:
	Delivery();
	Delivery(char* s, char* dest, float dis, Date d, mTime t, bool stat, float frate, int c, int di, int v, float weight, char* goodtype,int si);
	~Delivery();
	void print()
	{
		Service::print();
		cout << "goodsWeight::" << goodsWeight << endl;
		cout << "goodsType::" << goodsType << endl;
		cout << "*************************" << endl;
	}
	void setgoodsweight(float n)
	{
		goodsWeight = n;
	}
	void setgoodstype(char* n)
	{
		int len = strlen(n);
		if (goodsType != NULL)
		{
			delete[] goodsType;
		}
		goodsType = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			goodsType[i] = n[i];
		}
		goodsType[len] = '\0';
	}
	float getgoodsweight()
	{
		return goodsWeight;
	}
	void getgoodstype(char*& n)
	{
		if (n != NULL)
		{
			delete[] n;
		}
		int len = strlen(goodsType);
		n = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			n[i] = goodsType[i];
		}
		n[len] = '\0';
	}
};
Delivery::Delivery():Service()
{
	goodsWeight = 0; goodsType = NULL;
}
Delivery::Delivery(char* s, char* dest, float dis, Date d, mTime t, bool stat, float frate, int c, int di, int v, float weight, char* goodtype,int si) : Service(s, dest, dis, d, t, stat, frate, c, di, v,si)
{
	goodsWeight = weight;
	int len = strlen(goodtype); goodsType = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		goodsType[i] = goodtype[i];
	}goodsType[len] = '\0';

}
Delivery::~Delivery()
{
	if (goodsType != NULL)
	{
		delete[]goodsType; goodsType = NULL;
	}
}
//********************2ND CLASS BOX END****************************

//********************3RD CLASS BOX START****************************
class Person {
private:
	Name pName;
	Date DOB;
	int Age;
    char Nid[14];
public:
	Person();
	Person(Name obj, Date obj1, int ag, char ni[14]);
	Person(const Person& object);
	~Person();
	void printPerson();
	void setNameClass(Name obj)
	{
		pName = obj;
	}
	Name getNameClass()
	{
		return pName;
	}
	void setDateClass(Date obj)
	{
		DOB = obj;
	}
	Date getDateClass()
	{
		return DOB;
	}
	void setpName(Name obj)
	{
		pName.setfName(obj.getfName());
		pName.setlName(obj.getlName());
	}
	void setDOB(Date obj)
	{
		DOB.setDay(obj.getDay());
		DOB.setMonth(obj.getMonth());
		DOB.setYear(obj.getYear());
	}

	void setAge(int n)
	{
		Age = n;
	}
	void setNid(char n[14])
	{
		for (int i = 0; n[i] != '\0'; i++)
		{
			Nid[i] = n[i];
		}Nid[13] = '\0';
	}

	int getAge()
	{
		return Age;
	}
	void getNid(char n[14])
	{
		for (int i = 0; Nid[i] != '\0'; i++)
		{
			n[i]=Nid[i];
		}n[13] = '\0';
	}
	Name getpName()
	{
		return pName;
	}
	Date getDOB()
	{
		return DOB;
	}
	void setfNamePerson(char* fN)
	{
		pName.setfName(fN);
	}
	void setlNamePerson(char* lN)
	{
		pName.setlName(lN);
	}
	char* getfNamePerson()
	{
		char* forRetun = pName.getfName();
		return forRetun;
	}
	char* getlNamePerson()
	{
		char* forRetun = pName.getlName();
		return forRetun;
	}
	void setDayPerson(int n)
	{
		DOB.setDay(n);
	}
	void setMonthPerson(int n)
	{
		DOB.setMonth(n);
	}
	void setYearPerson(int n)
	{
		DOB.setYear(n);
	}
	int getDayPerson()
	{
		int forReturn = DOB.getDay();
		return forReturn;
	}
	int getMonthPerson()
	{
		int forReturn = DOB.getMonth();
		return forReturn;
	}
	int getYearPerson()
	{
		int forReturn = DOB.getYear();
		return forReturn;
	}
	friend ostream& operator<<(ostream& out, const Person& n);
	//add following functions in this class //Getter, Setters
	//Destructor, Default and Parametrized Constructor, Copy Constructor,
	//Output operator (print information of person)
};
ostream& operator<<(ostream& out, const Person& n)
{
	out << n.pName;
	out << "DOB:" << n.DOB;
	out << "AgeL" << n.Age << endl;
	out << "NiD:" << n.Nid << endl;
	return out;
}
void Person::printPerson()
{
	cout << pName;
	cout << "DOB::" << DOB;
	cout << "Age::" << Age << endl;
	cout << "NiD::" << Nid << endl;
}

Person::Person()
{
	Age = 0;
}
Person::Person(Name obj, Date obj1, int ag, char ni[14])
{
	pName.setfName(obj.getfName());
	pName.setlName(obj.getlName());
	DOB.setDay(obj1.getDay());
	DOB.setMonth(obj1.getMonth());
	DOB.setYear(obj1.getYear());
	Age = ag;
	for (int i = 0; ni[i] != '\0'; i++)
	{
		Nid[i] = ni[i];
	}Nid[13] = '\0';

}
Person::Person(const Person& object)
{
	pName = object.pName;
	DOB = object.DOB;
	Age = object.Age;
	for (int i = 0;object.Nid[i] != '\0'; i++)
	{
		Nid[i] = object.Nid[i];
	}Nid[13] = '\0';
}
Person::~Person()
{
	pName.~Name();
}

class Customer : public Person {
private:
	int cId; // Unique and assigned first time when customer makes first service request
	Service** bookingHistory;
	int noOfService;
    //Maintain and Update history of customer for each service (ride or goods transportation order)
    //by adding address of service in dynamic array.
    //you can add more members here if required
public:
	Customer();
	Customer(Name obj, Date obj1, int ag, char ni[14],int cd, Service** input, int inptsize);
	Customer(const Customer& obj);
	~Customer();
	void setcId(int);
	void setbookingHistory(Service**,int n);
	void setnoOfService(int);
	void printservice(Service& obj)
	{
		obj.print();
	}
	int getcId();
	Service** getbookingHistory();
	int getnoOfService();
	friend ostream& operator<<(ostream& out,Customer& obj);
	Customer& operator=(Customer& obj);
	//******
	void addaSERVICE(Service& obj)
	{
		noOfService++;
		Service** temp;
		temp = new Service * [noOfService];
		for (int i = 0; i < noOfService - 1; i++)
		{
			temp[i] = bookingHistory[i];
		}delete[]bookingHistory; bookingHistory = new Service*[noOfService];
		for (int i = 0; i < noOfService - 1; i++)
		{
			bookingHistory[i]=temp[i];
		}
		bookingHistory[noOfService - 1] = &obj;
	}
	//******
	void setNameClassCust(Name obj)
	{
		setNameClass(obj);
	}
	Name getNameClassCust()
	{
		Name obj = getNameClass(); return obj;
	}
	void setDOBCust(Date obj)
	{
		setDateClass(obj);
	}
	Date getDOBClassCust()
	{
		Date rr = getDateClass();return rr;
	}
	void setAgeCust(int n)
	{
		setAge(n);
	}
	void setNidCust(char n[14])
	{
		setNid(n);
	}

	int getAgeCust()
	{
		int temp = getAge(); return temp;
	}
	void getNidCust(char n[14])
	{
		getNid(n);
	}
	Name getpNameCust()
	{
		Name temp = getpName(); return temp;
	}
	Date getDOBCust()
	{
		Date temp = getDOB(); return temp;
	}
	void setfNamePersonCust(char* fN)
	{
		setfNamePerson(fN);
	}
	void setlNamePersonCust(char* lN)
	{
		setlNamePerson(lN);
	}
	char* getfNamePersonCust()
	{
		char* forRetun = getfNamePerson();
		return forRetun;
	}
	char* getlNamePersonCust()
	{
		char* forRetun = getlNamePerson();
		return forRetun;
	}
	void setDayPersonCust(int n)
	{
		setDayPerson(n);
	}
	void setMonthPersonCust(int n)
	{
		setMonthPerson(n);
	}
	void setYearPersonCust(int n)
	{
		setYearPerson(n);
	}
	int getDayPersonCust()
	{
		int forReturn = getDayPerson();
		return forReturn;
	}
	int getMonthPersonCust()
	{
		int forReturn = getMonthPerson();
		return forReturn;
	}
	int getYearPersonCust()
	{
		int forReturn = getYearPerson();
		return forReturn;
	}
	//add following functions in this class //Getter, Setters
	// Destructor, Default and Parametrized Constructor, Copy Constructor,
	//	Output operator (print complete information of customer including history if any)
};
Customer::Customer()
{
	cId = 0;
	bookingHistory = NULL;
	noOfService = 0;
}
Customer::Customer(Name obj, Date obj1, int ag, char ni[14],int c, Service** input=NULL,int inptsize=0):Person(obj,obj1,ag,ni)
{
	cId = c;
	noOfService = inptsize;
	if (input != NULL)
	{
		bookingHistory = new Service * [inptsize];
		for (int i = 0; i < inptsize; i++)
		{
		bookingHistory[i] = input[i];
		}
	}
	else
	{
		bookingHistory = NULL;
	}
}
Customer& Customer::operator=(Customer& obj)
{
	setpName(obj.getpName());
	setDateClass(obj.getDateClass());
	setAge(obj.getAge());
	char n[14]; obj.getNid(n); setNid(n);
	cId = obj.cId;
	noOfService = obj.noOfService;
	bookingHistory = new Service * [noOfService];
	for (int i = 0; i < noOfService; i++)
	{
		bookingHistory[i] = obj.bookingHistory[i];
	}
	return *this;
}

Customer::Customer(const Customer& obj)
{	
	cId = obj.cId;
	noOfService = obj.noOfService;
	bookingHistory = new Service * [noOfService];
	for (int i = 0; i < noOfService; i++)
	{
		bookingHistory[i] = obj.bookingHistory[i];
	}

}
Customer::~Customer()
{
	if (bookingHistory != NULL)
	{
		delete [] bookingHistory;
	}
}
void Customer::setcId(int n)
{
	cId = n;
}
void Customer::setbookingHistory(Service** inpt, int n)
{
	if (bookingHistory != NULL)
	{
		delete [] bookingHistory;
	}
	noOfService = n;
	bookingHistory = new Service * [noOfService];
	for (int i = 0; i < noOfService; i++)
	{
		bookingHistory[i] = inpt[i];
	}
}

void Customer::setnoOfService(int n)
{
	noOfService = n;
}
int Customer::getcId()
{
	return cId;
}
Service** Customer::getbookingHistory()
{
	return bookingHistory;
}
int Customer::getnoOfService()
{
	return noOfService;
}
ostream& operator<<(ostream& out, Customer& obj)
{
	obj.printPerson();
	out << "cId::" << obj.cId << endl;
	out << "No of Service::" << obj.noOfService << endl;
	if (obj.bookingHistory != NULL)
	{
		out << "*********SERVICES START*************" << endl;
		for (int i = 0; i < obj.noOfService; i++)
		{
			out << "Service: " << i + 1 << " Details" << endl;
			obj.printservice(*obj.bookingHistory[i]);
		}
		out << "*********SERVICES END*************" << endl;
	}
	return out;
}

class Driver : public Person {
private:
	int dId;
	char** LicencesList;
	int noofLicences;
	float overallRanking;
	float salary;
	int experience;
	int status; // 1 for free, 2 if booked and 3 if canceled
	Service** serviceHistory;
	int noOfService;
	//Add services address in the array for tracking complete information of service. 
public:
	//******
	void addaSERVICE(Service& obj)
	{
		noOfService++;
		Service** temp;
		temp = new Service * [noOfService];
		for (int i = 0; i < noOfService - 1; i++)
		{
			temp[i] = serviceHistory[i];
		}delete[]serviceHistory; serviceHistory = new Service * [noOfService];
		for (int i = 0; i < noOfService - 1; i++)
		{
			serviceHistory[i] = temp[i];
		}
		serviceHistory[noOfService - 1] = &obj;
	}
	//******
	Driver& operator=(Driver& obj);
	Driver();
	Driver(Name obj, Date obj1, int ag, char ni[14], int dd,char **ll,int nooflis,float rank,float sala,int exp,int sta, Service** input, int inptsize);
	Driver(const Driver& obj);
	~Driver();
	void printservice(Service& obj)
	{
		obj.print();
	}
	void setdId(int);
	void setlicenceslist(char**, int);
	void setnooflisences(int);
	void setoverallranking(float);
	void setsalary(float);
	void setexperiecne(int);
	void setstatus(int);
	void setserviceHistory(Service**, int n);
	void setnoOfService(int);
	int getdId();
	char** getlicenceslist();
	int getnooflisences();
	float getoverallranking();
	float getsalary();
	int getexperiecne();
	int getstatus();
	Service** getserviceHistory();
	int getnoOfService();
	friend ostream& operator<<(ostream& out, Driver& obj);
	void setNameClassDriv(Name obj)
	{
		setNameClass(obj);
	}
	Name getNameClassDriv()
	{
		Name obj = getNameClass(); return obj;
	}
	void setDOBDriv(Date obj)
	{
		setDateClass(obj);
	}
	Date getDOBClassDriv()
	{
		Date rr = getDateClass();return rr;
	}
	void setAgeDriv(int n)
	{
		setAge(n);
	}
	void setNidDriv(char n[14])
	{
		setNid(n);
	}

	int getAgeDriv()
	{
		int temp = getAge(); return temp;
	}
	void getNidDriv(char n[14])
	{
		getNid(n);
	}
	Name getpNameDriv()
	{
		Name temp = getpName(); return temp;
	}
	Date getDOBDriv()
	{
		Date temp = getDOB(); return temp;
	}
	void setfNamePersonDriv(char* fN)
	{
		setfNamePerson(fN);
	}
	void setlNamePersonDriv(char* lN)
	{
		setlNamePerson(lN);
	}
	char* getfNamePersonDriv()
	{
		char* forRetun = getfNamePerson();
		return forRetun;
	}
	char* getlNamePersonDriv()
	{
		char* forRetun = getlNamePerson();
		return forRetun;
	}
	void setDayPersonDriv(int n)
	{
		setDayPerson(n);
	}
	void setMonthPersonDriv(int n)
	{
		setMonthPerson(n);
	}
	void setYearPersonDriv(int n)
	{
		setYearPerson(n);
	}
	int getDayPersonDriv()
	{
		int forReturn = getDayPerson();
		return forReturn;
	}
	int getMonthPersonDriv()
	{
		int forReturn = getMonthPerson();
		return forReturn;
	}
	int getYearPersonDriv()
	{
		int forReturn = getYearPerson();
		return forReturn;
	}
	//add following functions in this class
	// Getter, Setters
	//Destructor, Default and Parameterized Constructor, Copy Constructor,
	//Output operator (prints complete information of Driver)
};
Driver::Driver()
{
	dId = 0; LicencesList = NULL; noofLicences = 0; overallRanking = 0; salary = 0; experience = 0;
	status = 1; noOfService = 0; serviceHistory = NULL;
}
//Customer::Customer(Name obj, Date obj1, int ag, char ni[14], int c/*, Service** input=NULL,int inptsize=0*/) :Person(obj, obj1, ag, ni)

Driver::Driver(Name obj, Date obj1, int ag, char ni[14], int dd, char** ll, int nooflis, float rank, float sala, int exp, int sta, Service** input=NULL, int inptsize=0):Person(obj, obj1, ag, ni)
{
	dId = dd;
	noofLicences = nooflis;
	LicencesList = new char* [noofLicences];
	for (int i = 0; i < noofLicences; i++)
	{
		int len = strlen(ll[i]);
		LicencesList[i] = new char[len + 1];
		for (int j = 0; ll[i][j] != '\0'; j++)
		{
			LicencesList[i][j] = ll[i][j];
		}LicencesList[i][len] = '\0';
	}
	overallRanking = rank;
	salary = sala;
	experience = exp;
	status = sta;
	noOfService = inptsize;
	if (input != NULL)
	{
		serviceHistory = new Service * [inptsize];
		for (int i = 0; i < inptsize; i++)
		{
			serviceHistory[i] = input[i];
		}
	}
	else
	{
		serviceHistory = NULL;
	}
	
}
Driver& Driver::operator=(Driver& obj)
{
	setpName(obj.getpName());
	setDateClass(obj.getDateClass());
	setAge(obj.getAge());
	char n[14]; obj.getNid(n); setNid(n);
	dId = obj.dId;
	noofLicences = obj.noofLicences;
	LicencesList = new char* [noofLicences];
	for (int i = 0; i < noofLicences; i++)
	{
		int len = strlen(obj.LicencesList[i]);
		LicencesList[i] = new char[len + 1];
		for (int j = 0; obj.LicencesList[i][j] != '\0'; j++)
		{
			LicencesList[i][j] = obj.LicencesList[i][j];
		}LicencesList[i][len] = '\0';

	}
	overallRanking = obj.overallRanking;
	salary = obj.salary;
	experience = obj.experience;
	status = obj.status;
	noOfService = obj.noOfService;
	serviceHistory = new Service * [noOfService];
	for (int i = 0; i < noOfService; i++)
	{
		serviceHistory[i] = obj.serviceHistory[i];
	}
	return *this;
}

Driver:: Driver(const Driver& obj)
{
	dId = obj.dId;
	noofLicences = obj.noofLicences;
	LicencesList = new char* [noofLicences];
	for (int i = 0; i < noofLicences; i++)
	{
		int len = strlen(obj.LicencesList[i]);
		LicencesList[i] = new char[len + 1];
		for (int j = 0; obj.LicencesList[i][j] != '\0'; j++)
		{
			LicencesList[i][j] = obj.LicencesList[i][j];
		}LicencesList[i][len] = '\0';

	}
	overallRanking = obj.overallRanking;
	salary = obj.salary;
	experience = obj.experience;
	status = obj.status;
	noOfService = obj.noOfService;
	serviceHistory = new Service * [noOfService];
	for (int i = 0; i < noOfService; i++)
	{
		serviceHistory[i] = obj.serviceHistory[i];
	}

}
Driver::~Driver()
{
	if (LicencesList != NULL)
	{
		for (int i = 0; i < noofLicences; i++)
		{
			delete[] LicencesList[i];
		}
		delete[] LicencesList;
		LicencesList = NULL;
	}

	if (serviceHistory != NULL)
	{
		delete serviceHistory;
	}
}
void Driver::setdId(int n)
{
	dId = n;
}
void Driver::setlicenceslist(char** inp, int n)
{
	if (LicencesList != NULL)
	{
		for (int i = 0; i < noofLicences; i++)
		{
			delete[] LicencesList[i];
		}
		delete [] LicencesList;
		LicencesList = NULL;
	}
	noofLicences = n;
	LicencesList = new char* [noofLicences];
	for (int i = 0; i < noofLicences; i++)
	{
		int len = strlen(inp[i]);
		LicencesList[i] = new char[len + 1];
		for (int j = 0; inp[i][j] != '\0'; j++)
		{
			LicencesList[i][j] = inp[i][j];
		}LicencesList[i][len] = '\0';

	}
}
void Driver::setnooflisences(int n)
{
	noofLicences = n;
}
void Driver::setoverallranking(float n)
{
	overallRanking = n;
}
void Driver::setsalary(float n)
{
	salary = n;
}
void Driver::setexperiecne(int n)
{
	experience = n;
}
void Driver::setstatus(int n)
{
	status = n;
}
void Driver::setserviceHistory(Service** inpt , int n)
{
	if (n == 0)
	{
		noOfService = 0;
		serviceHistory = NULL;
	}
	else if (n != 0)
	{
		int chk = 0;
		for (int i = 0; i < n; i++)
		{
			if(inpt[i]==NULL)
			{
				chk = 1;
			}
		}
		if (chk == 1)
		{
			if (serviceHistory != NULL)
			{
				delete[] serviceHistory;
			}
			noOfService--;
			//noOfService = n;
			serviceHistory = new Service * [noOfService];
			for (int i = 0; i < noOfService; i++)
			{
				serviceHistory[i] = inpt[i];
			}
		}
		else
		{
			if (serviceHistory != NULL)
			{
				delete[] serviceHistory;
			}
			noOfService = n;
			serviceHistory = new Service * [noOfService];
			for (int i = 0; i < noOfService; i++)
			{
				serviceHistory[i] = inpt[i];
			}
		}
	}
}
void Driver::setnoOfService(int n)
{
	noOfService = n;
}
int Driver::getdId()
{
	return dId;
}
char** Driver::getlicenceslist()
{
	return LicencesList;
}
int Driver::getnooflisences()
{
	return noofLicences;
}
float Driver::getoverallranking()
{
	return overallRanking;
}
float Driver::getsalary()
{
	return salary;
}
int Driver::getexperiecne()
{
	return experience;
}
int Driver::getstatus()
{
	return status;
}
Service** Driver::getserviceHistory()
{
	return serviceHistory;
}
int Driver::getnoOfService()
{
	return noOfService;
}
ostream& operator<<(ostream& out, Driver& obj)
{
	obj.printPerson();
	out << "dId:" << obj.dId << endl;
	out << "No of lisences:" << obj.noofLicences << endl;
	for (int i = 0; i < obj.noofLicences; i++)
	{
		out << "Lisence " << i + 1 << ": " << obj.LicencesList[i] << endl;
	}
	out << "OverALL Ranking:" << obj.overallRanking << endl;
	out << "Salary: $" << obj.salary << endl;
	out << "Expiernce:" << obj.experience << endl;
	if (obj.status == 1)
	{
		out << "Status:FREE" << endl;
	}
	else if (obj.status == 2)
	{
		out << "Status:BOOKED" << endl;
	}
	else if (obj.status == 3)
	{
		out << "Status:CANCELLED" << endl;
	}
	out << "No of Service:" << obj.noOfService << endl;
	if (obj.serviceHistory != NULL)
	{
		out << "*********SERVICES START*************" << endl;
		for (int i = 0; i < obj.noOfService; i++)
		{
			out << "Service: " << i + 1 << " Details" << endl;
			obj.printservice(*obj.serviceHistory[i]);
		}
		out << "*********SERVICES END*************" << endl;
	}
	return out;
}


//********************3RD CLASS BOX END****************************

//********************4TH CLASS BOX START****************************
class Feature {
	int fId;
	char* description;
	float cost;
public:
	// you can add more members here if required
	//add member functions
	void setfid(int n)
	{
		fId = n;
	}
	int getfid()
	{
		return fId;
	}
	void setdescrip(char* n)
	{
		int len = strlen(n);
		if (description != NULL)
		{
			delete[] description;
		}
		description = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			description[i] = n[i];
		}
		description[len] = '\0';
	}
	char* getdescpointer()
	{
		return description;
	}
	void getdesc(char n[][500],int no)
	{
		int len = strlen(description);
		for (int i = 0; i < len; i++)
		{
			n[no][i] = description[i];
		}
		n[no][len] = '\0';
	}
	void setcost(float n)
	{
		cost = n;
	}
	float getcost()
	{
		return cost;
	}
	Feature()
	{
		fId = 0; description = NULL; cost = 0.0;
	}
	Feature(int id, char* des, float c)
	{
		fId = id; cost = c;
		int len = strlen(des); description = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			description[i] = des[i];
		}description[len] = '\0';

	}
	~Feature()
	{
		if (description != NULL)
		{
			delete[] description; description = NULL;
		}
	}
	Feature& operator=(Feature& obj)
	{
		fId = obj.fId; cost = obj.cost;
		if (description != NULL)
		{
			delete [] description;
		}
		int len = strlen(obj.description); description = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			description[i] = obj.description[i];
		}description[len] = '\0';
		return *this;
	}
	friend ostream& operator<<(ostream& out, Feature& obj);
};
ostream& operator<<(ostream& out, Feature& obj)
{
	out << "fID:" << obj.fId << endl;
	out << "Cost:" << obj.cost << endl;
	out << "Description:" << obj.description << endl;
	return out;
}

//********************4TH CLASS BOX END****************************

//********************5TH CLASS BOX START****************************
class Vehicle {
	int vId;
	int registrationNo;
	float avgMileage;
	char* LicenceType; // License required for driving the vehicle
	bool status; // false for free, true if booked in a service already
	char* fueltype;
	float overallRanking;
	char* category;
	char* subcategory;
	Date manufacturingDate;
	Feature* list;
	int nooffeaturelist;
	Service** serviceHistory;
	int noOfService;
	//Add secices address in the array for tracking complete information of service.
public:
	Vehicle();
	Vehicle(int vd, int rgstr, float avg, char* listype, bool sta, char* fultyp, float rank, Date d, Feature* lst, Service** inpt,int inptsize);
	~Vehicle();
	void printforaddservice()
	{
		cout << "vID:" << vId << endl;
		cout << "RegistrationNO:" << registrationNo << endl;
		cout << "avgMileage:" << avgMileage << endl;
		if (status == false)
		{
			cout << "Status:Free(false)" << endl;
		}
		else
			cout << "Status:Booked(True)" << endl;
		cout << "fueltype:" << fueltype << endl;
		cout << "overallRanking:" << overallRanking << endl;
		cout << "category:" << category << endl;
		cout << "subcategory:" << subcategory << endl;
		cout << "manufacturingDate:" << manufacturingDate << endl;
		cout << "NoofFeatures:" << nooffeaturelist << endl;
		for (int i = 0; i < nooffeaturelist; i++)
		{
			cout << "Feature:" << list[i] << endl;
		}
	}
	void printservice(Service& obj)
	{
		obj.print();
	}
	void setvid(int n)
	{
		vId = n;
	}
	void setregistrationno(int n)
	{
		registrationNo = n;
	}
	void setavgmilage(float n)
	{
		avgMileage = n;
	}
	void setlicencetype(char* n)
	{
		int len = strlen(n);
		if (LicenceType != NULL)
		{
			delete[] LicenceType;
		}
		LicenceType = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			LicenceType[i] = n[i];
		}
		LicenceType[len] = '\0';
	}
	void setstatus(bool n)
	{
		status = n;
	}
	void setfeultype(char* n)
	{
		int len = strlen(n);
		if (fueltype != NULL)
		{
			delete[] fueltype;
		}
		fueltype = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			fueltype[i] = n[i];
		}
		fueltype[len] = '\0';
	}
	void setoverallranking(float n)
	{
		overallRanking = n;
	}
	void setcategory(char* n)
	{
		int len = strlen(n);
		if (category != NULL)
		{
			delete[] category;
		}
		category = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			category[i] = n[i];
		}
		category[len] = '\0';
	}
	void setsubcategory(char* n)
	{
		int len = strlen(n);
		if (subcategory != NULL)
		{
			delete[] subcategory;
		}
		subcategory = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			subcategory[i] = n[i];
		}
		subcategory[len] = '\0';
	}
	void setdate(Date n)
	{
		manufacturingDate = n;
	}
	void setnooffeatruelist(int n)
	{
		nooffeaturelist = n;
	}
	void setfeature(Feature* n,int s)
	{
		if (list != NULL)
		{
			delete [] list;
		}
		list = new Feature[s];
		for (int i = 0; i < s; i++)
		{
			list[i] = n[i];
		}
	}
	void setserviceHistory(Service** inpt, int n)
	{
		if (n == 0)
		{
			noOfService = 0;
			serviceHistory = NULL;
		}
		else if (n != 0)
		{
			int chk = 0;
			for (int i = 0; i < n; i++)
			{
				if (inpt[i] == NULL)
				{
					chk = 1;
				}
			}
			if (chk == 1)
			{
				if (serviceHistory != NULL)
				{
					delete[] serviceHistory;
				}
				noOfService--;
				serviceHistory = new Service * [noOfService];
				for (int i = 0; i < noOfService; i++)
				{
					serviceHistory[i] = inpt[i];
				}
			}
			else
			{
				if (serviceHistory != NULL)
				{
					delete[] serviceHistory;
				}
				noOfService = n;
				serviceHistory = new Service * [noOfService];
				for (int i = 0; i < noOfService; i++)
				{
					serviceHistory[i] = inpt[i];
				}
			}
		}
	}
	void setnoOfService(int n)
	{
		noOfService = n;
	}
	int getvid()
	{
		return vId;
	}
	int getregistrationno()
	{
		return registrationNo;
	}
	float getavgmilage()
	{
		return avgMileage;
	}
	void getfueltype(char*& n)
	{
		int len = strlen(fueltype);
		if (n != NULL)
		{
			delete[] n;
		}
		n = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			n[i] = fueltype[i];
		}
		n[len] = '\0';
	}
	void getlicencetype(char*& n)
	{
		int len = strlen(LicenceType);
		if (n != NULL)
		{
			delete[] n;
		}
		n = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			n[i] = LicenceType[i];
		}
		n[len] = '\0';
	}
	bool getstatus()
	{
		return status;
	}
	float getoverallranking()
	{
		return overallRanking;
	}
	void getcategory(char*& n)
	{
		int len = strlen(category);
		if (n != NULL)
		{
			delete[] n;
		}
		n = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			n[i] = category[i];
		}
		n[len] = '\0';
	}
	void getsubcategory(char*& n)
	{
		int len = strlen(subcategory);
		if (n != NULL)
		{
			delete[] n;
		}
		n = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			n[i] = subcategory[i];
		}
		n[len] = '\0';
	}
	Date getdate()
	{
		return manufacturingDate;
	}
	int getnooffeaturelist()
	{
		return nooffeaturelist;
	}
	Feature* getfeature()
	{
		return list;
	}
	Service** getserviceHistory()
	{
		return serviceHistory;
	}
	int getnoOfService()
	{
		return noOfService;
	}
	Vehicle& operator=(Vehicle& obj);
	friend ostream& operator<<(ostream& out, Vehicle& obj);
	//******
	void addaSERVICE(Service& obj)
	{
		noOfService++;
		Service** temp;
		temp = new Service * [noOfService];
		for (int i = 0; i < noOfService - 1; i++)
		{
			temp[i] = serviceHistory[i];
		}delete[]serviceHistory; serviceHistory = new Service * [noOfService];
		for (int i = 0; i < noOfService - 1; i++)
		{
			serviceHistory[i] = temp[i];
		}
		serviceHistory[noOfService - 1] = &obj;
	}
	//******

	//you can add more members here if required
	// add member functions
};
Vehicle& Vehicle::operator=(Vehicle& obj)
{
	char* n; n = NULL;
	vId = obj.getvid();
	registrationNo = obj.getregistrationno();
	avgMileage = obj.getavgmilage();
	obj.getlicencetype(n); setlicencetype(n);
	status = obj.getstatus();
	obj.getfueltype(n);
	setfeultype(n); delete[]n; n = NULL;
	overallRanking = obj.getoverallranking();
	obj.getcategory(n);
	setcategory(n);
	obj.getsubcategory(n); setsubcategory(n);
	manufacturingDate = obj.getdate();
	nooffeaturelist = obj.getnooffeaturelist(); 
	setfeature(obj.getfeature(), nooffeaturelist);
	noOfService = obj.getnoOfService();
	setserviceHistory(obj.getserviceHistory(), noOfService);
	return *this;
}

Vehicle::Vehicle()
{
	vId = 0; registrationNo = 0; avgMileage = 0; LicenceType = NULL; status = false; fueltype = NULL; overallRanking = 0;
	list = NULL; serviceHistory = NULL; noOfService = 0; category = NULL; subcategory = NULL; nooffeaturelist = 0;
}
Vehicle::Vehicle(int vd, int rgstr, float avg, char* listype, bool sta, char* fultyp, float rank, Date d, Feature* lst, Service** inpt, int inptsize)
{
	vId = vd; registrationNo = rgstr; avgMileage = avg;
	int len = strlen(listype); LicenceType = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		LicenceType[i] = listype[i];
	}LicenceType[len] = '\0';
	status = sta;
	len = strlen(fultyp); fueltype = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		fueltype[i] = fultyp[i];
	}fueltype[len] = '\0';
	overallRanking = rank;
	manufacturingDate = d;
	list = new Feature;
	*list = *lst; noOfService = inptsize;
	serviceHistory = new Service * [inptsize];
	for (int i = 0; i < inptsize; i++)
	{
		serviceHistory[i] = inpt[i];
	}
}
Vehicle::~Vehicle()
{
	if (LicenceType != NULL)
	{
		delete[]LicenceType;
	}
	if (fueltype != NULL)
	{
		delete[]fueltype;
	}
	if (list != NULL)
	{
		delete [] list;
	}
	if (serviceHistory != NULL)
	{
		delete [] serviceHistory;
	}
	if (category != NULL)
	{
		delete[] category;
	}
	if (subcategory != NULL)
	{
		delete [] subcategory;
	}
}
ostream& operator<<(ostream& out, Vehicle& obj)
{
	out << "vID:" << obj.vId << endl;
	out << "RegistrationNO:" << obj.registrationNo << endl;
	out << "avgMileage:" << obj.avgMileage << endl;
	out << "LicenceType:" << obj.LicenceType << endl;
	if (obj.status == false)
	{
		out << "Status:Free(false)" << endl;
	}
	else
		out << "Status:Booked(True)" << endl;
	out << "fueltype:" << obj.fueltype << endl;
	out << "overallRanking:" << obj.overallRanking << endl;
	out << "category:" << obj.category << endl;
	out << "subcategory:" << obj.subcategory << endl;
	out << "manufacturingDate:" << obj.manufacturingDate << endl;
	out << "NoofFeatures:" << obj.nooffeaturelist << endl;
	for (int i = 0; i < obj.nooffeaturelist; i++)
	{
		out << "Feature:" << obj.list[i] << endl;
	}
	out << "No of Service:" << obj.noOfService << endl;
	if (obj.serviceHistory != NULL)
	{
		out << "*********SERVICES START*************" << endl;
		for (int i = 0; i < obj.noOfService; i++)
		{
			out << "Service: " << i + 1 << " Details" << endl;
			obj.printservice(*obj.serviceHistory[i]);
		}
		out << "*********SERVICES END*************" << endl;
	}
	return out;



}
// add Complete Hierarchy of vehicles based on their types and functions
//********************5TH CLASS BOX END****************************
// **************T*******************
//***************M********************
//***************S**********************

class TMS
{
	Customer* customers_list; int NoofCustomers;
	Driver* drivers_list; int NoofDrivers;
	Ride* rides_list; int NoofRides;
    Delivery* delivery_list; int Noofdelivery;
	Vehicle* vehicles_list; int NoofVehicles;
	int NoofSerivces;

public:
	TMS();
	TMS(Customer*, int nofCust);
	~TMS();
	void inputFromCustomerFile();
	void inputFromDriversFile();
	void inputFromServiceFile();
	void getNoOfRides_Delivery();
	void inputFromVehicleFile();
	void print_vehicles_list();
	void initializer();
	void print()
	{
		cout << "NoofCustomers" << NoofCustomers << endl;
		cout << "NoofDrivers" << NoofDrivers << endl;
		cout << "NoofRides" << NoofRides << endl;
		cout << "Noofdelivery" << Noofdelivery << endl;
		cout << "NoofSerivces" << NoofSerivces << endl;
	}
	//saving
	void save_customer_file();
	void save_driver_file();
	void save_services_file();
	void save_vehicle_file();


	//*****DIFFERENT FUNCTIONALITIES OF PROGRAM********
	void addNewCustomer();
	void addorRemoveDriver();
	void addorRemoveVehicle();
	void print_customers_list();
	void print_drivers_list();
	void print_vehicle_by_category();
	void printspeceficvehicle();
	void printspeceficcustomer();
	void printspeceficdriver();
	void printdriver_with45_ranking();
	void printdriver_withmany_license();
	void print_salary();
	void add_service();
	void cancel_a_service();
	void complete_a_service();
	void print_customers_using_same_vehicle();
	void printdriverwithdeliveryonsameday();
	void printpendingservices();
	void printpendingservices_ofdriver();
	void printcancelledcervices();
	//extra
	void get_noof_free_vehicles_driver(int& v, int& d);
	int menu();
	

	
};
TMS::TMS()
{
	customers_list = NULL; NoofCustomers = 0;
	drivers_list = NULL; NoofDrivers = 0;
	rides_list = NULL; NoofRides = 0;
	drivers_list = NULL; Noofdelivery = 0;
	vehicles_list = NULL; NoofVehicles = 0;
	int NoofSerivces = 0;


}
TMS::TMS(Customer *input,int noofcust)
{
	NoofCustomers = noofcust;
	customers_list = new Customer[NoofCustomers];
	for (int i = 0; i < NoofCustomers; i++)
	{
		customers_list[i] = input[i];
	}
	//not used anywhere do didnt need to create it
}
TMS::~TMS()
{
	cout << "DESTURCTOR" << endl;
	if (customers_list != NULL)
	{
		delete customers_list;
	}customers_list = NULL;
	if (drivers_list != NULL)
	{
		delete drivers_list;
	}drivers_list = NULL;
	if (rides_list != NULL)
	{
		delete rides_list;
	}	rides_list = NULL;
	if (delivery_list != NULL)
	{
		delete delivery_list;
	}	delivery_list = NULL;
	if (vehicles_list != NULL)
	{
		delete vehicles_list;
	}vehicles_list = NULL;
}
void TMS::inputFromCustomerFile()
{
	NoofCustomers = 0;
	char firstn[100], lastn[100];int d, m, y, age,id;
	char cnic[14];
	fstream input;
	input.open("Customers.txt");
	while (!input.eof())
	{
		input >> id;
		input.ignore();
		input.getline(firstn,100,' ');
		if (!strcmp(firstn, ""))
		{
			break;
		}
		input.getline(lastn, 100,' ');
		input >> d;
		input.ignore();
		input >> m;
		input.ignore();
		input >> y;
		input.ignore();
		input >> age;
		input.ignore();
		input>>cnic;
		input.clear();
		Name temp1(firstn, lastn);
		Date temp2(d, m, y);
		if (NoofCustomers == 0)
		{
			NoofCustomers++;
			customers_list = new Customer[1];
			customers_list[0].setpName(temp1);
			customers_list[0].setDateClass(temp2);
			customers_list[0].setAge(age);
			customers_list[0].setNid(cnic);
			customers_list[0].setcId(id);

		}
		else if(NoofCustomers!=0)
		{
			NoofCustomers++;
			//deep copy
			Customer* tempforcustomer;tempforcustomer = new Customer[NoofCustomers];
			for (int i = 0; i < NoofCustomers-1; i++)
			{
				tempforcustomer[i] = customers_list[i];
			}
			delete[] customers_list; customers_list = new Customer[NoofCustomers];
			for (int i = 0; i < NoofCustomers - 1; i++)
			{
				customers_list[i] = tempforcustomer[i];
			}
			delete[] tempforcustomer;
			int ind = NoofCustomers - 1;
			customers_list[ind].setpName(temp1);
			customers_list[ind].setDateClass(temp2);
			customers_list[ind].setAge(age);
			customers_list[ind].setNid(cnic);
			customers_list[ind].setcId(id);
		}
		input.ignore();
	}
	input.close();
}
void TMS::inputFromDriversFile()
{
	NoofDrivers = 0;
	char firstn[100], lastn[100],lics[3][100];int d, m, y, age, id;
	char cnic[14]; int nooflics, exp, status; float rank,salary;
	fstream input;
	input.open("Drivers.txt");
	while (!input.eof())
	{
		input >> id;
		input.ignore();
		input.getline(firstn, 100, ' ');
		if (!strcmp(firstn, ""))//so dont read an extra line
		{
			break;
		}
		input.getline(lastn, 100, ' ');
		input >> d;
		input.ignore();
		input >> m;
		input.ignore();
		input >> y;
		input.ignore();
		input >> age;
		input.ignore();
		input >> nooflics;
		input.ignore();
		if (nooflics == 1)
		{
			input.getline(lics[0], 100, ' ');
		}
		else if (nooflics == 2)
		{
			input.getline(lics[0], 100, ' ');
			input.getline(lics[1], 100, ' ');
		}
		else if (nooflics == 3)
		{
			input.getline(lics[0], 100, ' ');
			input.getline(lics[1], 100, ' ');
			input.getline(lics[2], 100, ' ');
		}
		input >> rank;
		input.ignore();
		input >> salary;
		input.ignore();
		input >> exp;
		input.ignore();
		input >> status;
		input.ignore();
		input >> cnic;
		input.clear();

		int len = strlen(firstn);
		Name temp1(firstn, lastn);
		Date temp2(d, m, y);
		char** tempforlics;
		tempforlics = new char* [nooflics];
		for (int i = 0; i < nooflics; i++)
		{
			int len = strlen(lics[i]);
			tempforlics[i] = new char[len + 1];
			for (int j = 0; lics[i][j] != '\0'; j++)
			{
				tempforlics[i][j] = lics[i][j];
			}tempforlics[i][len] = '\0';
		}
		
		if (NoofDrivers == 0)
		{
			NoofDrivers++;
			drivers_list = new Driver[1];
			drivers_list[0].setpName(temp1);
			drivers_list[0].setDateClass(temp2);
			drivers_list[0].setAge(age);
			drivers_list[0].setNid(cnic);
			drivers_list[0].setdId(id);
			drivers_list[0].setnooflisences(nooflics);
			drivers_list[0].setlicenceslist(tempforlics,nooflics);
			drivers_list[0].setexperiecne(exp);
			drivers_list[0].setoverallranking(rank);
			drivers_list[0].setsalary(salary);
			drivers_list[0].setstatus(status);
		}
		else if (NoofDrivers != 0)
		{
			NoofDrivers++;
			//deep copy
			Driver* tempfordriver;
			tempfordriver = new Driver[NoofDrivers];
			for (int i = 0; i < NoofDrivers - 1; i++)
			{
				tempfordriver[i] = drivers_list[i];
			}
			delete[] drivers_list; drivers_list = new Driver[NoofDrivers];
			for (int i = 0; i < NoofDrivers - 1; i++)
			{
				drivers_list[i] = tempfordriver[i];
			}
			
			int ind = NoofDrivers - 1;
			drivers_list[ind].setpName(temp1);
			drivers_list[ind].setDateClass(temp2);
			drivers_list[ind].setAge(age);
			drivers_list[ind].setNid(cnic);
			drivers_list[ind].setdId(id);
			drivers_list[ind].setnooflisences(nooflics);
			drivers_list[ind].setlicenceslist(tempforlics, nooflics);
			drivers_list[ind].setexperiecne(exp);
			drivers_list[ind].setoverallranking(rank);
			drivers_list[ind].setsalary(salary);
			drivers_list[ind].setstatus(status);
			delete [] tempfordriver;
		}
		for (int q = 0; q < nooflics; q++)
		{
			delete[] tempforlics[q];
		}
		delete[] tempforlics;
		input.ignore();		
	}
	input.close();
}
void TMS::getNoOfRides_Delivery()//not used
{
	NoofRides = 0; Noofdelivery = 0; NoofSerivces = 0;
	int cid, did, vid, m, d, y, hr, min, sec, status, noofpas,sid;
	float drivrank, vehrank, distance, fuelrate, goodsweight;
	char sour[500], dest[500], goodstyp[500], typ, ridetyp[100];
	fstream input;
	input.open("Services.txt");
	while (!input.eof())
	{
		input >> cid;
		input.ignore();
		input >> did;
		input.ignore();
		input >> vid;
		input.ignore();
		input >> sid;
		input.ignore();
		input >> typ;
		input.ignore();
		input.getline(sour, 500, ',');
		input.getline(dest, 500, ',');
		input >> distance;
		input.ignore();
		input >> d;
		input.ignore();
		input >> m;
		input.ignore();
		input >> y;
		input.ignore();
		input >> hr;
		input.ignore();
		input >> min;
		input.ignore();
		input >> sec;
		input.ignore();
		input >> status;
		input.ignore();
		input >> fuelrate;
		input.ignore();
		if (typ == 'R')
		{
			input >> noofpas;
			input.ignore();
			input.getline(ridetyp, 100, ',');
			input >> drivrank;
			input.ignore();
			input >> vehrank;
			input.ignore();
		}
		else if (typ == 'D')
		{
			input >> goodsweight;
			input.ignore();
			input >> goodstyp;
			input.ignore();
		}
		if (typ == 'R')
		{
			NoofRides++;
		}
		else if (typ == 'D')
		{
			Noofdelivery++;
		}
		NoofSerivces++;

	}
}
void TMS::inputFromServiceFile()
{
	//getNoOfRides_Delivery();
	int indforride = 0, indfordelivery = 0;
	rides_list = new Ride[50]; delivery_list = new Delivery[50];
	int cid, did, vid, m, d, y, hr, min, sec,status, noofpas,sid;
	float drivrank, vehrank,distance,fuelrate,goodsweight;
	char sour[500], dest[500], goodstyp[500],typ,ridetyp[100];
	//char* source, * destination, * ridetype, * goodstype;
	fstream input;
	input.open("Services.txt");
	while (!input.eof())
	{
		input >> cid;
		input.ignore();
		input >> did;
		input.ignore();
		input >> vid;
		input.ignore();
		input >> sid;
		input.ignore();
		input >> typ;
		input.ignore();
		input.getline(sour, 500, ',');
		if (!strcmp(sour, ""))
		{
			break;
		}
		input.getline(dest, 500, ',');
		input >> distance;
		input.ignore();
		input >> d;
		input.ignore();
		input >> m;
		input.ignore();
		input >> y;
		input.ignore();
		input >> hr;
		input.ignore();
		input >> min;
		input.ignore();
		input >> sec;
		input.ignore();
		input >> status;
		input.ignore();
		input >> fuelrate;
		input.ignore();
		if (typ == 'R')
		{
			input >> noofpas;
			input.ignore();
			input.getline(ridetyp,100, ',');
			input >> drivrank;
			input.ignore();
			input >> vehrank;
			input.ignore();
		}
		else if(typ=='D')
		{ 
			input >> goodsweight;
			input.ignore();
			input >> goodstyp;
			input.ignore();
		}
		Date temp(d, m, y);
		mTime tempTime(hr, min, sec);
		if (typ == 'R')
		{
			NoofRides++;
			rides_list[indforride].setsource(sour);
			rides_list[indforride].setdest(dest);
			rides_list[indforride].setdistance(distance);
			rides_list[indforride].setdate(temp);
			rides_list[indforride].settime(tempTime);
			rides_list[indforride].setstatus(status);
			rides_list[indforride].setfuelrate(fuelrate);
			rides_list[indforride].setsid(sid);
			rides_list[indforride].setcid(cid);
			rides_list[indforride].setdid(did);
			rides_list[indforride].setvid(vid);
			rides_list[indforride].setnoofpassengers(noofpas);
			rides_list[indforride].setridetype(ridetyp);
			rides_list[indforride].setdrivrank(drivrank);
			rides_list[indforride].setvehiclerank(vehrank);
			indforride++;
			for (int i = 0; i < NoofCustomers; i++)
			{
				if (cid == customers_list[i].getcId())
				{
					customers_list[i].addaSERVICE(rides_list[indforride - 1]);
				}
			}
			if (status != 2)
			{
				for (int i = 0; i < NoofDrivers; i++)
				{
					if (did == drivers_list[i].getdId())
					{
						drivers_list[i].addaSERVICE(rides_list[indforride - 1]);
					}
				}
				for (int i = 0; i < NoofVehicles; i++)
				{
					if (vid == vehicles_list[i].getvid())
					{
						vehicles_list[i].addaSERVICE(rides_list[indforride - 1]);
					}
				}
			}
			
		}
		else if (typ == 'D')
		{
			Noofdelivery++;
			delivery_list[indfordelivery].setsource(sour);
			delivery_list[indfordelivery].setdest(dest);
			delivery_list[indfordelivery].setdistance(distance);
			delivery_list[indfordelivery].setdate(temp);
			delivery_list[indfordelivery].settime(tempTime);
			delivery_list[indfordelivery].setstatus(status);
			delivery_list[indfordelivery].setfuelrate(fuelrate);
			delivery_list[indfordelivery].setsid(sid);
			delivery_list[indfordelivery].setcid(cid);
			delivery_list[indfordelivery].setdid(did);
			delivery_list[indfordelivery].setvid(vid);
			delivery_list[indfordelivery].setgoodsweight(goodsweight);
			delivery_list[indfordelivery].setgoodstype(goodstyp);
			indfordelivery++;
			for (int i = 0; i < NoofCustomers; i++)
			{
				if (cid == customers_list[i].getcId())
				{
					customers_list[i].addaSERVICE(delivery_list[indfordelivery - 1]);
				}
			}
			if (status != 2)
			{
				for (int i = 0; i < NoofDrivers; i++)
				{
					if (did == drivers_list[i].getdId())
					{
						drivers_list[i].addaSERVICE(delivery_list[indfordelivery - 1]);
					}
				}
				for (int i = 0; i < NoofVehicles; i++)
				{
					if (vid == vehicles_list[i].getvid())
					{
						vehicles_list[i].addaSERVICE(delivery_list[indfordelivery - 1]);
					}
				}
			}
		}
	}

	input.close();
}
void TMS::inputFromVehicleFile()
{
	NoofVehicles = 0;

	int id, regisno, d, m, y, noofeature, status,fid,fid1,fid2;
	float avgmilge, ranking,cost,cost1,cost2;
	char lisence[100], fuel[100], categ[100], subcateg[100], desc[500], desc1[500], desc2[500];
	char* licensetype, * fueltype, * category, * subcategory, * description, * description1=NULL, * description2=NULL;
	fstream input;
	input.open("Vehicles.txt");
	while (!input.eof())
	{
		input >> id;
		input.ignore();
		input >> regisno;
		input.ignore();
		input >> avgmilge;
		input.ignore();
		input.getline(lisence, 100, ',');
		if (!strcmp(lisence, ""))//so dont read an extra line
		{
			break;
		}
		input >> status;
		input.ignore();
		input.getline(fuel, 100, ',');
		input >> ranking;
		input.ignore();
		input.getline(categ, 100, ',');
		input.getline(subcateg, 100, ',');
		input >> d;
		input.ignore();
		input >> m;
		input.ignore();
		input >> y;
		input.ignore();
		input >> noofeature;
		if (noofeature == 1)
		{
			input.ignore();
			input >> fid;
			input.ignore();
			input.getline(desc, 500, ',');
			input.clear();
			input >> cost;
		}
		else if (noofeature == 2)
		{
			input.ignore();
			input >> fid;
			input.ignore();
			input.getline(desc, 500, ',');
			input >> cost;
			input.ignore();
			input >> fid1;
			input.ignore();
			input.getline(desc1, 500, ',');
			input.clear();
			input >> cost1;
		}
		else if (noofeature == 3)
		{
			input.ignore();
			input >> fid;
			input.ignore();
			input.getline(desc, 500, ',');
			input >> cost;
			input.ignore();
			input >> fid1;
			input.ignore();
			input.getline(desc1, 500, ',');
			input >> cost1;
			input.ignore();
			input >> fid2;
			input.ignore();
			input.getline(desc2, 500, ',');
			input.clear();
			input >> cost2;
		}
		int len = strlen(lisence);
		licensetype = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			licensetype[i] = lisence[i];
		}licensetype[len] = '\0';
		len = strlen(fuel);
		fueltype = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			fueltype[i] = fuel[i];
		}fueltype[len] = '\0';
		len = strlen(categ);
		category = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			category[i] = categ[i];
		}category[len] = '\0';
		len = strlen(subcateg);
		subcategory= new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			subcategory[i] = subcateg[i];
		}subcategory[len] = '\0';
		len = strlen(desc);
		description = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			description[i] = desc[i];
		}description[len] = '\0';
		if (noofeature == 2|| noofeature==3)
		{
			len = strlen(desc1);
			description1 = new char[len + 1];
			for (int i = 0; i < len; i++)
			{
				description1[i] = desc1[i];
			}description1[len] = '\0';
		}
		if (noofeature == 3)
		{
			len = strlen(desc2);
			description2 = new char[len + 1];
			for (int i = 0; i < len; i++)
			{
				description2[i] = desc2[i];
			}description2[len] = '\0';
		}
		Feature* temp2;
		temp2 = new Feature[noofeature];
		temp2[0].setcost(cost);
		temp2[0].setdescrip(description);
		temp2[0].setfid(fid);
		if (noofeature == 2 || noofeature == 3)
		{
			temp2[1].setcost(cost1);
			temp2[1].setdescrip(description1);
			temp2[1].setfid(fid1);
		}
		if (noofeature == 3)
		{
			temp2[2].setcost(cost2);
			temp2[2].setdescrip(description2);
			temp2[2].setfid(fid2);
		}
		Date temp1(d, m, y);
		if (NoofVehicles == 0)
		{
			NoofVehicles++;
			vehicles_list = new Vehicle[1];
			vehicles_list[0].setvid(id);
			vehicles_list[0].setregistrationno(regisno);
			vehicles_list[0].setavgmilage(avgmilge);
			vehicles_list[0].setlicencetype(licensetype);
			vehicles_list[0].setstatus(status);
			vehicles_list[0].setfeultype(fueltype);
			vehicles_list[0].setoverallranking(ranking);
			vehicles_list[0].setcategory(category);
			vehicles_list[0].setsubcategory(subcategory);
			vehicles_list[0].setdate(temp1);
			vehicles_list[0].setnooffeatruelist(noofeature);
			vehicles_list[0].setfeature(temp2, noofeature);
		}
		else if (NoofVehicles != 0)
		{
			NoofVehicles++;
			//deep copy
			Vehicle* tempforvehicle; tempforvehicle = new Vehicle[NoofVehicles];
			for (int i = 0; i < NoofVehicles - 1; i++)
			{
				tempforvehicle[i] = vehicles_list[i];
			}
			delete[] vehicles_list;
			vehicles_list = new Vehicle[NoofVehicles];
			for (int i = 0; i < NoofVehicles - 1; i++)
			{
				vehicles_list[i] = tempforvehicle[i];
			}
			delete[] tempforvehicle;
			int ind = NoofVehicles - 1;
			vehicles_list[ind].setvid(id);
			vehicles_list[ind].setregistrationno(regisno);
			vehicles_list[ind].setavgmilage(avgmilge);
			vehicles_list[ind].setlicencetype(licensetype);
			vehicles_list[ind].setstatus(status);
			vehicles_list[ind].setfeultype(fueltype);
			vehicles_list[ind].setoverallranking(ranking);
			vehicles_list[ind].setcategory(category);
			vehicles_list[ind].setsubcategory(subcategory);
			vehicles_list[ind].setdate(temp1);
			vehicles_list[ind].setnooffeatruelist(noofeature);
			vehicles_list[ind].setfeature(temp2, noofeature);
		}
		delete[] licensetype; delete[]fueltype; delete[] category; delete[] subcategory; delete[] description;
		input.ignore();
	}
	input.close();

}
void TMS::print_vehicles_list()
{
	cout << NoofVehicles << endl;
	for (int i = 0; i < NoofVehicles; i++)
	{
		cout << vehicles_list[i];
		cout << endl << endl;
	}
}
void TMS::initializer()
{
	inputFromDriversFile();
	inputFromCustomerFile();
	inputFromVehicleFile();
	inputFromServiceFile();
	srand(time(0));
}
//1. Add a new Customer
void TMS::addNewCustomer()
{
	char firstn[100], lastn[100]; char* fn, * ln; int d, m, y, age, id;
	char cnic[14];
	cout << "Enter the frist name" << endl;
	cin.getline(firstn, 100);
	cout << "Enter the last name" << endl;
	cin.getline(lastn, 100);
	cout << "Enter the day for dob" << endl;
	cin >> d;
	cout << "Enter the month for dob" << endl;
	cin >> m;
	cout << "Enter the year for dob" << endl;
	cin >> y;
	cout << "Enter the age " << endl;
	cin >> age;
	cout << "Enter the cnic(13 digits)" << endl;
	cin >> cnic;
	while (strlen(cnic) != 13)
	{
		cout << "wrong cnic,,,enter again" << endl;
		cin >> cnic;
	}
	id = 11111 + (rand() % 88888);
	int len = strlen(firstn);
	fn = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		fn[i] = firstn[i];
	}fn[len] = '\0';
	len = strlen(lastn);
	ln = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		ln[i] = lastn[i];
	}ln[len] = '\0';
	Name temp1(fn, ln);
	Date temp2(d, m, y);
	NoofCustomers++;
	//deep copy
	Customer* tempforcustomer; tempforcustomer = new Customer[NoofCustomers];
	for (int i = 0; i < NoofCustomers - 1; i++)
	{
		tempforcustomer[i] = customers_list[i];
	}
	delete[] customers_list; customers_list = new Customer[NoofCustomers];
	for (int i = 0; i < NoofCustomers - 1; i++)
	{
		customers_list[i] = tempforcustomer[i];
	}
	delete[] tempforcustomer;
	delete[]fn; delete[]ln;
	int ind = NoofCustomers - 1;
	customers_list[ind].setpName(temp1);
	customers_list[ind].setDateClass(temp2);
	customers_list[ind].setAge(age);
	customers_list[ind].setNid(cnic);
	customers_list[ind].setcId(id);
	cout << "Your unique id is" << id << endl;
	cout << "ADDED" << endl;

}
//2. Add or remove a Driver
void TMS::addorRemoveDriver()
{
	int c=0;
	cout << "for ADD press 1" << endl;
	cout << "for REMOVE press 2" << endl;
	cin >> c;
	cin.ignore();
	if (c == 1)
	{
		char firstn[100], lastn[100], lics[3][100]; char* fn, * ln; int d, m, y, age, id;
		char cnic[14]; int nooflics, exp, status; float rank, salary;
		cout << "Enter the frist name" << endl;
		cin.getline(firstn, 100);
		cout << "Enter the last name" << endl;
		cin.getline(lastn, 100);
		cout << "Enter the day for dob" << endl;
		cin >> d;
		cout << "Enter the month for dob" << endl;
		cin >> m;
		cout << "Enter the year for dob" << endl;
		cin >> y;
		cout << "Enter the age " << endl;
		cin >> age;
		cout << "Enter the cnic(13 digits)" << endl;
		cin >> cnic;
		while (strlen(cnic) != 13)
		{
			cout << "wrong cnic,,,enter again" << endl;
			cin >> cnic;
		}
		id = 11111 + (rand() % 88888);
		cout << "Enter no of licenses" << endl;
		cin >> nooflics;
		cout << "Enter licenses one by one" << endl;
		cin.ignore();
		if (nooflics == 1)
		{
			cin.getline(lics[0], 100);
		}
		else if (nooflics == 2)
		{
			cin.getline(lics[0], 100);
			cin.getline(lics[1], 100);
		}
		else if (nooflics == 3)
		{
			cin.getline(lics[0], 100);
			cin.getline(lics[1], 100);
			cin.getline(lics[2], 100);
		}
		rank=1.0;
		cout << "Enter the starting salary" << endl;
		cin >> salary;
		cout << "Enter the expierence" << endl;
		cin >> exp;
		status = 1;
		int len = strlen(firstn);
		fn = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			fn[i] = firstn[i];
		}fn[len] = '\0';
		len = strlen(lastn);
		ln = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			ln[i] = lastn[i];
		}ln[len] = '\0';
		Name temp1(fn, ln);
		Date temp2(d, m, y);
		char** tempforlics;
		tempforlics = new char* [nooflics];
		for (int i = 0; i < nooflics; i++)
		{
			int len = strlen(lics[i]);
			tempforlics[i] = new char[len + 1];
			for (int j = 0; lics[i][j] != '\0'; j++)
			{
				tempforlics[i][j] = lics[i][j];
			}tempforlics[i][len] = '\0';
		}
		NoofDrivers++;
		//deep copy
		Driver* tempfordriver;
		tempfordriver = new Driver[NoofDrivers];
		for (int i = 0; i < NoofDrivers - 1; i++)
		{
			tempfordriver[i] = drivers_list[i];
		}
		delete[] drivers_list; drivers_list = new Driver[NoofDrivers];
		for (int i = 0; i < NoofDrivers - 1; i++)
		{
			drivers_list[i] = tempfordriver[i];
		}

		int ind = NoofDrivers - 1;
		drivers_list[ind].setpName(temp1);
		drivers_list[ind].setDateClass(temp2);
		drivers_list[ind].setAge(age);
		drivers_list[ind].setNid(cnic);
		drivers_list[ind].setdId(id);
		drivers_list[ind].setnooflisences(nooflics);
		drivers_list[ind].setlicenceslist(tempforlics, nooflics);
		drivers_list[ind].setexperiecne(exp);
		drivers_list[ind].setoverallranking(rank);
		drivers_list[ind].setsalary(salary);
		drivers_list[ind].setstatus(status);
		delete[] tempfordriver;

		delete[] fn; delete[]ln;
		for (int q = 0; q < nooflics; q++)
		{
			delete[] tempforlics[q];
		}
		cout << "Your unique id is" << id << endl;
	}
	else if (c == 2)
	{
		int id;
		cout << "Enter the id of driver" << endl;
		cin >> id;
		for (int i = 0; i < NoofDrivers; i++)
		{
			if (id == drivers_list[i].getdId())
			{
				for (int j = i; j < NoofDrivers-1; j++)
				{
					drivers_list[j] = drivers_list[j + 1];
				}
				Driver* tempfordriver;
				tempfordriver = new Driver[NoofDrivers];
				for (int i = 0; i < NoofDrivers-1; i++)
				{
					tempfordriver[i] = drivers_list[i];
				}
				NoofDrivers--;
				delete[] drivers_list; drivers_list = new Driver[NoofDrivers];
				for (int i = 0; i < NoofDrivers; i++)
				{
					drivers_list[i] = tempfordriver[i];
				}
				delete[] tempfordriver;
			}
		}

	}

}
//3. Add or remove a Vehicle
void TMS::addorRemoveVehicle()
{
	int c = 0;
	cout << "for ADD press 1" << endl;
	cout << "for REMOVE press 2" << endl;
	cin >> c;
	cin.ignore();
	if (c == 1)
	{
		int id, regisno, d, m, y, noofeature, status, fid;
		float avgmilge, ranking, cost;
		char fuel[100], desc[500];
		char* licensetype, * fueltype, * category, * subcategory = NULL, * description;
		cout << "Enter registration no:" << endl;
		cin >> regisno;
		cout << "Enter avg mileage:" << endl;
		cin >> avgmilge;
		cout << "Choose licence required:" << endl; int choicel;
		cout << "1. Motorcar/jeep" << endl;
		cout << "2. Motorbike/rickshaw" << endl;
		cout << "3. LTV" << endl;
		cout << "4. HTV" << endl;
		cout << "5. Tractor" << endl;
		cout << "6. PSV" << endl;
		cout << "7. International driver's permit" << endl;
		cin >> choicel;
		string stringlics[7];
		stringlics[0] = "Motorcar/jeep";
		stringlics[1] = "Motorbike/rickshaw";
		stringlics[2] = "LTV";
		stringlics[3] = "HTV";
		stringlics[4] = "Tractor";
		stringlics[5] = "PSV";
		stringlics[6] = "International driver's permit";
		string n1 = stringlics[choicel - 1];
		licensetype = new char[n1.length() + 1];
		for (int i = 0; i < n1.length(); i++)
		{
			licensetype[i] = n1[i];
		}licensetype[n1.length()] = '\0';
		status = 0;
		cin.ignore();
		cout << "Enter the fuel required" << endl;
		cin.getline(fuel, 100);
		ranking = 1.0;
		cout << "Enter the category(1-3)" << endl; int choicecate;
		cout << "1-Ride 2-Transporatation 3-Both" << endl;
		cin >> choicecate;
		string catestring[3]; catestring[0] = "ride"; catestring[1] = "transportation"; catestring[2] = "both";
		string n2 = catestring[choicecate - 1];
		category = new char[n2.length() + 1];
		for (int i = 0; i < n2.length(); i++)
		{
			category[i] = n2[i];
		}category[n2.length()] = '\0';
		if (choicel == 1 || choicel == 3)
		{
			cout << "Enter the subcategory(1-2)" << endl;
			string subcatestring[2]; subcatestring[0] = "small"; subcatestring[1] = "large";
			cout << "1-Small 2-Large" << endl; int subcat;
			cin >> subcat;
			string n3 = subcatestring[subcat - 1];
			subcategory = new char[n3.length() + 1];
			for (int i = 0; i < n3.length(); i++)
			{
				subcategory[i] = n3[i];
			}subcategory[n3.length()] = '\0';
		}
		else if (choicel == 2)
		{
			cout << "Enter the subcategory(1-2)" << endl;
			string subcatestring[2]; subcatestring[0] = "light"; subcatestring[1] = "heavy";
			cout << "1-light 2-heavy" << endl; int subcat;
			cin >> subcat;
			string n3 = subcatestring[subcat - 1];
			subcategory = new char[n3.length() + 1];
			for (int i = 0; i < n3.length(); i++)
			{
				subcategory[i] = n3[i];
			}subcategory[n3.length()] = '\0';
		}
		cout << "Enter day for manufactring date" << endl;
		cin >> d;
		cout << "Enter month for manufactring date" << endl;
		cin >> m;
		cout << "Enter year for manufactring date" << endl;
		cin >> y;
		noofeature = 1;
		fid = 11111 + (rand() % 88888);	
		cin.ignore();
		cout << "Enter feature description" << endl;
		cin.getline(desc, 500);
		cin.clear();
		cout << "Enter cost" << endl;
		cin >> cost;
		int len = strlen(fuel);
		fueltype = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			fueltype[i] = fuel[i];
		}fueltype[len] = '\0';
		len = strlen(desc);
		description = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			description[i] = desc[i];
		}description[len] = '\0';
		Feature* temp2;
		temp2 = new Feature[noofeature];
		for (int i = 0; i < noofeature; i++)
		{
			temp2[i].setcost(cost);
			temp2[i].setdescrip(description);
			temp2[i].setfid(fid);
		}
		Date temp1(d, m, y);
		NoofVehicles++;
		//deep copy
		Vehicle* tempforvehicle; tempforvehicle = new Vehicle[NoofVehicles];
		for (int i = 0; i < NoofVehicles - 1; i++)
		{
			tempforvehicle[i] = vehicles_list[i];
		}
		delete[] vehicles_list;
		vehicles_list = new Vehicle[NoofVehicles];
		for (int i = 0; i < NoofVehicles - 1; i++)
		{
			vehicles_list[i] = tempforvehicle[i];
		}
		delete[] tempforvehicle;
		int ind = NoofVehicles - 1;
		id = 11111 + (rand() % 88888);
		vehicles_list[ind].setvid(id);
		vehicles_list[ind].setregistrationno(regisno);
		vehicles_list[ind].setavgmilage(avgmilge);
		vehicles_list[ind].setlicencetype(licensetype);
		vehicles_list[ind].setstatus(status);
		vehicles_list[ind].setfeultype(fueltype);
		vehicles_list[ind].setoverallranking(ranking);
		vehicles_list[ind].setcategory(category);
		vehicles_list[ind].setsubcategory(subcategory);
		vehicles_list[ind].setdate(temp1);
		vehicles_list[ind].setnooffeatruelist(noofeature);
		vehicles_list[ind].setfeature(temp2, noofeature);
		delete[] licensetype; delete[]fueltype; delete[] category; delete[] subcategory; delete[] description;
		cout << "Your unique id is" << id << endl;
	}
	else if (c == 2)
	{
	int id;
	cout << "Enter the id of vehicle" << endl;
	cin >> id;
	for (int i = 0; i < NoofVehicles; i++)
	{
		if (id == vehicles_list[i].getvid())
		{
			for (int j = i; j < NoofVehicles - 1; j++)
			{
				vehicles_list[j] = vehicles_list[j + 1];
			}
			Vehicle* tempforveh;
			tempforveh = new Vehicle[NoofVehicles];
			for (int i = 0; i < NoofVehicles - 1; i++)
			{
				tempforveh[i] = vehicles_list[i];
			}
			NoofVehicles--;
			delete[] vehicles_list; vehicles_list = new Vehicle[NoofVehicles];
			for (int i = 0; i < NoofVehicles; i++)
			{
				vehicles_list[i] = tempforveh[i];
			}
			delete[] tempforveh;
		}
	}

	}
}
//4. Print List of All Customers
void TMS::print_customers_list()
{
	cout <<"Number of Customers" << NoofCustomers << endl;
	for (int i = 0; i < NoofCustomers; i++)
	{
		cout << customers_list[i];
		cout << endl << endl;
	}
}
//5. Print List of All drivers
void TMS::print_drivers_list()
{
	cout << "Number of Drivers" << NoofDrivers << endl;
	for (int i = 0; i < NoofDrivers; i++)
	{
		cout << drivers_list[i];
		cout << endl << endl;
	}
}
//6. Print complete list of vehicles with details by their category
void TMS::print_vehicle_by_category()
{
	cout << "Number of Vehicles" << NoofVehicles << endl;

	cout << "************************FOR RIDE VEHICLES*****************" << endl;
	cout << "****************SMALL VEHICLES****************************" << endl;
	for (int i = 0; i < NoofVehicles; i++)
	{
		char* n; n = NULL; vehicles_list[i].getsubcategory(n);
		char* n1; n1 = NULL; vehicles_list[i].getcategory(n1);
		if (!strcmp(n, "small") && !strcmp(n1,"ride"))
		{
			cout << vehicles_list[i] << endl;
		}
		delete[]n; delete[]n1;
	}
	cout << "**************************LARGE VEHICLES***************************" << endl;
	for (int i = 0; i < NoofVehicles; i++)
	{
		char* n; n = NULL; vehicles_list[i].getsubcategory(n);
		char* n1; n1 = NULL; vehicles_list[i].getcategory(n1);
		if (!strcmp(n, "large") && !strcmp(n1, "ride"))
		{
			cout << vehicles_list[i] << endl;
		}delete[]n; delete[]n1;
	}
	cout << "************************" << endl;
	cout << "***********************FOR TRANSPORTATION VEHICLES****************" << endl;
	cout << "**************************LIGHT VEHICLES*********" << endl;
	for (int i = 0; i < NoofVehicles; i++)
	{
		char* n; n = NULL; vehicles_list[i].getsubcategory(n); 
		char* n1; n1 = NULL; vehicles_list[i].getcategory(n1);
		if (!strcmp(n, "light") && !strcmp(n1, "transportation"))
		{
			cout << vehicles_list[i] << endl;
		}delete[]n; delete[]n1;
	}
	cout << "*********************************HEAVY VEHICLES**********" << endl;
	for (int i = 0; i < NoofVehicles; i++)
	{
		char* n; n = NULL; vehicles_list[i].getsubcategory(n);
		char* n1; n1 = NULL; vehicles_list[i].getcategory(n1);
		if (!strcmp(n, "heavy") && !strcmp(n1, "transportation"))
		{
			cout << vehicles_list[i] << endl;
		}delete[]n; delete[]n1;
	}
	cout << "************************" << endl;
	cout << "********************************FOR BOTH VEHICLES***********" << endl;
	cout << "*********************************SMALL VEHICLES*********" << endl;
	for (int i = 0; i < NoofVehicles; i++)
	{
		char* n; n = NULL; vehicles_list[i].getsubcategory(n); 
		char* n1; n1 = NULL; vehicles_list[i].getcategory(n1);
		if (!strcmp(n, "small") && !strcmp(n1, "both"))
		{
			cout << vehicles_list[i] << endl;
		}delete[]n; delete[]n1;
	}
	cout << "***********************************LARGE VEHICLES*******" << endl;
	for (int i = 0; i < NoofVehicles; i++)
	{
		char* n; n = NULL; vehicles_list[i].getsubcategory(n);
		char* n1; n1 = NULL; vehicles_list[i].getcategory(n1);
		if (!strcmp(n, "large") && !strcmp(n1, "both"))
		{
			cout << vehicles_list[i] << endl;
		}delete[]n; delete[]n1;
	}
	cout << "************************" << endl;


}
//7. Print complete details and service history of a particular vehicle, (Provide vehicle ID)
void TMS::printspeceficvehicle()
{
	int id;
	cout << "Enter the vehicle id" << endl;
	cin >> id;
	for (int i = 0; i < NoofVehicles; i++)
	{
		if (id == vehicles_list[i].getvid())
		{
			cout << vehicles_list[i] << endl;
			break;
		}
	}
}
//8. Print complete history of a particular customer(Provide customer ID)
void TMS::printspeceficcustomer()
{
	int id;
	cout << "Enter the customer id" << endl;
	cin >> id;
	for (int i = 0; i < NoofCustomers; i++)
	{
		if (id == customers_list[i].getcId())
		{
			cout << customers_list[i] << endl;
			break;
		}
	}
}
//9. Print complete history of a driver including services. (Provide driver ID)
void TMS::printspeceficdriver()
{
	int id;
	cout << "Enter the driver id" << endl;
	cin >> id;
	for (int i = 0; i < NoofDrivers; i++)
	{
		if (id == drivers_list[i].getdId())
		{
			cout << drivers_list[i] << endl;
			break;
		}
	}
}
//10. Print list of all drivers who have ranking above 4.5.
void TMS::printdriver_with45_ranking()
{
	for (int i = 0; i < NoofDrivers; i++)
	{
		if (drivers_list[i].getoverallranking() >= 4.5)
		{
			cout << drivers_list[i] << endl;
		}
	}

}
//11. Print list of all drivers who have multiple licenses and their license information too.
void TMS::printdriver_withmany_license()
{
	for (int i = 0; i < NoofDrivers; i++)
	{
		if (drivers_list[i].getnooflisences() > 1)
		{
			cout << drivers_list[i] << endl;
		}
	}
}
//12. Print updated salary of all drivers based on their updated ranking
void TMS::print_salary()
{
	for (int i = 0; i < NoofDrivers; i++)
	{
		if (drivers_list[i].getoverallranking() > 4.5)
		{
			float salary = drivers_list[i].getsalary();
			float bonus = (15 * salary) / 100; float newsalary = salary + bonus;
			drivers_list[i].setsalary(newsalary);
		}
		char* fn, * ln;
		fn = drivers_list[i].getfNamePerson();
		ln = drivers_list[i].getlNamePerson();
		cout << fn << " " << ln << endl;
		cout << "Salary:: $" << drivers_list[i].getsalary() << endl;
		fn = NULL; ln = NULL;
		delete[]fn; delete[]ln;
	}
}
//13. Add a Service request
void TMS::add_service()
{
	int id;
	cout << "Enter the customer id" << endl;
	cin >> id;
	int choice;
	cout << "Choose service type(1-2)" << endl;
	cout << "1-Ride or 2-Delivery" << endl;
	cin >> choice;
	while (choice > 2 || choice < 1)
	{
		cout << "Wrong Input" << endl;
		cout << "Choose service type(1-2)" << endl;
		cout << "1-Ride or 2-Delivery" << endl;
		cin >> choice;
	}
	
		int nooffreevehicles, nooffredrivers;
		get_noof_free_vehicles_driver(nooffreevehicles, nooffredrivers);
		Vehicle* free_vehicles = new Vehicle[nooffreevehicles]; int indforveh = 0;
		Driver* free_drivers = new Driver[nooffredrivers]; int indfordri = 0;
		for (int i = 0; i < NoofDrivers; i++)
		{
			if (drivers_list[i].getstatus() == 3 || drivers_list[i].getstatus() == 1)
			{
				free_drivers[indfordri] = drivers_list[i]; indfordri++;
			}
		}
		for (int i = 0; i < NoofVehicles; i++)
		{
			if (!vehicles_list[i].getstatus())
			{
				free_vehicles[indforveh] = vehicles_list[i]; indforveh++;
			}
		}
		//sorting both
		//vehicle
		for (int i = 0; i < nooffreevehicles; i++)
		{
			float rank; rank = free_vehicles[i].getoverallranking();
			for (int j = i; j < nooffreevehicles; j++)
			{
				float rank2 = free_vehicles[j].getoverallranking();
				if (rank < rank2)
				{
					Vehicle temp;
					temp = free_vehicles[i];
					free_vehicles[i] = free_vehicles[j];
					free_vehicles[j] = temp;
				}
			}
		}
		//driver
		for (int i = 0; i < nooffredrivers; i++)
		{
			float rank; rank = free_drivers[i].getoverallranking();
			for (int j = i; j < nooffredrivers; j++)
			{
				float rank2 = free_drivers[j].getoverallranking();
				if (rank < rank2)
				{
					Driver temp;
					temp = free_drivers[i];
					free_drivers[i] = free_drivers[j];
					free_drivers[j] = temp;
				}
			}
		}
		cout << "Choose a driver(1-"<<nooffredrivers<<")" << endl;
		for (int i = 0; i < nooffredrivers; i++)
		{
			cout << "*****Driver no::" << i + 1 <<" ***" << endl;
			//cout << free_drivers[i] << endl;
			cout << free_drivers[i].getNameClass() << endl;;
		}
		int freedriverchoice;
		cin >> freedriverchoice;
		while (freedriverchoice<1 || freedriverchoice>nooffredrivers)
		{
			cout << "wrong input" << endl;
			cout << "Choose a driver(1-" << nooffredrivers << ")" << endl;
			cin >> freedriverchoice;
		}
		cout << "Choose a vehicle(1-" << nooffreevehicles << ")" << endl;
		for (int i = 0; i < nooffreevehicles; i++)
		{
			cout << "*****Vehicle no::" << i + 1 << " ***" << endl;
			free_vehicles[i].printforaddservice();
			cout << endl;
		}
		int freevehiclechoice;
		cin >> freevehiclechoice;
		while (freevehiclechoice<1 || freevehiclechoice>nooffreevehicles)
		{
			cout << "wrong input" << endl;
			cout << "Choose a driver(1-" << nooffreevehicles << ")" << endl;
			cin >> freevehiclechoice;
		}
		//adding a service
		if (choice == 1)//ride
		{
			NoofRides++;
			//inputting the data
			int cid, did, vid, m, d, y, hr, min, sec, status, noofpas, sid;
			float drivrank, vehrank, distance, fuelrate, goodsweight;
			char sour[500], dest[500], goodstyp[500], typ, ridetyp[100];
			cid = id;
			did=free_drivers[freedriverchoice-1].getdId();
			vid=free_vehicles[freevehiclechoice-1].getvid();
			sid = 11111 + (rand() % 88888);
			cout << "Enter the source:" << endl;
			cin.ignore();
			cin.getline(sour, 500);
			cout << "Enter the destination:" << endl;
			cin.getline(dest, 500);
			cout << "Enter the approx distance:" << endl;
			cin >> distance;
			cout << "Enter the day for today date:" << endl;
			cin >> d;
			cout << "Enter the month:" << endl;
			cin >> m;
			cout << "Enter the year:" << endl;
			cin >> y;
			cout << "Enter the time(hr,min,sec):" << endl;
			cin >> hr>>min>>sec;
			status = 0;fuelrate=180.54;
			cout << "Enter the no of passengers:" << endl;
			cin >> noofpas;
			cout << "Enter the ride type(intercity,intracity):" << endl;
			cin.ignore();
			cin.getline(ridetyp, 100);
			drivrank=0;
			vehrank=0;
			Date temp(d, m, y);
			mTime tempTime(hr, min, sec);
			//closing the data
			int indforride = NoofRides - 1;
			rides_list[indforride].setsource(sour);
			rides_list[indforride].setdest(dest);
			rides_list[indforride].setdistance(distance);
			rides_list[indforride].setdate(temp);
			rides_list[indforride].settime(tempTime);
			rides_list[indforride].setstatus(status);
			rides_list[indforride].setfuelrate(fuelrate);
			rides_list[indforride].setsid(sid);
			rides_list[indforride].setcid(cid);
			rides_list[indforride].setdid(did);
			rides_list[indforride].setvid(vid);
			rides_list[indforride].setnoofpassengers(noofpas);
			rides_list[indforride].setridetype(ridetyp);
			rides_list[indforride].setdrivrank(drivrank);
			rides_list[indforride].setvehiclerank(vehrank);
			for (int i = 0; i < NoofCustomers; i++)
			{
				if (cid == customers_list[i].getcId())
				{
					customers_list[i].addaSERVICE(rides_list[indforride]);
				}
			}
			
			for (int i = 0; i < NoofDrivers; i++)
			{
				if (did == drivers_list[i].getdId())
				{
					drivers_list[i].addaSERVICE(rides_list[indforride]);
				}
			}
			for (int i = 0; i < NoofVehicles; i++)
			{
				if (vid == vehicles_list[i].getvid())
				{
					vehicles_list[i].addaSERVICE(rides_list[indforride]);
				}
			}
			float fare;
			float petrol = (distance / free_vehicles[freevehiclechoice - 1].getavgmilage()) * fuelrate;
			petrol = (10 * petrol) / 100;
			Feature* temwp = free_vehicles[freevehiclechoice - 1].getfeature(); int nooff = free_vehicles[freevehiclechoice - 1].getnooffeaturelist();
			float fetaurprice = 0;
			for (int i = 0; i < nooff; i++)
			{
				fetaurprice = fetaurprice + temwp[i].getcost();
			}
			fare = petrol + (distance * 1.5) + fetaurprice;//price of 1km is 1.5
			cout << "Service id is::" << sid << endl;
			cout << "FARE IS::$" << fare << endl;
		
		}
		else if (choice == 2)
		{
			Noofdelivery++;
			//inputting the data
			int cid, did, vid, m, d, y, hr, min, sec, status, noofpas, sid;
			float drivrank, vehrank, distance, fuelrate, goodsweight;
			char sour[500], dest[500], goodstyp[500], typ, ridetyp[100];
			//char* source, * destination, * ridetype, * goodstype;
			cid = id;
			did = free_drivers[freedriverchoice - 1].getdId();
			vid = free_vehicles[freevehiclechoice - 1].getvid();
			sid = 11111 + (rand() % 88888);
			cout << "Enter the source:" << endl;
			cin.ignore();
			cin.getline(sour, 500);
			cout << "Enter the destination:" << endl;
			cin.getline(dest, 500);
			cout << "Enter the approx distance:" << endl;
			cin >> distance;
			cout << "Enter the day for today date:" << endl;
			cin >> d;
			cout << "Enter the month:" << endl;
			cin >> m;
			cout << "Enter the year:" << endl;
			cin >> y;
			cout << "Enter the time(hr,min,sec):" << endl;
			cin >> hr >> min >> sec;
			status = 0; fuelrate=180.54;
			cout << "Enter the goods weight:" << endl;
			cin >> goodsweight;
			cout << "Enter the goods type:" << endl;
			cin >> goodstyp;
			Date temp(d, m, y);
			mTime tempTime(hr, min, sec);
			//closing the data
			int indfordelivery= Noofdelivery-1;
			delivery_list[indfordelivery].setsource(sour);
			delivery_list[indfordelivery].setdest(dest);
			delivery_list[indfordelivery].setdistance(distance);
			delivery_list[indfordelivery].setdate(temp);
			delivery_list[indfordelivery].settime(tempTime);
			delivery_list[indfordelivery].setstatus(status);
			delivery_list[indfordelivery].setfuelrate(fuelrate);
			delivery_list[indfordelivery].setsid(sid);
			delivery_list[indfordelivery].setcid(cid);
			delivery_list[indfordelivery].setdid(did);
			delivery_list[indfordelivery].setvid(vid);
			delivery_list[indfordelivery].setgoodsweight(goodsweight);
			delivery_list[indfordelivery].setgoodstype(goodstyp);
			for (int i = 0; i < NoofCustomers; i++)
			{
				if (cid == customers_list[i].getcId())
				{
					customers_list[i].addaSERVICE(delivery_list[indfordelivery]);
				}
			}
			
			for (int i = 0; i < NoofDrivers; i++)
			{
				if (did == drivers_list[i].getdId())
				{
					drivers_list[i].addaSERVICE(delivery_list[indfordelivery]);
				}
			}
			for (int i = 0; i < NoofVehicles; i++)
			{
				if (vid == vehicles_list[i].getvid())
				{
					vehicles_list[i].addaSERVICE(delivery_list[indfordelivery]);
				}
			}	
			float fare;
			float petrol = (distance / free_vehicles[freevehiclechoice - 1].getavgmilage()) * fuelrate;
			petrol = (10 * petrol) / 100;
			Feature* temwp = free_vehicles[freevehiclechoice - 1].getfeature(); int nooff = free_vehicles[freevehiclechoice - 1].getnooffeaturelist();
			float fetaurprice=0;
			for (int i = 0; i < nooff; i++)
			{
				fetaurprice = fetaurprice + temwp[i].getcost();
			}
			fare = petrol + (distance * 1.5) + fetaurprice;//price of 1km is 1.5
			cout << "Service id is::" << sid << endl;
			cout << "FARE IS::$" << fare << endl;
		}
		cin.ignore();

}
//14. When the customer cancels a booking
void TMS::cancel_a_service()
{
	int sid,cid,did,vid=0;
	float fuelrate,fare,distancetotal,petrolprice,distanceprice=1.5,fetaurprice=0;//price of 1km is 1.5
	cout << "Enter customer id" << endl; cin >> cid;
	cout << "Enter service id" << endl; cin >> sid;
	for (int i = 0; i < NoofRides; i++)
	{
		if (sid == rides_list[i].getsid() && cid == rides_list[i].getcid())
		{
			distancetotal = rides_list[i].getdistance();
			fuelrate = rides_list[i].getfuelrate();
			rides_list[i].setstatus(2);//2 for cancellation
			did=rides_list[i].getdid();
			vid = rides_list[i].getvid();
			break;
		}
	}
	for (int i = 0; i < Noofdelivery; i++)
	{
		if (sid == delivery_list[i].getsid() && cid == delivery_list[i].getcid())
		{
			distancetotal = delivery_list[i].getdistance();
			fuelrate = delivery_list[i].getfuelrate();
			delivery_list[i].setstatus(2);//2 for cancellation
			did = delivery_list[i].getdid();
			vid = delivery_list[i].getvid();
			break;
		}
	}
	//for driver
	for (int i = 0; i < NoofDrivers; i++)
	{

		if (did == drivers_list[i].getdId())
		{
			drivers_list[i].setstatus(3);
			int n = drivers_list[i].getnoOfService();
			Service** tempfordelete = drivers_list[i].getserviceHistory();
			Service** temp = new Service * [n];
			for (int l = 0; l < n; l++)
			{
				temp[l] = tempfordelete[l];
			} tempfordelete = NULL;
			if (n == 1)
			{
				n--;
				drivers_list[i].setnoOfService(n);
				drivers_list[i].setserviceHistory(temp, n);
			}
			else {
				for (int j = 0; j < n; j++)
				{
					if ((*temp[j]).getsid() == sid)
					{
						for (int k = j; k < n - 1; k++)
						{
							temp[k] = temp[k + 1];
						}
						temp[n - 1] = NULL;
						drivers_list[i].setserviceHistory(temp, n);
						break;
					}
				}
			}delete[]temp; break; delete tempfordelete;
		}
	}
	for (int i = 0; i < NoofVehicles; i++)
	{
		if (vid == vehicles_list[i].getvid())
		{
			petrolprice = (distancetotal / vehicles_list[i].getavgmilage()) * fuelrate;
			petrolprice = (10 * petrolprice) / 100;
			Feature* temwp = vehicles_list[i].getfeature(); int nooff = vehicles_list[i].getnooffeaturelist();
			for (int i = 0; i < nooff; i++)
			{
				fetaurprice = fetaurprice + temwp[i].getcost();
			}
			vehicles_list[i].setstatus(0);//freeccancelled
			int n = vehicles_list[i].getnoOfService();
			Service** tempfordelete = vehicles_list[i].getserviceHistory();
			Service** temp=new Service*[n];
			for(int l=0;l<n;l++)
			{
				temp[l] = tempfordelete[l];
			}tempfordelete=NULL;
			if (n == 1)
			{
				n--;
				vehicles_list[i].setnoOfService(n);
				vehicles_list[i].setserviceHistory(temp, n);
			}
			else {
				for (int j = 0; j < n; j++)
				{
					if ((*temp[j]).getsid() == sid)
					{
						for (int k = j; k < n - 1; k++)
						{
							temp[k] = temp[k + 1];
						}
						temp[n - 1] = NULL;
						vehicles_list[i].setnoOfService(n);
						vehicles_list[i].setserviceHistory(temp, n);
						break;
						
					}
				}
			}delete[]temp; break; delete tempfordelete;
		}
	}
	fare = petrolprice + (distancetotal * 1.5) + fetaurprice;//price of 1km is 1.5
	fare = (15 * fare) / 100;
	cout << "CANCELLATION CHARGES ARE::$" << fare << endl;

}
//15. Complete a service
void TMS::complete_a_service()
{
	int id; int cid, did, vid; 
	cout << "Enter service id:" << endl;
	cin >> id;
	float veh, dri;
	cout << "Enter driver ranking(0 to 5,worst to best)" << endl;
	cin >> dri;
	cout << "Enter vehicle ranking(0 to 5,worst to best)" << endl;
	cin >> veh;
	for (int i = 0; i < NoofRides; i++)
	{
		if (rides_list[i].getsid() == id)
		{
			rides_list[i].setstatus(1);//completed
			rides_list[i].setdrivrank(dri);
			rides_list[i].setvehiclerank(veh);
			cid = rides_list[i].getcid();
			did = rides_list[i].getdid();
			vid = rides_list[i].getvid();
		}
	}
	for (int i = 0; i < Noofdelivery; i++)
	{
		if (delivery_list[i].getsid() == id)
		{
			delivery_list[i].setstatus(1);//completed
			cid = delivery_list[i].getcid();
			did = delivery_list[i].getdid();
			vid = delivery_list[i].getvid();
		}
	}
	//driver
	for (int i = 0; i < NoofDrivers; i++)
	{
		if (did == drivers_list[i].getdId())
		{
			int n = drivers_list[i].getnoOfService(); n++;
			float r = drivers_list[i].getoverallranking();
			float newrank = (dri + r) / n;
			drivers_list[i].setoverallranking(newrank);
		}
	}
	//vehiclé
	for (int i = 0; i < NoofVehicles; i++)
	{
		if (vid == vehicles_list[i].getvid())
		{
			int n = vehicles_list[i].getnoOfService(); n++;
			float r = vehicles_list[i].getoverallranking();
			float newrank = (veh + r) / n;
			vehicles_list[i].setoverallranking(newrank);
		}
	}

}
//16. Print details of all Customers, who used the same vehicle in a ride service on a different date.
void TMS::print_customers_using_same_vehicle()
{
	int* checkedvids = new int[NoofRides]; int indforcheck = 0; int check = 0,check1=0;
	for (int i = 0; i < NoofRides; i++)
	{
		check = 1;
		if (i == 0)
		{
			checkedvids[indforcheck] = rides_list[i].getvid(); indforcheck++;
			check = 1;
		}
		if (i != 0)
		{
			checkedvids[indforcheck] = rides_list[i].getvid(); indforcheck++;
			for (int w = 0; w < indforcheck - 1; w++)
			{
				if (rides_list[i].getvid() == checkedvids[w])
				{
					check = 0;
				}
			}
		}
		if (check == 1)
		{
			int chk = 0;
			for (int j = i + 1; j < NoofRides; j++)
			{
				Date d1 = rides_list[i].getdate(); Date d2 = rides_list[j].getdate();
				if (rides_list[i].getvid() == rides_list[j].getvid()&&  !(d1==d2))
				{
					if (chk == 0)
					{
						int cid = rides_list[i].getcid();
						cout << "Vehicle::" << rides_list[i].getvid() << " is used by following customers" << endl;
						chk = 1;
						for (int q = 0; q < NoofCustomers; q++)
						{
							if (cid == customers_list[q].getcId())
							{
								Name t = customers_list[q].getNameClass();
								cout << t ;
							}
						}
					}
					int vv = rides_list[j].getcid();
					for (int q = 0; q < NoofCustomers; q++)
					{
						if (vv== customers_list[q].getcId())
						{
							Name tq = customers_list[q].getNameClass();
							cout << tq;
						}
					}
				}
			}
		}
	}
	delete[] checkedvids;

}
//17. Print the List of all Drivers who completed delivery services on same days.
void TMS::printdriverwithdeliveryonsameday()
{
	int chk = 0;
	Date* checkedvids = new Date[Noofdelivery]; int indforcheck = 0; int check = 0, check1 = 0;
	for (int i = 0; i < Noofdelivery; i++)
	{
		check = 1;
		if (i == 0)
		{
			checkedvids[indforcheck] = delivery_list[i].getdate(); indforcheck++;
			check = 1;
		}
		if (i != 0)
		{
			checkedvids[indforcheck] = delivery_list[i].getdate(); indforcheck++;
			for (int w = 0; w < indforcheck - 1; w++)
			{
				Date d1 = delivery_list[i].getdate();
				if (d1 == checkedvids[w])
				{
					check = 0;
				}
			}
		}
		if (check == 1)
		{
			chk = 0;
			Date temp; temp = delivery_list[i].getdate();
			for (int j = i + 1; j < Noofdelivery; j++)
			{
				Date temp2 = delivery_list[j].getdate();
				if (temp == temp2 && delivery_list[i].getstatus()==1 && delivery_list[j].getstatus() == 1)
				{
					if (chk == 0)
					{
						cout << "Deliveries on date::" << temp << "was made by following drivers" << endl;
						int did = delivery_list[i].getdid();
						for (int q = 0; q < NoofDrivers; q++)
						{
							if (did == drivers_list[q].getdId())
							{
								Name t; t = drivers_list[q].getNameClass();
								cout << t;
							}
						}
						chk = 1;
					}
					int dd = delivery_list[j].getdid();
					for (int qq = 0; qq < NoofDrivers; qq++)
					{
						if (dd == drivers_list[qq].getdId())
						{
							Name t; t = drivers_list[qq].getNameClass();
							cout << t;
						}
					}

				}
			}
		}
	}
}
//18. Print details of all pending services on a particular date
void TMS::printpendingservices()
{
	int m, d, y;
	cout << "Enter day" << endl;
	cin >> d;
	cout << "Enter month" << endl;
	cin >> m;
	cout << "Enter year" << endl;
	cin >> y;
	Date temp(d, m, y);

	cout << "PENDING SERVICES ON::" << temp << endl;
	

	for (int j = 0; j < NoofRides; j++)
	{
		Date temp2 = rides_list[j].getdate();

		if (temp == temp2)
		{
			if (!rides_list[j].getstatus())
			{
				rides_list[j].print(); cout << endl;
			}
		}
	}
	for (int k = 0; k < Noofdelivery; k++)
	{
		Date temp2 = delivery_list[k].getdate();

		if (temp == temp2)
		{
			if (!delivery_list[k].getstatus())
			{
				delivery_list[k].print();cout << endl;
			}
		}
	}
	
}
//19. Print details of all pending services of a particular driver.
void TMS::printpendingservices_ofdriver()
{
	int id;
	cout << "Enter id of driver:" << endl;
	cin >> id;
	for (int i = 0; i < NoofRides; i++)
	{
		if (id == rides_list[i].getdid())
		{
			if (!rides_list[i].getstatus())
			{
				rides_list[i].print();
				cout << endl;
			}
		}
		
	}
	for (int i = 0; i < Noofdelivery; i++)
	{
		if (id == delivery_list[i].getdid())
		{
			if (!delivery_list[i].getstatus())
			{
				delivery_list[i].print();
				cout << endl;
			}
		}

	}
}
//20. Print details of all canceled services by a customer.
void TMS::printcancelledcervices()
{
	int id;
	cout << "Enter the customer id" << endl;
	cin >> id;
	for (int i = 0; i < NoofCustomers; i++)
	{
		if (id == customers_list[i].getcId())
		{
			int limit = customers_list[i].getnoOfService();
			Service** check = customers_list[i].getbookingHistory();
			for (int j = 0; j < limit; j++)
			{
				if ((*check[j]).getstatus() == 2)
				{
					(*check[j]).print(); cout << endl;
				}
			}
		}
	}
}
//extra
void TMS::get_noof_free_vehicles_driver(int& v, int& d)
{
	v = 0; d = 0;
	for (int i = 0; i < NoofVehicles; i++)
	{
		if (!vehicles_list[i].getstatus())
		{
			v++;
		}
	}
	for (int i = 0; i < NoofDrivers; i++)
	{
		if (drivers_list[i].getstatus() == 3 || drivers_list[i].getstatus() == 1)
		{
			d++;
		}
	}
}
void TMS::save_customer_file()
{
	ofstream out;
	out.open("Customers.txt");
	char firstn[100], lastn[100]; char* fn = NULL, * ln = NULL; int d, m, y, age, id;
	char cnic[14];
	for (int i = 0; i < NoofCustomers; i++)
	{
		id = customers_list[i].getcId();
		fn=customers_list[i].getfNamePerson();
		ln = customers_list[i].getlNamePerson();
		Date t1 = customers_list[i].getDateClass();
		d = t1.getDay(); m = t1.getMonth(); y = t1.getYear();
		age = customers_list[i].getAge();customers_list[i].getNid(cnic);
		out << id << " " << fn << " " << ln << " " << d << " " << m << " " << y << " " << age << " " << cnic << endl;
	}
	delete[] fn; delete[] ln;
	out.close();
	customers_list = NULL;

}
void TMS::save_driver_file()
{
	ofstream out;
	out.open("Drivers.txt");
	char firstn[100], lastn[100], lics[3][100];char* fn=NULL, * ln=NULL; int d, m, y, age, id;
	char cnic[14]; int nooflics, exp, status; float rank, salary; char** list;
	for (int i = 0; i < NoofDrivers; i++)
	{
		id = drivers_list[i].getdId();
		fn = drivers_list[i].getfNamePerson();
		ln = drivers_list[i].getlNamePerson();
		Date t1 = drivers_list[i].getDateClass();
		d = t1.getDay(); m = t1.getMonth(); y = t1.getYear();
		age = drivers_list[i].getAge(); drivers_list[i].getNid(cnic);
		nooflics = drivers_list[i].getnooflisences();
		list=drivers_list[i].getlicenceslist();
		rank = drivers_list[i].getoverallranking(); salary = drivers_list[i].getsalary();
		exp = drivers_list[i].getexperiecne(); status = drivers_list[i].getstatus();
		out << id << " " << fn << " " << ln << " " << d << " " << m << " " << y << " " << age << " " << nooflics<<" ";
		for (int w = 0; w < nooflics; w++)
		{
			out << list[w] << " ";
		}
		out << rank << " " << salary << " " << exp << " " <<status <<" " << cnic << endl;
		for (int e = 0; e < nooflics; e++)
		{
			delete[] list[e];
		}delete[] list;
	}
	delete[] fn; delete[] ln;
	out.close();
	drivers_list = NULL;
}
void TMS::save_services_file()
{
	int cid, did, vid, m, d, y, hr, min, sec, status, noofpas, sid;
	float drivrank, vehrank, distance, fuelrate, goodsweight;
	char sour[500], dest[500], goodstyp[500], typ, ridetyp[100];
	char* source=NULL, * destination=NULL, * ridetype=NULL, * goodstype=NULL;

	ofstream out;
	out.open("Services.txt");
	//first rides
	for (int i = 0; i < NoofRides; i++)
	{
		cid = rides_list[i].getcid(); did = rides_list[i].getdid();
		vid = rides_list[i].getvid(); sid = rides_list[i].getsid();
		rides_list[i].getsource(source); rides_list[i].getdest(destination);
		distance = rides_list[i].getdistance();
		Date t1 = rides_list[i].getdate();
		d = t1.getDay(); m = t1.getMonth(); y = t1.getYear();
		mTime t2 = rides_list[i].gettime();
		hr = t2.getHour(); min = t2.getMin(); sec = t2.getSec();
		status = rides_list[i].getstatus(); fuelrate = rides_list[i].getfuelrate();
		noofpas = rides_list[i].getnoofpassengers(); rides_list[i].getridetype(ridetype);
		drivrank = rides_list[i].getdrivrank(); vehrank = rides_list[i].getvehiclerank();
		out << cid << "," << did << "," << vid << "," << sid << ",R," << source << "," << destination << "," << distance << "," << d << "," << m << "," << y
		<< "," << hr << "," << min << "," << sec << "," << status << "," << fuelrate << "," << noofpas << "," << ridetype << "," << drivrank << "," << vehrank << endl;
		delete[] ridetype; delete[] source; delete[] destination; source = NULL; destination = NULL; ridetype = NULL;
	}
	//deliveries
	for (int i = 0; i < Noofdelivery; i++)
	{
		cid = delivery_list[i].getcid(); did = delivery_list[i].getdid();
		vid = delivery_list[i].getvid(); sid = delivery_list[i].getsid();
		delivery_list[i].getsource(source); delivery_list[i].getdest(destination);
		distance = delivery_list[i].getdistance();
		Date t1 = delivery_list[i].getdate();
		d = t1.getDay(); m = t1.getMonth(); y = t1.getYear();
		mTime t2 = delivery_list[i].gettime();
		hr = t2.getHour(); min = t2.getMin(); sec = t2.getSec();
		status = delivery_list[i].getstatus(); fuelrate = delivery_list[i].getfuelrate();
		goodsweight = delivery_list[i].getgoodsweight();delivery_list[i].getgoodstype(goodstype);
		out << cid << "," << did << "," << vid << "," << sid << ",D," << source << "," << destination << "," << distance << "," << d << "," << m << "," << y
		<< "," << hr << "," << min << "," << sec << "," << status << "," << fuelrate << "," << goodsweight << "," << goodstype << endl;
		delete[] goodstype; delete[] source; delete[] destination; source = NULL; destination = NULL; goodstype = NULL;
	}
	out.close();
	rides_list = NULL; delivery_list = NULL;

}
void TMS::save_vehicle_file()

{
	int id, regisno, d, m, y, noofeature, status;
	float avgmilge, ranking;
	char* licensetype=NULL, * fueltype = NULL, * category = NULL, * subcategory = NULL;
	ofstream out;
	out.open("Vehicles.txt");
	for (int i = 0; i < NoofVehicles; i++)
	{
		id = vehicles_list[i].getvid(); regisno = vehicles_list[i].getregistrationno();
		avgmilge = vehicles_list[i].getavgmilage(); vehicles_list[i].getlicencetype(licensetype);
		status = vehicles_list[i].getstatus(); vehicles_list[i].getfueltype(fueltype);
		ranking = vehicles_list[i].getoverallranking(); vehicles_list[i].getcategory(category);
		vehicles_list[i].getsubcategory(subcategory);
		Date t1 = vehicles_list[i].getdate();
		d = t1.getDay(); m = t1.getMonth(); y = t1.getYear();
		noofeature = vehicles_list[i].getnooffeaturelist();
		Feature*  list=vehicles_list[i].getfeature();
		char description[3][500]; float cost[3]; int fid[3];
		for (int ii = 0; ii < noofeature; ii++)
		{
			list[ii].getdesc(description, ii);
			fid[ii] = list[ii].getfid();
			cost[ii] = list[ii].getcost();
		}
		if (!strcmp(fueltype, ""))//so dont read an extra line
		{
			continue;
			delete[] licensetype; delete[] fueltype; delete[]category; delete[] subcategory;
			licensetype = NULL; fueltype = NULL; category = NULL; subcategory = NULL;
		}
		out << id << "," << regisno << "," << avgmilge << "," << licensetype << "," << status << "," << fueltype << "," << ranking << "," << category
			<< "," << subcategory << "," << d << "," << m << "," << y << "," << noofeature;
		for (int j = 0; j < noofeature; j++)
		{
			out << "," << fid[j] << "," << description[j] << "," << cost[j];
		}
		out << endl;
		delete[] licensetype; delete[] fueltype; delete[]category; delete[] subcategory;
		licensetype = NULL; fueltype = NULL; category = NULL; subcategory = NULL;
	}
	out.close();
	vehicles_list = NULL;
}
int TMS::menu()
{
	int choice;
	cout << "***********RIDE MANAGEMENT SYSTEM*************" << endl;
	cout << "Choose the function you want to run(1-21)" << endl;
	cout << "1. Add a new Customer" << endl;
	cout << "2. Add or remove a Driver" << endl;
	cout << "3. Add or remove a Vehicle" << endl;
	cout << "4. Print List of All Customers" << endl;
	cout << "5. Print List of All drivers" << endl;
	cout << "6. Print complete list of vehicles" << endl;
	cout << "7. Print complete details and service history of a particular vehicle, (Provide vehicle ID)" << endl;
	cout << "8. Print complete history of a particular customer, (Provide customer ID)" << endl;
	cout << "9. Print complete history of a driver including services. (Provide driver ID)" << endl;
	cout << "10. Print list of all drivers who have ranking above 4.5." << endl;
	cout << "11. Print list of all drivers who have multiple licenses and their license information too" << endl;
	cout << "12. Print updated salary of all drivers based on their updated ranking." << endl;
	cout << "13. Add a Service request (ride or delivery)" << endl;
	cout << "14. Cancel a booking." << endl;
	cout << "15. Complete a service (Provide service ID)" << endl;
	cout << "16. Print details of all Customers, who used the same vehicle in a ride service on a different date" << endl;
	cout << "17. Print the List of all Drivers who completed delivery services on same days." << endl;
	cout << "18. Print details of all pending services on a particular date." << endl;
	cout << "19. Print details of all pending services of a particular driver." << endl;
	cout << "20. Print details of all canceled services by a customer." << endl;
	cout << "21. EXIT." << endl;
	cin >> choice;
	while (choice > 21 || choice < 1)
	{
		cout << "WRONG INPUT--ENTER AGAIN" << endl;
		cin >> choice;
	}
	return choice;
}


int main()
{
	
	TMS obj; int c = 0;
	obj.initializer();
	while (1)
	{
		c = obj.menu();
		cin.ignore();
		system("CLS");
		if (c == 1)
		{
			obj.addNewCustomer();
		}
		else if (c == 2)
		{
			obj.addorRemoveDriver();
		}
		else if (c == 3)
		{
			obj.addorRemoveVehicle();
		}
		else if (c == 4)
		{
			obj.print_customers_list();
		}
		else if (c == 5)
		{
			obj.print_drivers_list();
		}
		else if (c == 6)
		{
			obj.print_vehicle_by_category();
		}
		else if (c == 7)
		{
			obj.printspeceficvehicle();
		}
		else if (c == 8)
		{
			obj.printspeceficcustomer();
		}
		else if (c == 9)
		{
			obj.printspeceficdriver();
		}
		else if (c == 10)
		{
			obj.printdriver_with45_ranking();
		}
		else if (c ==11)
		{
			obj.printdriver_withmany_license();
		}
		else if (c == 12)
		{
			obj.print_salary();
		}
		else if (c == 13)
		{
			obj.add_service();
		}
		else if (c == 14)
		{
			obj.cancel_a_service();
		}
		else if (c == 15)
		{
			obj.complete_a_service();
		}
		else if (c == 16)
		{
			obj.print_customers_using_same_vehicle();
		}
		else if (c == 17)
		{
			obj.printdriverwithdeliveryonsameday();
		}
		else if (c == 18)
		{
			obj.printpendingservices();
		}
		else if (c == 19)
		{
			obj.printpendingservices_ofdriver();
		}
		else if (c == 20)
		{
			obj.printcancelledcervices();
		}
		else if (c == 21)
		{
			obj.save_customer_file();
			obj.save_driver_file();
			obj.save_vehicle_file();
			obj.save_services_file();
			cout << "*****EXITING**********" << endl;
			break;
		}
		system("pause");
		system("CLS");
	}
	system("pause");
	return 0;
}