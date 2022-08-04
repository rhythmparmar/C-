#include <iostream>
using namespace std;

class TimeSpan
{


    private:
        int hours,minutes;
    public:


        TimeSpan(int hours,int minutes)
        {
            this->hours=hours;
            this->minutes=minutes;
        }

        int getHours(){return hours;}
        int getMinutes(){return minutes;}

        void add(TimeSpan& t)
        {
            this->hours+=t.hours;
            this->minutes+=t.minutes;

            validate();
        }

        void add(int hours,int minutes)
        {
            this->hours+=hours;
            this->minutes+=minutes;

            validate();
        }
        void validate()
        {
            if(minutes>=60)
            {
                hours=hours + minutes/60;
                minutes = minutes%60;
            }

        }
        double getTotalHours()
        {
            return hours+minutes/60.0;
        }
        string toString()
        {
            string s="";
            s.append(to_string(hours));
            s.append(" Hours, ");
            s.append(to_string(minutes));
            s.append("Minutes");

            return s;
        }
};

int main()
{
    TimeSpan t1(2,45);

    t1.add(10,45);

    cout<<endl<<t1.toString();
    cout<<endl<<t1.getTotalHours();

    TimeSpan t2(9,45);
    cout<<endl<<t2.getTotalHours();
    return 0;

}
