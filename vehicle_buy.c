#include <stdio.h>

int main()
{

    int choice_vehicle;

    printf("CHoice Your Vehicle \n  1. New Car:  \n 2. Second Car: \n 3. Moterbile \n 4. scootry \n 5. cycle \n  6. OLA  \n  7. UBER \n  8. Car Part  \n ");
    scanf("%d", &choice_vehicle);

    if (choice_vehicle == 1)
    {
        double contact_number;
        char User_name[20];

        printf(" Enquery  FORM \n");

        printf("Enter Your Contact Datail:  ");
        scanf("%d", &contact_number);

        printf("Enter Your Name:  ");
        scanf("%s", &User_name);

        int car_model;

        printf("choice your brand : \n 1.TATA \n 2. HONDA 3. \n  ");
        scanf("%d", &car_model);

        if (car_model == 1)
        {
            char car_name[20] = " TATA NEXA ";
            char car_color[20] = " WHITE ";

            int car_rate = 200000;
            int car_gst = 18;

            int total_rate;
            int grand_rate;
            int total_gst_rate;

            total_rate = car_rate * car_gst / 100;

            total_gst_rate = total_rate + car_rate;

            printf("                MUMBAI CAR STORE                    \n");

            printf(" Car Name:         %s \n", car_name);
            printf(" Car color:         %s \n", car_color);

            printf(" actully Rate:      %d \n", car_rate);

            printf(" Car 18 gst:        %d\n", total_rate);

            printf(" 18 percent gst add RATE :    %d\n", total_gst_rate);

            int user_interest;
            printf("  Are you interested to buy \n 1. YES \n 2. NO \n Enter you choice:   ");
            scanf("%d", &user_interest);

            if (user_interest == 1)
            {
                int vehicle_buy;
                printf(" 1.Cash Payment \n 2.EMI \n CHOICE Your Payment Method :   ");
                scanf("%d", &vehicle_buy);
                // cash payment
                if (vehicle_buy == 1)
                {

                    int payment_process;
                    printf(" Enter you amonut:   ");
                    scanf("%d", &payment_process);

                    if (total_gst_rate == payment_process)
                    {
                        printf(" payment recieved :   ");

                        printf("%d", payment_process);
                    }
                    else
                    {
                        printf(" payment failed");
                    }
                }
                else if (vehicle_buy == 2)
                {
                    // emi  payment
                    int user_month_emi;
                    int down_payment = 30;
                    int amount_down_payment;
                    int total_emi_payment;
                    int emi_month_balance;

                    printf(" How many month you want EMI:    ");
                    scanf("%d", &user_month_emi);

                    amount_down_payment = total_gst_rate * down_payment / 100;

                    total_emi_payment = total_gst_rate - amount_down_payment;

                    printf(" 30 percent  down payment: %d\n ", amount_down_payment);
                    printf(" this is balance payment:   %d\n ", total_emi_payment);

                    emi_month_balance = total_emi_payment / user_month_emi;

                    printf(" This is month emi amonut %d ", emi_month_balance);
                }
            }
            else if (user_interest == 2)
            {
                printf("Thankyou");
            }
        }

        else if (car_model == 2)
        {

            char car_name[20] = " HONDA ";
            char car_color[20] = " WHITE ";

            int car_rate = 400000;
            int car_gst = 18;

            int total_rate;
            int grand_rate;
            int total_gst_rate;

            total_rate = car_rate * car_gst / 100;

            total_gst_rate = total_rate + car_rate;

            printf("                MUMBAI CAR STORE                    \n");

            printf(" Car Name:         %s \n", car_name);
            printf(" Car color:         %s \n", car_color);

            printf(" actully Rate:      %d \n", car_rate);

            printf(" Car 18 gst:        %d\n", total_rate);

            printf(" 18 percent gst add RATE :    %d\n", total_gst_rate);

            int user_interest;
            printf("  Are you interested to buy \n 1. YES \n 2. NO \n Enter you choice:   ");
            scanf("%d", &user_interest);

            if (user_interest == 1)
            {
                int vehicle_buy;
                printf(" 1.Cash Payment \n 2.EMI \n CHOICE Your Payment Method :   ");
                scanf("%d", &vehicle_buy);
                // cash payment
                if (vehicle_buy == 1)
                {

                    int payment_process;
                    printf(" Enter you amonut:   ");
                    scanf("%d", &payment_process);

                    if (total_gst_rate == payment_process)
                    {
                        printf(" payment recieved :   ");

                        printf("%d", payment_process);
                    }
                    else
                    {
                        printf(" payment failed");
                    }
                }
                else if (vehicle_buy == 2)
                {
                    // emi  payment
                    int user_month_emi;
                    int down_payment = 30;
                    int amount_down_payment;
                    int total_emi_payment;
                    int emi_month_balance;

                    printf(" How many month you want EMI:    ");
                    scanf("%d", &user_month_emi);

                    amount_down_payment = total_gst_rate * down_payment / 100;

                    total_emi_payment = total_gst_rate - amount_down_payment;

                    printf(" 30 percent  down payment: %d\n ", amount_down_payment);
                    printf(" this is balance payment:   %d\n ", total_emi_payment);

                    emi_month_balance = total_emi_payment / user_month_emi;

                    printf(" This is month emi amonut %d ", emi_month_balance);
                }
            }
            else if (user_interest == 2)
            {
                printf("Thankyou");
            }
        }
        else if (choice_vehicle == 2)
        {

            double contact_number;
            char User_name[20];

            printf("Enquery  FORM \n");

            printf("Enter Your Contact Datail:  ");
            scanf("%d", &contact_number);

            printf("Enter Your Name:  ");
            scanf("%s", &User_name);

            int car_model;

            printf("choice your brand : \n 1. land Rover \n 2. KIA 3. \n  ");
            scanf("%d", &car_model);

            if (car_model == 1)
            {
                char car_name[20] = " land Rover ";
                char car_color[20] = " BLUE ";

                int car_rate = 300000;
                int car_gst = 18;

                int total_rate;
                int grand_rate;
                int total_gst_rate;

                total_rate = car_rate * car_gst / 100;

                total_gst_rate = total_rate + car_rate;

                printf("                MUMBAI CAR STORE                    \n");

                printf(" Car Name:         %s \n", car_name);
                printf(" Car color:         %s \n", car_color);

                printf(" actully Rate:      %d \n", car_rate);

                printf(" Car 18 gst:        %d\n", total_rate);

                printf(" 18 percent gst add RATE :    %d\n", total_gst_rate);

                int vehicle_buy;
                printf(" 1.Cash Payment \n 2.EMI \n CHOICE Your Payment Method :   ");
                scanf("%d", &vehicle_buy);

                if (vehicle_buy == 1)
                {

                    int payment_process;
                    printf(" Enter you amonut:   ");
                    scanf("%d", &payment_process);

                    if (total_gst_rate == payment_process)
                    {
                        printf(" payment recieved :   ");

                        printf("%d", payment_process);
                    }
                    else
                    {
                        printf(" payment failed");
                    }
                }
                else if (vehicle_buy == 2)
                {

                    int user_month_emi;
                    int down_payment = 30;
                    int amount_down_payment;
                    int total_emi_payment;
                    int emi_month_balance;

                    printf(" How many month you want EMI:    ");
                    scanf("%d", &user_month_emi);

                    amount_down_payment = total_gst_rate * down_payment / 100;

                    total_emi_payment = total_gst_rate - amount_down_payment;

                    printf(" 30 percent  down payment: %d\n ", amount_down_payment);
                    printf(" this is balance payment:   %d\n ", total_emi_payment);

                    emi_month_balance = total_emi_payment / user_month_emi;

                    printf(" This is month emi amonut %d ", emi_month_balance);
                }
            }
            else if (car_model == 2)
            {

                // printf("****** honda  ******");

                char car_name[20] = " KIA ";
                char car_color[20] = " Yellow ";

                int car_rate = 200000;
                int car_gst = 18;

                int total_rate;
                int grand_rate;
                int total_gst_rate;

                total_rate = car_rate * car_gst / 100;

                total_gst_rate = total_rate + car_rate;

                printf("                MUMBAI CAR STORE                    \n");

                printf(" Car Name:         %s \n", car_name);
                printf(" Car color:         %s \n", car_color);

                printf(" actully Rate:      %d \n", car_rate);

                printf(" Car 18 gst:        %d\n", total_rate);

                printf(" 18 percent gst add RATE :    %d\n", total_gst_rate);

                int vehicle_buy;
                printf(" 1.Cash Payment \n 2.EMI \n CHOICE Your Payment Method :   ");
                scanf("%d", &vehicle_buy);

                if (vehicle_buy == 1)
                {

                    int payment_process;
                    printf(" Enter you amonut:   ");
                    scanf("%d", &payment_process);

                    if (total_gst_rate == payment_process)
                    {
                        printf(" payment recieved :   ");

                        printf("%d", payment_process);
                    }
                    else
                    {
                        printf(" payment failed");
                    }
                }
                else if (vehicle_buy == 2)
                {

                    int user_month_emi;
                    int down_payment = 30;
                    int amount_down_payment;
                    int total_emi_payment;
                    int emi_month_balance;

                    printf(" How many month you want EMI:    ");
                    scanf("%d", &user_month_emi);

                    amount_down_payment = total_gst_rate * down_payment / 100;

                    total_emi_payment = total_gst_rate - amount_down_payment;

                    printf(" 30 percent  down payment: %d\n ", amount_down_payment);
                    printf(" this is balance payment:   %d\n ", total_emi_payment);

                    emi_month_balance = total_emi_payment / user_month_emi;

                    printf(" This is month emi amonut %d ", emi_month_balance);
                }
            }
        }
    }
    else if (choice_vehicle == 3)
    {

        double contact_number;
        char User_name[20];

        printf(" Enquery  FORM \n");

        printf("Enter Your Contact Datail:  ");
        scanf("%d", &contact_number);

        printf("Enter Your Name:  ");
        scanf("%s", &User_name);

        int car_model;

        printf("choice your brand : \n 1.TATA \n 2. HONDA 3. \n  ");
        scanf("%d", &car_model);

        if (car_model == 1)
        {
            char car_name[20] = " HERO ";
            char car_color[20] = " WHITE ";

            int car_rate = 20000;
            int car_gst = 10;

            int total_rate;
            int grand_rate;
            int total_gst_rate;

            total_rate = car_rate * car_gst / 100;

            total_gst_rate = total_rate + car_rate;

            printf("                MUMBAI CAR STORE                    \n");

            printf(" Car Name:         %s \n", car_name);
            printf(" Car color:         %s \n", car_color);

            printf(" actully Rate:      %d \n", car_rate);

            printf(" Car 18 gst:        %d\n", total_rate);

            printf(" 18 percent gst add RATE :    %d\n", total_gst_rate);

            int user_interest;
            printf("  Are you interested to buy \n 1. YES \n 2. NO \n Enter you choice:   ");
            scanf("%d", &user_interest);

            if (user_interest == 1)
            {
                int vehicle_buy;
                printf(" 1.Cash Payment \n 2.EMI \n CHOICE Your Payment Method :   ");
                scanf("%d", &vehicle_buy);
                // cash payment
                if (vehicle_buy == 1)
                {

                    int payment_process;
                    printf(" Enter you amonut:   ");
                    scanf("%d", &payment_process);

                    if (total_gst_rate == payment_process)
                    {
                        printf(" payment recieved :   ");

                        printf("%d", payment_process);
                    }
                    else
                    {
                        printf(" payment failed");
                    }
                }
                else if (vehicle_buy == 2)
                {
                    // emi  payment
                    int user_month_emi;
                    int down_payment = 30;
                    int amount_down_payment;
                    int total_emi_payment;
                    int emi_month_balance;

                    printf(" How many month you want EMI:    ");
                    scanf("%d", &user_month_emi);

                    amount_down_payment = total_gst_rate * down_payment / 100;

                    total_emi_payment = total_gst_rate - amount_down_payment;

                    printf(" 30 percent  down payment: %d\n ", amount_down_payment);
                    printf(" this is balance payment:   %d\n ", total_emi_payment);

                    emi_month_balance = total_emi_payment / user_month_emi;

                    printf(" This is month emi amonut %d ", emi_month_balance);
                }
            }
            else if (user_interest == 2)
            {
                printf("Thankyou");
            }
        }
    }
    else if (choice_vehicle == 4)
    {

        double contact_number;
        char User_name[20];

        printf(" Enquery  FORM \n");

        printf("Enter Your Contact Datail:  ");
        scanf("%d", &contact_number);

        printf("Enter Your Name:  ");
        scanf("%s", &User_name);

        int car_model;

        printf("choice your brand : \n 1.TATA \n 2. HONDA 3. \n  ");
        scanf("%d", &car_model);

        if (car_model == 1)
        {
            char car_name[20] = " Active  ";
            char car_color[20] = " WHITE ";

            int car_rate = 2000;
            int car_gst = 8;

            int total_rate;
            int grand_rate;
            int total_gst_rate;

            total_rate = car_rate * car_gst / 100;

            total_gst_rate = total_rate + car_rate;

            printf("                MUMBAI CAR STORE                    \n");

            printf(" Car Name:         %s \n", car_name);
            printf(" Car color:         %s \n", car_color);

            printf(" actully Rate:      %d \n", car_rate);

            printf(" Car 18 gst:        %d\n", total_rate);

            printf(" 18 percent gst add RATE :    %d\n", total_gst_rate);

            int user_interest;
            printf("  Are you interested to buy \n 1. YES \n 2. NO \n Enter you choice:   ");
            scanf("%d", &user_interest);

            if (user_interest == 1)
            {
                int vehicle_buy;
                printf(" 1.Cash Payment \n 2.EMI \n CHOICE Your Payment Method :   ");
                scanf("%d", &vehicle_buy);
                // cash payment
                if (vehicle_buy == 1)
                {

                    int payment_process;
                    printf(" Enter you amonut:   ");
                    scanf("%d", &payment_process);

                    if (total_gst_rate == payment_process)
                    {
                        printf(" payment recieved :   ");

                        printf("%d", payment_process);
                    }
                    else
                    {
                        printf(" payment failed");
                    }
                }
                else if (vehicle_buy == 2)
                {
                    // emi  payment
                    int user_month_emi;
                    int down_payment = 30;
                    int amount_down_payment;
                    int total_emi_payment;
                    int emi_month_balance;

                    printf(" How many month you want EMI:    ");
                    scanf("%d", &user_month_emi);

                    amount_down_payment = total_gst_rate * down_payment / 100;

                    total_emi_payment = total_gst_rate - amount_down_payment;

                    printf(" 30 percent  down payment: %d\n ", amount_down_payment);
                    printf(" this is balance payment:   %d\n ", total_emi_payment);

                    emi_month_balance = total_emi_payment / user_month_emi;

                    printf(" This is month emi amonut %d ", emi_month_balance);
                }
            }
            else if (user_interest == 2)
            {
                printf("Thankyou");
            }
        }
    }
    else if (choice_vehicle == 5)
    {

        double contact_number;
        char User_name[20];

        printf(" Enquery  FORM \n");

        printf("Enter Your Contact Datail:  ");
        scanf("%d", &contact_number);

        printf("Enter Your Name:  ");
        scanf("%s", &User_name);

        int car_model;

        printf("choice your brand : \n 1.TATA \n 2. HONDA 3. \n  ");
        scanf("%d", &car_model);

        if (car_model == 1)
        {
            char car_name[20] = " TATA cycle ";
            char car_color[20] = " WHITE ";

            int car_rate = 60000;
            int car_gst = 18;

            int total_rate;
            int grand_rate;
            int total_gst_rate;

            total_rate = car_rate * car_gst / 100;

            total_gst_rate = total_rate + car_rate;

            printf("                MUMBAI CAR STORE                    \n");

            printf(" Car Name:         %s \n", car_name);
            printf(" Car color:         %s \n", car_color);

            printf(" actully Rate:      %d \n", car_rate);

            printf(" Car 18 gst:        %d\n", total_rate);

            printf(" 18 percent gst add RATE :    %d\n", total_gst_rate);

            int user_interest;
            printf("  Are you interested to buy \n 1. YES \n 2. NO \n Enter you choice:   ");
            scanf("%d", &user_interest);

            if (user_interest == 1)
            {
                int vehicle_buy;
                printf(" 1.Cash Payment \n 2.EMI \n CHOICE Your Payment Method :   ");
                scanf("%d", &vehicle_buy);
                // cash payment
                if (vehicle_buy == 1)
                {

                    int payment_process;
                    printf(" Enter you amonut:   ");
                    scanf("%d", &payment_process);

                    if (total_gst_rate == payment_process)
                    {
                        printf(" payment recieved :   ");

                        printf("%d", payment_process);
                    }
                    else
                    {
                        printf(" payment failed");
                    }
                }
                else if (vehicle_buy == 2)
                {
                    // emi  payment
                    int user_month_emi;
                    int down_payment = 30;
                    int amount_down_payment;
                    int total_emi_payment;
                    int emi_month_balance;

                    printf(" How many month you want EMI:    ");
                    scanf("%d", &user_month_emi);

                    amount_down_payment = total_gst_rate * down_payment / 100;

                    total_emi_payment = total_gst_rate - amount_down_payment;

                    printf(" 30 percent  down payment: %d\n ", amount_down_payment);
                    printf(" this is balance payment:   %d\n ", total_emi_payment);

                    emi_month_balance = total_emi_payment / user_month_emi;

                    printf(" This is month emi amonut %d ", emi_month_balance);
                }
            }
            else if (user_interest == 2)
            {
                printf("Thankyou");
            }
        }
    }
    else if (choice_vehicle == 6)
    {
        // OLA code
        int driver_car_combin;
        printf("  Your want \n  1. Driver + CAR \n 2. Only CAR \n ");

        scanf("%d", &driver_car_combin);

        if (driver_car_combin == 1)
        {

            int costomer_use_day;

            printf("  YOU Want how many day: \n 1. 1 Day \n 2. 2 Day  \n 3. 3 Day  \n 4. 4 hours based \n");

            scanf("%d", &costomer_use_day);

            if (costomer_use_day == 1)
            {

                int ONE_day_rate = 1200;

                printf(" ONE Day Rate Car + Driver: %d \n ", ONE_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE:  \n ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (ONE_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 2)
            {

                int TWO_day_rate = 2200;

                printf(" TWO Day Rate Car + Driver: %d", TWO_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE: ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (TWO_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 3)
            {
                int three_day_rate = 3000;

                printf(" THREE Day Rate Car + Driver: %d", three_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE: ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (three_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 4)
            {
                int one_hours_rate = 100;
                int total_cast;

                int user_hours;
                printf(" HOW MANY YOU ARE WANT HOURS:   ");
                scanf("%d", &user_hours);

                total_cast = one_hours_rate * user_hours;

                printf(" ONE HOURS CHARGE RATE %d \n", one_hours_rate);

                printf(" YOUR TOTAL HOUES    %d \n ", user_hours);

                printf("  TOTAL CHARGE    %d \n", total_cast);

                int user_payment;
                printf(" Enter you payment:  ");

                scanf("%d", &user_payment);

                if (total_cast == user_payment)
                {
                    printf(" PAYEMENT RECIEVED \n  ");
                    printf(" THANKYOU ");
                }
                else
                {
                    printf("PAYMENT FAILED ");
                }
            }
            else
            {
                printf(" invalied number ");
            }
        }
        else if (driver_car_combin == 2)
        {

            int costomer_use_day;

            printf("  YOU Want how many day: \n 1. 1 Day \n 2. 2 Day  \n 3. 3 Day  \n 4. 4 hours based \n");

            scanf("%d", &costomer_use_day);

            if (costomer_use_day == 1)
            {

                int ONE_day_rate = 700;

                printf(" ONE Day Rate Car : %d \n ", ONE_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE:  \n ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (ONE_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 2)
            {

                int TWO_day_rate = 1300;

                printf(" TWO Day Rate Car: %d", TWO_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE: ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (TWO_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 3)
            {
                int three_day_rate = 1800;

                printf(" THREE Day Rate Car: %d", three_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE: ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (three_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 4)
            {
                int one_hours_rate = 300;
                int total_cast;

                int user_hours;
                printf(" HOW MANY YOU ARE WANT HOURS:   ");
                scanf("%d", &user_hours);

                total_cast = one_hours_rate * user_hours;

                printf(" ONE HOURS CHARGE RATE %d \n", one_hours_rate);

                printf(" YOUR TOTAL HOUES    %d \n ", user_hours);

                printf("  TOTAL CHARGE    %d \n", total_cast);

                int user_payment;
                printf(" Enter you payment:  ");

                scanf("%d", &user_payment);

                if (total_cast == user_payment)
                {
                    printf(" PAYEMENT RECIEVED \n  ");
                    printf(" THANKYOU ");
                }
                else
                {
                    printf("PAYMENT FAILED ");
                }
            }
            else
            {
                printf("  invalid number  ");
            }
        }
    }
    else if (choice_vehicle == 7)
    {
        int driver_car_combin;
        printf("  Your want \n  1. Driver + CAR \n 2. Only CAR \n ");

        scanf("%d", &driver_car_combin);

        if (driver_car_combin == 1)
        {

            int costomer_use_day;

            printf("  YOU Want how many day: \n 1. 1 Day \n 2. 2 Day  \n 3. 3 Day  \n 4. 4 hours based \n");

            scanf("%d", &costomer_use_day);

            if (costomer_use_day == 1)
            {

                int ONE_day_rate = 1200;

                printf(" ONE Day Rate Car + Driver: %d \n ", ONE_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE:  \n ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (ONE_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 2)
            {

                int TWO_day_rate = 2200;

                printf(" TWO Day Rate Car + Driver: %d", TWO_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE: ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (TWO_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 3)
            {
                int three_day_rate = 3000;

                printf(" THREE Day Rate Car + Driver: %d", three_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE: ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (three_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 4)
            {
                int one_hours_rate = 100;
                int total_cast;

                int user_hours;
                printf(" HOW MANY YOU ARE WANT HOURS:   ");
                scanf("%d", &user_hours);

                total_cast = one_hours_rate * user_hours;

                printf(" ONE HOURS CHARGE RATE %d \n", one_hours_rate);

                printf(" YOUR TOTAL HOUES    %d \n ", user_hours);

                printf("  TOTAL CHARGE    %d \n", total_cast);

                int user_payment;
                printf(" Enter you payment:  ");

                scanf("%d", &user_payment);

                if (total_cast == user_payment)
                {
                    printf(" PAYEMENT RECIEVED \n  ");
                    printf(" THANKYOU ");
                }
                else
                {
                    printf("PAYMENT FAILED ");
                }
            }
            else
            {
                printf(" invalid number");
            }
        }
        else if (driver_car_combin == 2)
        {
            //  uber  code
            int costomer_use_day;

            printf("  YOU Want how many day: \n 1. 1 Day \n 2. 2 Day  \n 3. 3 Day  \n 4. 4 hours based \n");

            scanf("%d", &costomer_use_day);

            if (costomer_use_day == 1)
            {

                int ONE_day_rate = 700;

                printf(" ONE Day Rate Car : %d \n ", ONE_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE:  \n ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (ONE_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 2)
            {

                int TWO_day_rate = 1300;

                printf(" TWO Day Rate Car: %d", TWO_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE: ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (TWO_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 3)
            {
                int three_day_rate = 1800;

                printf(" THREE Day Rate Car: %d", three_day_rate);

                int user_rent_interest;
                printf("Are you interested: \n 1. YES \n  2. NO \n");

                scanf("%d", &user_rent_interest);

                if (user_rent_interest == 1)
                {

                    printf("ONLY FOR CASH PAYMENT ACCEPT HARE: ");

                    int ola_rent_payment;
                    printf("  ENter you payment amonut:   ");
                    scanf("%d", &ola_rent_payment);

                    if (three_day_rate == ola_rent_payment)
                    {
                        printf(" PAYMENT RECIEVED \n ");

                        printf("THANKYOU");
                    }
                    else
                    {
                        printf("PAYMENT FAILED ");
                    }
                }
            }
            else if (costomer_use_day == 4)
            {
                int one_hours_rate = 300;
                int total_cast;

                int user_hours;
                printf(" HOW MANY YOU ARE WANT HOURS:   ");
                scanf("%d", &user_hours);

                total_cast = one_hours_rate * user_hours;

                printf(" ONE HOURS CHARGE RATE %d \n", one_hours_rate);

                printf(" YOUR TOTAL HOUES    %d \n ", user_hours);

                printf("  TOTAL CHARGE    %d \n", total_cast);

                int user_payment;
                printf(" Enter you payment:  ");

                scanf("%d", &user_payment);

                if (total_cast == user_payment)
                {
                    printf(" PAYEMENT RECIEVED \n  ");
                    printf(" THANKYOU ");
                }
                else
                {
                    printf("PAYMENT FAILED ");
                }
            }
            else
            {
                printf(" invalid numver ");
            }
        }
    }
    else if (choice_vehicle == 8)
    {

        int car_part;

        printf(" 1. Car engine  \n 2. car wheel  ");
        scanf("%d", &car_part);

        if (car_part == 1)
        {

            int engine_runway_km = 300;
            int engine_rate = 5000;

            int model_number = 5543;

            printf("this engine run  in km %d :\n", engine_runway_km);
            printf("this is model number  %d :\n", model_number);
            printf("this is Rate  %d : \n", engine_rate);

            int engine_live_check;

            printf(" do you want check live : \n 1. YES \n 2. NO \n ");
            scanf("%d", &engine_live_check);

            if (engine_live_check == 1)
            {
                int appointment_date;
                printf(" Enter you  appointment date \n ");
                scanf("%d", &appointment_date);

                if (appointment_date <= 30)
                {
                    printf(" this is mumbai location  go and check; \n ");
                    printf(" ADDRESS    andheri\n ");

                    printf(" CASH PAYMENT ACCEPT HERE \n");

                    int car_part_payment;
                    printf(" enter you payment : \n ");
                    scanf("%d", &car_part_payment);

                    if (engine_rate == car_part_payment)
                    {
                        printf(" Payment Recieved");
                    }
                    else
                    {
                        printf(" Payment Failed ");
                    }
                }
            }
            else
            {
                printf(" THANKYOU");
            }
        }
    }
}