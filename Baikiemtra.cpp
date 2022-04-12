#include<iostream.h>
using namespace std;
class PTGT{
	private:
	     char MaPT[12];
	     char Hangsx[30];
	     char xx[30];
	     float GiaChuaThe;
	public:
	     PTGT(){
     		this->MaPT[0]='\0';
     		this->Hangsx[0]='\0';
     		this->xx[0]='\0';
     		this->GiaChuaThe=0;
     	}
~PTGT(){
	};
	     void nhap()
	     {
     		cout<<"\nNhap ma phuong tien:";
     		cin.getline(MaPT, 12);
     		cout<<"\nNhap Hang san xuat:";
     		cin.getline(Hangsx, 30);
     		cout<<"\nNhap xuat xuong:";
     		cin.getline(xx, 30);
     		cout<<"\nNhap gia chua thue:";
     		cin >>GiaChuaThe;
     		fflush(stdin);
     	}
     	void xuat()
		 {
 			cout<<"Ma phuong tien: "<<MaPT
			       <<"Hang san xuat: "<<Hangsx
				   <<"Xuat xuong: " <<xx
				   <<"Nhap gia chua thue:"<<GiaChuaThe <<endl;
				   
 		}	      	      		         
};
int main()
{
	int n;
    cout<<"\nNhap ma phuong tien:";
    cin>>n;
    PTGT a[n];
    fflush(stdin);
    cout<<"\nNhap thong tin phuong tien giao thong :"<<endl;
    for(int i = 0; i < n;i++)
    {
    	cout<<"\nPhuong tien thu:"<<i+1<<endl;
    	a[i].nhap();
    }
    cout<<"\nXuat thong tin phuong tien giao thong :"<<endl;
    for(int i = 0; i < n;i++)
    {
    	cout<<"\nPhuong tien  thu:"<<i+1<<endl;
    	a[i].xuat();
    }
}