#include <iostream>
using namespace std;
class v
{
private:
    char name[20], address[30], mobile[11];
    char item1[30],item2[30],item3[30];
    int p1,p2,p3;
    double total,bill,promo,dis,grand,duration,tbill;
    double res,time,ttime;
    int i,op[3],ser,x;
    char yn;
    int gt,p,d,q;
public:
    void setm();

    void user();
    void order();
    void payment();
    void receipt();
    void seem();
    void changem();
    void view();
    void common();

};

void v::setm()
{

   if(res==1)
   {p1=160;p2=10;p3=50;
   }
   else if(res==2)
   {p1=100;p2=80;p3=20;
   }
   else if(res==3)
   {p1=600;p2=150;p3=80;
   }


}



void v::user()
{

        cout<<"Enter name: ";
        cin.getline(name,20);
        cin.getline(name,20);
        cout<<"Enter address: ";
        cin.getline(address,30);
        cout<<"Mobile No(+880): ";
        cin.getline(mobile,11);

}
void v::order()
{
    for(i=0;i<=2;i++)
    {
        cout<<" Choose Item:"<<endl;
         if(res==1)
   {cout<<"1.Kacchi Biriyani"<<"      "<<p1<<"TK"<<endl;
    cout<<"2.Parata"<<"               "<<p2<<"TK"<<endl;
    cout<<"3.Borhani-250ml"<<"        "<<p3<<"TK"<<endl;
   }
   else if(res==2)
   {cout<<"1.Fried Rice"<<"           "<<p1<<"TK"<<endl;
    cout<<"2.Thai Chicken Fry"<<"     "<<p2<<"TK"<<endl;
    cout<<"3.Soft Drinks-Coke"<<"     "<<p3<<"TK"<<endl;
   }
   else if(res==3)
   {cout<<"1.Pizza(12inch)"<<"              "<<p1<<"TK"<<endl;
    cout<<"2.Chicken Cheese Burger"<<"      "<<p2<<"TK"<<endl;
    cout<<"3.Chocolate Milkshake"<<"        "<<p3<<"TK"<<endl;
   }
        cin>>op[i];
        cout<<" How many servings do you need: ";
        cin>>ser;
        if(op[i]==1){bill=p1*ser;}
        else if(op[i]==2){bill=p2*ser;}
        else if(op[i]==3){bill=p3*ser;}
        total=total+bill;
        if(res==1){
                if(op[i]==1){time=10;}
                else if(op[i]==2){time=ser*2;}
                else if(op[i]==3){time=5;}
                }
        if(res==2){
                if(op[i]==1){time=10;}
                else if(op[i]==2){time=ser*5;}
                else if(op[i]==3){time=5;}
                }
        if(res==3){
                if(op[i]==1){time=10*ser;}
                else if(op[i]==2){time=ser*5;}
                else if(op[i]==3){time=5*ser;}
                }
            ttime=ttime+time;
        cout<<" Do you add another item?(Y/N): ";
        cin>>yn;
        if(yn=='n'){break;}



    }
}

void v::payment()
{
   cout<<"Choose promo code option:1.Flat  2.Percent"<<endl;
    cin>>p;
    if (p==1){promo=50;}
    else if (p==2){promo=(total*.15);}

    cout<<"Choose payment method: 1.Online(Bkash/Visa/Mastercard)  2.Cash"<<endl;
    cin>>d;
    if (d==1){dis=total*.1;}
    else{dis=0;}
    grand= total-promo-dis+20;
    gt=ttime+10;


}

void v::receipt()
{
    if(total>=100){
    cout<<"     Customer name  : "<<name<<endl;
    cout<<"     Address        : "<<address<<endl;
    cout<<"     Mobile No      : +880"<<mobile<<endl;
    cout<<"     Restaurant Name: ";
    if (res==1){cout<<"Dhaka Biriyani House"<<endl;}
else if (res==2){cout<<"John's Chinese Restaurant"<<endl;}
else if (res==3){cout<<"Eat & Chill"<<endl;}
    cout<<"     Delivery time  : "<<gt<<"min"<<endl;
    cout<<"     Total Bill     : "<<total<<"TK"<<endl;
    cout<<"     Promotional Discount :"<<promo<<"TK"<<endl;
    if(d==1){
    cout<<"     Online payment discount:"<<dis<<"TK"<<endl;}
    cout<<"     Grand Total    : "<<grand<<"TK"<<endl;}
    else{ cout<<"Food item charge must be equal or greater than 100TK, otherwise you cannot place your order"<<endl;}


}
void v::seem()
{
    cout<<"     Menu:"<<endl;
      if(res==1)
   {cout<<"1.Kacchi Biriyani"<<"      160TK"<<endl;
    cout<<"2.Parata"<<"               10TK"<<endl;
    cout<<"3.Borhani-250ml"<<"        50TK"<<endl;
   }
   else if(res==2)
   {cout<<"1.Fried Rice"<<"           100TK"<<endl;
    cout<<"2.Thai Chicken Fry"<<"     80TK"<<endl;
    cout<<"3.Soft Drinks-Coke"<<"     20TK"<<endl;
   }
   else if(res==3)
   {cout<<"1.Pizza(12inch)"<<"              600TK"<<endl;
    cout<<"2.Chicken Cheese Burger"<<"      150TK"<<endl;
    cout<<"3.Chocolate Milkshake"<<"        80TK"<<endl;
   }
}
void v::view()
{
    cout<<"Order 1:"<<endl;
   if(res==1){cout<<"Kacchi Biriyani(3ser)    160*3=480TK"<<endl;
            cout<<"Borhani-250ml(3 bottles)     50*3=150TK"<<endl;
             cout<<"      Total Bill: 630TK";}
    if(res==2){cout<<"Fried Rice(3ser)    100*3=300TK"<<endl;
            cout<<"Soft Drinks-Coke     20*3=60TK"<<endl;
             cout<<"      Total Bill: 360TK";}
    if(res==3){cout<<"Pizza(12inch)    600*3=1800TK"<<endl;
            cout<<"Chocolate Milkshake     80*3=240TK"<<endl;
             cout<<"      Total Bill: 2040TK";}


    cout<<"     Do you want to accept this order?(Y/N):";
    cin>>yn;
    if(yn=='y'){cout<<"Order is accepted."<<endl;}
    else if(yn='n'){cout<<"Order is declined."<<endl;}
}





void v::common()
{
    cout<<"Choose restaurant :"<<endl;
    cout<<"     1.Dhaka Biriyani House"<<endl;
    cout<<"     2.John's Chinese Restaurant"<<endl;
    cout<<"     3.Eat & Chill"<<endl;
    cin>>res;
}

int main()
{
    int w,w2,pass,res1;
    v a;
    cout<<"***********************************"<<endl;
        cout<<"            WELCOME SIR!           "<<endl;
        cout<<"***********************************"<<endl;
        cout<<"Login as: 1.Customer    \n\t2.Restaurant Owner"<<endl;
        cin>>w;
        if(w==1)
        {
            a.user();
            a.common();
            a.setm();
            a.order();
            a.payment();
            a.receipt();
        }
        else if(w==2)
        {

            cout<<"Password :";
            cin>>pass;
            if (pass==1111)
            {
                a.common();

                a.seem();
                a.view();

            }
        }
        return 0;
}

