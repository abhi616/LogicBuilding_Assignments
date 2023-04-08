#include<iostream>
using namespace std;

class Array
{
	protected:
	  int *Arr;
	  int iSize;
	  
	public:
	  
	   Array(int value = 10)
	   {
		   cout<<"Inside Constructor\n";
		   
		   this->iSize = value;
		   Arr = new int[iSize];
	   }
	   
	   Array(Array &ref)
	   {
		   cout<<"Inside copy constructor\n";
		   
		   this->iSize = ref.iSize;
		   this->Arr = new int[this->iSize];
		   
		   for(int i = 0; i < iSize; i++)
		   {
			   this->Arr[i] = ref.Arr[i];
		   }
	   }
	   
	   ~Array()
	   {
		   cout<<"Inside destructor\n";
		   delete []Arr;
	   }
	
	   inline void Accept();
	   inline void Display();
};

void Array :: Accept()
{
	cout<<"Please enter the elements : "<<"\n";
	
	for(int i = 0; i < this->iSize; i++)
	{
		cin>>Arr[i];
	}
}

void Array :: Display()
{
	cout<<"Elements are : "<<"\n";
	
	for(int i = 0; i < this->iSize; i++)
	{
		cout<<" Element "<<(i+1)<<" is : "<<Arr[i]<<"\n";
	}
}


class ArrSearch : public Array
{
   public:
      ArrSearch(int no = 10) : Array(10)
	  {
		  
	  }
	  
	  int Frequency(int);
	  int SearchFirst(int);
	  int SearchLast(int);
	  int EvenCount();
	  int OddCount();
};

int ArrSearch :: SearchFirst(int iNo)
{
    int iFound = -1;
	
	for(int i = 0; i < iSize; i++)
	{
		if(Arr[i] == iNo)
		{
			iFound = i+1;
			break;
		}
	}
	
	return iFound;
}	

int ArrSearch :: Frequency(int iNo)
{
	int iFreq = 0;
	
	for(int i = 0; i < iSize; i++)
	{
		if(Arr[i] == iNo)
		{
			iFreq++;
		}
	}
	
	return iFreq;
}

int ArrSearch :: SearchLast(int iNo)
{
	int iFound = -1;
	
	for(int i = 0; i < iSize; i++)
	{
		if(Arr[i] == iNo)
		{
			iFound = i+1;
		}
	}
	
	return iFound;
}

int ArrSearch :: EvenCount()
{
	int iCount = 0;
	
	for(int i = 0; i < iSize; i++)
	{
		if(Arr[i] % 2 == 0)
		{
			iCount++;
		}
	}
	
	return iCount;
}

int ArrSearch :: OddCount()
{
	int iCount = 0;
	
	for(int i = 0; i < iSize; i++)
	{
		if(Arr[i] % 2 != 0)
		{
			iCount++;
		}
	}
	
	return iCount;
}


int main()
{
	cout<<"Inside main"<<"\n";
	
	ArrSearch sobj1(5);
	sobj1.Accept();
	sobj1.Display();
	
	int iRet = sobj1.Frequency(11);
	
	cout<<"Frequency is : "<<iRet<<"\n";
	
	iRet = sobj1.SearchFirst(11);	
	cout<<"First occurence is : "<<iRet<<"\n";
	
	iRet = sobj1.SearchLast(11);	
	cout<<"Last occurence is : "<<iRet<<"\n";
	
	iRet = sobj1.EvenCount();	
	cout<<"Even number count is : "<<iRet<<"\n";
	
	iRet = sobj1.OddCount();	
	cout<<"Odd number count is : "<<iRet<<"\n";
}