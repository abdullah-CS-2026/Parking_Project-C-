//PARKING PROJECT IN:"C"PLUS PLUS
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	k:
	int m_amo=0,r_amo=0,c_amo=0,b_amo=0;//amo stand for amount
	int m_cnt=0,r_cnt=0,c_cnt=0,b_cnt=0;//cnt stand for counting
	int t_amo=0,t_cnt=0,x;//amo satnd for amount and cnt stand for counting
	h:
		system("cls");
	cout<<"\n\n\n\t\t\tparking project";
	cout<<"\n\n 1. MOTORCYCLE";
	cout<<"\n 2. RICKSHAW";
	cout<<"\n 3. CAR";
	cout<<"\n 4. BUS";
	cout<<"\n 5. CHECK RECORD";
	cout<<"\n 6. DELETE VEHICLE";
	cout<<"\n 7. DELETE RECORD";
	cout<<"\n 8. EXIT";
	cout<<"\n\n. YOUR CHOICE:";
	cin>>x;
	switch(x)
	{
		case 1:
			if(t_cnt < 100)
			{
				m_cnt++;
				t_cnt++;
				m_amo += 50;
				t_amo += 50;
				cout<<"\n\n\t\t\t MOTORCYCLE SUCCESSSFULLY PARKED ...";
			}
			else
			cout<<"\n\n\t\t\t PARKIN IS FULL...";
		break;	
		case 2:
			if(t_cnt < 100)
			{
				r_cnt++;
				t_cnt++;
				r_amo += 100;
				t_amo += 100;
				cout<<"\n\n\t\t\t RICKSHAW SUCCESSSFULLY PARKED ...";
			}
			else
			cout<<"\n\n\t\t\t PARKIN IS FULL...";
		break;
		case 3:
			if(t_cnt < 100)
			{
				c_cnt++;
				t_cnt++;
				c_amo += 150;
				t_amo += 150;
				cout<<"\n\n\t\t\t CAR SUCCESSSFULLY PARKED ...";
			}
			else
			cout<<"\n\n\t\t\t PARKIN IS FULL...";
		break;
		case 4:
			if(t_cnt < 100)
			{
				b_cnt++;
				t_cnt++;
				b_amo += 200;
				t_amo += 200;
				cout<<"\n\n\t\t\t bus SUCCESSSFULLY PARKED ...";
			}
			else
			cout<<"\n\n\t\t\t PARKIN IS FULL...";
		break;
		case 5:
            if(t_cnt > 0)
            {
	          system("cls");
	          cout<<"\n\n\n\t\t\t\tCHECK RECORD";
              cout<<"\n\n MOTORCYCLE IN PARKING:"<<m_cnt;
              cout<<"\n MOTORCYCLE AMOUNT:"<<m_amo;
              cout<<"\n\n RIKSHAW IN PARKING:"<<r_cnt;
              cout<<"\n RIKSHAW AMOUNT:"<<r_amo;
              cout<<"\n\n CAR IN PARKING:"<<c_cnt;
              cout<<"\n CAR AMOUNT:"<<c_amo;
              cout<<"\n\n BUS IN PARKING:"<<b_cnt;
              cout<<"\n BUS AMOUNT:"<<b_amo;
              cout<<"\n\n TOTAL VEHICLES IN PARKING:"<<t_cnt;
              cout<<"\n TOTAL AMOUNT:"<<t_amo;
			}
			else    
              cout<<"\n\n\t\t\t PARKING IS EMPTY....";
        break;
		case 6:
	    p:
	          system("cls");
	          cout<<"\n\n\n\t\t\t\t DELETE VEHIVLES";
	          cout<<"\n\n 1. MOTORCYCLE";
	          cout<<"\n 2.RIKSHAW";
	          cout<<"\n 3. CAR";
	          cout<<"\n 4. BUS";
	          cout<<"\n\n YOUR CHOICE :";
	          cin>>x;
	        if(x==1)
	       {
	    	  m_cnt--;
	    	  t_cnt--;
	    	  cout<<"\n\n\t\t\t MOTORCYLE SUCCESSFULLY REMOVED....";
	        }
	        else if(x==2)
	        {
	    	  r_cnt--;
	    	  t_cnt--;
	    	  cout<<"\n\n\t\t\t RIKSHAW SUCCESSFULLY REMOVED....";
	        }
	        else if(x==3)
	        {
	    	  c_cnt--;
	    	  t_cnt--;
	    	  cout<<"\n\n\t\t\t CAR SUCCESSFULLY REMOVED....";
	        }
	        else if(x==4)
	         {
	    	  b_cnt--;
	    	  t_cnt--;
	    	  cout<<"\n\n\t\t\t BUS SUCCESSFULLY REMOVED....";
	        }
	        else
		   {
	    	  cout<<"\n\n\t\t\t INVALIED CHOICE... PLEAS TRY AGAIN...";
	    	  getch();
	    	  goto p;
		    }
	    break;
	    case 7:
 	          cout<<"\n\n\t\t\t DELETE ALL RECORD SUCCESSSFULLY";
 	          getch();
 	          goto k;
 	     
        case 8:
              exit(0);
		      default:
		      cout<<"\n\n\t\t\t INVALIED CHOICE... PLEAS TRY AGAIN...";
}
         getch();
         goto h;			
	}
        
