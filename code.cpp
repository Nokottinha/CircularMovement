#include<stdio.h>
#include<stdlib.h>


int main()
{
    int choose;
    printf("1) Simple mode\n2) Complete mode\n");
    scanf("%d",&choose);
    system("clear");
    if(choose == 1)
    {

        printf("Number of pulleys: ");
        int pulleysnumber;
        scanf("%d",&pulleysnumber);
        float potreal;
        if(pulleysnumber == 2 )
        {
                float pulleyone, pulleytwo;
                printf("Pulley radius D1 (milimiter):\n");
                scanf("%f",&pulleyone);

                printf("\npulley radius D2 (milimiter):\n");
                scanf("%f",&pulleytwo);
            
                printf("\nPotency unity:\n1)Horse Power\n2)Watts \n");
                int potency = 0;
                scanf("%d",&potency);
                if(potency==1)
            {
                    float pothp;
                    printf("Potency value: ");
                    scanf("%f",&pothp);
                    potreal = pothp*745.7;

            }
            else
            {
                printf("Potency value: ");
                scanf("%f",&potreal);
            }
            float rotation;
            printf("\nRotation per minute (motor):");
            scanf("%f",&rotation);

        system("clear");
        printf("Confirm the data:\n");
        printf("D1 = %0.2f  D2 = %0.2f Potency(watts) =  %0.2f RPM = %0.2f ",pulleyone,pulleytwo,potreal, rotation);
    

        float frequence, angularspeedrad, angularspeed, period, linearspeed, perifericspeed, torque;

        frequence = rotation/60;
        angularspeedrad = (rotation)/30;
        angularspeed = (rotation*3.1415)/30;
        period = 1/frequence;
        linearspeed = (2*3.1415*pulleyone*0.001)/period;
        perifericspeed = (3.1415*rotation*pulleyone*0.001)/30;
        torque = potency/perifericspeed;

        float i, frequencetwo, angularspeedtworad, angularspeedtwo, periodtwo, linearspeedtwo, perifericspeedtwo, torquetwo, rotationtwo;
        i = (2*pulleytwo)/(2*pulleyone);
        angularspeedtwo = angularspeed/i;
        angularspeedtworad = angularspeedrad/i;
        frequencetwo = frequence/i;
        rotationtwo = rotation/i;
        linearspeedtwo = (2*3.1415*pulleytwo)/frequencetwo;
        periodtwo = 1/frequencetwo;
        torquetwo = torque*i;

        system("clear");
        printf("Full Data:\n");
        printf("Pulley One:\nRadius: %0.2f mm\nfrequence: %0.2f Hz\nAngular Speed: %0.2fm/s\nAngular Speed: %0.2f Rad/s\nLinear Speed: %0.2f m/s\nPeriod: %0.2f s\nPeriferic Speed: %0.2f m/s\nTorque: %0.2f N",pulleyone,frequence,angularspeed, angularspeedrad,linearspeed,period,perifericspeed,torque);
        
        }
        else
        {
            system("clear");
            printf("waiting for update");
        }
    }
    if(choose == 2)
    {
        system("clear");
        printf("waiting for update");
    }

}