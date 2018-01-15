#include <bits/stdc++.h>

using namespace std;

int main()

{

    string line;
    getline(cin,line);

    while (!line.empty())

    {

        int total=0,a=0,b=0,a_c=0,b_c=0,flag=0;

        while(total<10 && flag!=1 &&total<line.size() && line.size()!=1)

        {

            if(total%2==0)

            {

                if(line[total]=='1')

                    a_c++;

                a++;

                total++;

                if(a_c-b_c>5-b)

                {

                    cout<<"TEAM-A "<<total<<"\n";

                    flag=1;

                    break;

                }

                if(b_c-a_c>5-a)

                {

                    cout<<"TEAM-B "<<total<<"\n";

                    flag=1;

                    break;

                }

            }

            else

            {

                if(line[total]=='1')

                    b_c++;

                b++;

                total++;

                if(a_c-b_c>5-b)

                {

                    cout<<"TEAM-A "<<total<<"\n";

                    flag=1;

                    break;

                }

                if(b_c-a_c>5-a)

                {

                    cout<<"TEAM-B "<<total<<"\n";

                    flag=1;

                    break;

                }

            }

        }

        if(a_c!=b_c &&flag!=1  && line.size()!=1)

        {

            if(a_c>b_c)

            {

                cout<<"TEAM-A "<<total<<"\n";

                    break;

            }

            else

            {

                cout<<"TEAM-B "<<total<<"\n";

                    break;

            }

        }

        else

        {

            while(total<20 && flag!=1  && line.size()!=1)

            {

                if(line[total]=='1')

                    a_c++;

                if(line[total+1]=='1')

                    b_c++;

                total+=2;

                if(a_c>b_c)

                {

                    cout<<"TEAM-A "<<total<<"\n";

                    flag=1;

                    break;

                }

                if(b_c>a_c)

                {

                    cout<<"TEAM-B "<<total<<"\n";

                    flag=1;

                    break;

                }

            }

            if(total>=20 &&flag!=1  && line.size()!=1)

                cout<<"TIE\n";

        }
        getline(cin,line);

    }

return 0;

}

