#include <stdio.h>
int bus[31][12][5][5][40], train[31][12][5][5][100];
int main()
{
    printf("WELCOME\n\n");
    int date,month,sell,sale,tcode,time,number=0,route,sit;
    char note[15];
    /*date integer using for get value of Date.
    month integer using for get value of Month.
    sale integer using for buying ticket.
    tcode integer using for match the ticket code schedule.
    time  integer using for time.
    number integer using for switch.
    route integer using for select the right root.
    sell integer using for buy or booking a ticket.
    sit for sits number.
    train global integer array for ticket info.
    bus  global integer array for ticket info.*/
    while(number!=8)
    {
        printf("\n\nPress '1' Buy or book a Bus ticket.\nPress '2' Bus schedule.\nPress '3' Bus ticket status.\n");
        printf("Press '4' Buy or book a Train ticket.\nPress '5' Train schedule.\nPress '6' Train ticket status.\n");
        printf("Press '7' User manual & help. \nPress '8' Exit.\nSelect key: ");
        while(1)
        {
            scanf("%d",&number);
            if(number<1 || number>8)
                printf("Input error...! Please try again!\nPress your key: ");
            else break;
        }
        switch (number)
        {
        case 1:
        {
            while(1)
            {
                printf("You select Bus.\nNow choose Day(dd): ");
                scanf("%d",&date);
                printf("    Choose Month(mm): ");
                scanf("%d",&month);
                if (date>31 || date<1 || month<1 || month>12)
                    printf("Wrong Date or wrong month...! please try again!\nPress your key: ");
                else break;
            }
            printf("You choose %d/%d/2017 . Now choose your favorable time for this day.\n",date,month);
            printf("Morning\n     press '1' for 6:00am.\n     Press '2' for 9:00am.\n");
            printf("Afternoon\n     Press '3' for 1:00pm.\n     Press '4' for 3:00pm.\n");
            printf("Night\n     Press '5' for 7:00pm.\n     Press '6' for 9:00pm.\n");
            while(1)
            {
                scanf("%d",&time);
                if(time==1)
                {
                    printf("You select 06:00am at morning\n");
                    break;
                }
                else if (time==2)
                {
                    printf("You select 09:00am at morning\n");
                    break;
                }
                else if (time==3)
                {
                    printf("You select 01:00pm at afternoon\n");
                    break;
                }
                else if (time==4)
                {
                    printf("You select 03:00pm at afternoon\n");
                    break;
                }
                else if (time==5)
                {
                    printf("You select 07:00pm at night\n");
                    break;
                }
                else if (time==6)
                {
                    printf("You select 09:00pm at night\n");
                    break;
                }
                else if (time>6 || time<1) printf("Wrong key inputed, please try again!\nPress your key: ");
            }
            printf("Select the Route: \n");
            printf("Press '1' for haka to Khulna. Ticket prize 550TK\n");
            printf("Press '2' for Dhaka to Noakhali. Ticket prize 590TK\n");
            printf("press '3' for Dhaka to Chittagong. Ticket prize 500TK\n");
            printf("Press '4' for Dhaka to Shylet. Ticket prize 750TK\n");
            printf("Press '5' for Dhaka to Rajshahi. Ticket prize 450TK\n");
            while(1)
            {
                scanf("%d",&route);
                if(route==1)
                {
                    printf("You chose  Dhaka to Khulna.\n");
                    break;
                }
                else if(route==2)
                {
                    printf("You chose Dhaka to Noakhali.\n");
                    break;
                }
                else if(route==3)
                {
                    printf("You chose Dhaka to Chittagong.\n");
                    break;
                }
                else if(route==4)
                {
                    printf("You chose Dhaka to Shylet.\n");
                    break;
                }
                else if(route==5)
                {
                    printf("You chose Dhaka to Rajshahi.\n");
                    break;
                }
                else if(route<1 || route>5)
                    printf("Route not find. please try again!\nPress your key: ");
            }
            printf("press '1' for purchase or press '2' for book.\n");
            while(1)
            {
                scanf("%d",&sell);
                if(sell==1) break;
                else if (sell==2) break;
                else printf("Wrong input...! Please try again\n");
            }
            while(1)
            {
                printf("Give your new sit number: ");
                scanf("%d",&sit);
                if(sit<0 || sit>40) printf("Wrong input.Try again.\n");
                else
                {
                    if (bus[date][month][time][route][sit]==1) printf("Already pursed\n");
                    else if (bus[date][month][time][route][sit]==2) printf("Already booked.\n");
                    else
                    {
                        bus[date][month][time][route][sit]=sell;
                        break;
                    }
                }
            }
            if (sell==1) printf("Pursed ticket code info: ");
            else printf("Booked ticket code info: ");
            if(month<10)
            {
                if(date<10)
                    printf("%d0%d0%d%d%d\n",sell,date,month,time,route);
                else printf("%d%d0%d%d%d\n",sell,date,month,time,route);
            }
            else
            {
                if(date<10) printf("%d0%d%d%d%d\n\n",sell,date,month,time,route);
                else printf("%d%d%d%d%d\n\n",sell,date,month,time,route);
            }
            printf("Your sit number: %d\n",sit);
            break;
        }
        break;
        case 2:
        {
            printf("Travel Route schedule from Dhaka: \n");
            printf("1. Dhaka to Khulna. Ticket prize 550TK only.\n");
            printf("2. Dhaka to Noakhali.Ticket prize 590TK only.\n");
            printf("3. Dhaka to Chittagong. Ticket prize 500TK only.\n");
            printf("4. Dhaka to Shylet. Ticket prize 750TK only.\n");
            printf("5. Dhaka to Rajshahi. Ticket prize 450TK only.\n");
            printf("\nTime schedule for every route:\n");
            printf("Morning:\n   1. 6:00am.\n   2. 9:00am.\n");
            printf("Afternoon:\n   3. 1:00pm.\n   4. 3:00pm.\n");
            printf("Night:\n   5. 7:00pm.\n   6. 9:00pm.\n");
            printf("Thanks for showing Bus time schedule.\n");
            printf("Check a Bus for yours travel:\n");
            printf("Enter Date: ");
            scanf("%d",&date);
            printf("Enter Month: ");
            scanf("%d",&month);
            printf("Enter Time No.: ");
            scanf("%d",&time);
            printf("Enter Route No.: ");
            scanf("%d",&route);
            if(date>31 || date< 1 ||month>12 ||month<1 || time>6 ||time<1 || route>5 || route<1) printf("Wrong input\n");
            else
            {
                for(sit=0; sit<40; sit++)
                {
                    if (bus[date][month][time][route][sit]==1)
                    {
                        note[0]='s';
                        note[1]='o';
                        note[2]='l';
                        note[3]='d';
                        note[4]='\0';
                    }
                    else if (bus[date][month][time][route][sit]==2)
                    {
                        note[0]='b';
                        note[1]='o';
                        note[2]='o';
                        note[3]='k';
                        note[4]='e';
                        note[5]='d';
                        note[6]='\0';
                    }
                    else
                    {
                        note[0]='f';
                        note[1]='o';
                        note[2]='r';
                        note[3]=' ';
                        note[4]='s';
                        note[5]='a';
                        note[6]='l';
                        note[7]='e';
                        note[7]='\0';
                    }
                    printf("%d no. sit status: %s.\n",sit+1,note);
                }
            }
            break;
        }
        case 3:
        {
            printf("Enter 7 digits Ticket code: ");
            scanf("%d",&tcode);
            printf("Sit number: ");
            scanf("%d",&sit);
            route=tcode%10;
            tcode/=10;
            time=tcode%10;
            tcode/=10;
            month=tcode%100;
            tcode/=100;
            date=tcode%100;
            sell=tcode/100;
            if(date>31 || date< 1 ||month>12 ||month<1 || time>6 ||time<1 || route>5 || route<1 || sit>40 || sit<1 || sell<1 || sell>2)
                printf("Wrong ticket code or sit number.\n");
            else
            {
                printf("Travel date : %d/%d/2017.\nTravel start in: ",date,month);
                if (time==1) printf("06:00am at morning\n");
                if (time==2) printf("09:00am at morning\n");
                if (time==3) printf("01:00pm at afternoon\n");
                if (time==4) printf("03:00pm at afternoon\n");
                if (time==5) printf("07:00pm at night\n");
                if (time==6) printf("09:00pm at night\n");
                if(route==1) printf("Rote: Dhaka to Khulna.\nTicket prize 550TK\n");
                if(route==2) printf("Rote: Dhaka to Noakhali.\nTicket prize 590TK\n");
                if(route==3) printf("Rote: Dhaka to Chittagong.\nTicket prize 500TK\n");
                if(route==4) printf("Rote: Dhaka to Shylet.\nTicket prize 750TK\n");
                if(route==5) printf("Rote: Dhaka to Rajshahi.\nTicket prize 450TK\n");
                if (bus[date][month][time][route][sit]==1) printf("This ticket already pursed!\n");
                else if (bus[date][month][time][route][sit]==2)
                {
                    printf("This ticket already booked.\n");
                    printf("Press 1 for buy it or press any key to skip: ");
                    scanf("%d",&sale);
                    if(sale==1)
                    {
                        sell=sale;
                        bus[date][month][time][route][sit]=sell;
                        printf("Buying successful !\n thank you\n");
                    }
                }
            }
            break;
        }
        case 4:
        {
            while(1)
            {
                printf("You select Train.\nNow choose Day(dd): ");
                scanf("%d",&date);
                printf("    Choose Month(mm): ");
                scanf("%d",&month);
                if (date>31 || date<1 || month<1 || month>12)
                    printf("Wrong Data inputed, please try again!\nPress your key: ");
                else break;
            }
            printf("You choose %d/%d/2017 . Now choose your Favorable time for this day.\n",date,month);
            printf("Morning\n     press '1' for 6:00am.\n     Press '2' for 9:00am.\n");
            printf("Afternoon\n     Press '3' for 1:00pm.\n     Press '4' for 3:00pm.\n");
            printf("Night\n     Press '5' for 7:00pm.\n     Press '6' for 9:00pm.\n");
            while(1)
            {
                scanf("%d",&time);
                if(time==1)
                {
                    printf("You select 06:00am at morning\n");
                    break;
                }
                else if (time==2)
                {
                    printf("You select 09:00am at morning\n");
                    break;
                }
                else if (time==3)
                {
                    printf("You select 01:00pm at afternoon\n");
                    break;
                }
                else if (time==4)
                {
                    printf("You select 03:00pm at afternoon\n");
                    break;
                }
                else if (time==5)
                {
                    printf("You select 07:00pm at night\n");
                    break;
                }
                else if (time==6)
                {
                    printf("You select 09:00pm at night\n");
                    break;
                }
                else if (time>6 || time<1) printf("Wrong Data inputed, please try again!\nPress your key: ");
            }
            printf("Select the Route: \n");
            printf("Press '1' for Dhaka to Khulna.prize 550TK\n");
            printf("Press '2' for Dhaka to Jessor.prize 300TK\n");
            printf("press '3' for Dhaka to Chittagong.prize 900TK\n");
            printf("Press '4' for Dhaka to Shylet.prize 700TK\n");
            printf("Press '5' for Dhaka to Rajshahi.prize 350TK\n");
            while(1)
            {
                scanf("%d",&route);
                if(route==1)
                {
                    printf("You chose  Dhaka to Khulna.\n");
                    break;
                }
                else if(route==2)
                {
                    printf("You chose Dhaka to Jessor.\n");
                    break;
                }
                else if(route==3)
                {
                    printf("You chose Dhaka to Chittagong.\n");
                    break;
                }
                else if(route==4)
                {
                    printf("You chose Dhaka to Shylet.\n");
                    break;
                }
                else if(route==5)
                {
                    printf("You chose Dhaka to Rajshahi.\n");
                    break;
                }
                else if(route<1 || route>5)
                    printf("Route not find. please try again!\nPress your key: ");
            }
            printf("Press '1' for purchase or press '2' for book: ");
            while(1)
            {
                scanf("%d",&sell);
                if(sell==1) break;
                else if (sell==2) break;
                else printf("Wrong input...! please try again.\nPress your key: ");
            }
            while(1)
            {
                printf("Give your new sit number: ");
                scanf("%d",&sit);
                if(sit<0 || sit>100) printf("Wrong input.Try again.\n");
                else
                {
                    if (train[date][month][time][route][sit]==1) printf("Already pursed\n");
                    else if (train[date][month][time][route][sit]==2) printf("Already booked.\n");
                    else
                    {
                        train[date][month][time][route][sit]=sell;
                        break;
                    }
                }
            }
            if (sell==1) printf("Pursed ticket code info: ");
            else printf("Booked ticket code info: ");
            if(month<10)
            {
                if(date<10)
                    printf("%d0%d0%d%d%d\n",sell,date,month,time,route);
                else printf("%d%d0%d%d%d\n",sell,date,month,time,route);
            }
            else
            {
                if(date<10) printf("%d0%d%d%d%d\n",sell,date,month,time,route);
                else printf("%d%d%d%d%d\n",sell,date,month,time,route);
            }
            printf("Your sit number: %d\n",sit);
            break;
        }
        break;
        case 5:
        {
            printf("Travel Route schedule from Dhaka: \n");
            printf("1. Dhaka to Khulna. Ticket prize 550TK only.\n");
            printf("2. Dhaka to Jessor.Ticket prize 300TK only.\n");
            printf("3. Dhaka to Chittagong. Ticket prize 900TK only.\n");
            printf("4. Dhaka to Shylet. Ticket prize 700TK only.\n");
            printf("5. Dhaka to Rajshahi. Ticket prize 350TK only.\n");
            printf("\ntime schedule for every route:\n");
            printf("Morning:\n   1. 6:00am.\n   2. 9:00am.\n");
            printf("Afternoon:\n   3. 1:00pm.\n   4. 3:00pm.\n");
            printf("Night:\n   5. 7:00pm.\n   6. 9:00pm.\n");
            printf("thanks for showing Train time schedule.\n");
            printf("check a Train for yours travel: \n");
            printf("Enter Date: ");
            scanf("%d",&date);
            printf("Enter Month: ");
            scanf("%d",&month);
            printf("Enter Time No.: ");
            scanf("%d",&time);
            printf("Enter Route No.: ");
            scanf("%d",&route);
            if(date>31 || date< 1 ||month>12 ||month<1 || time>6 ||time<1 || route>5 || route<1) printf("Wrong input\n");
            else
            {
                for(sit=0; sit<100; sit++)
                {
                    if (train[date][month][time][route][sit]==1)
                    {
                        note[0]='s';
                        note[1]='o';
                        note[2]='l';
                        note[3]='d';
                        note[4]='\0';
                    }
                    else if (train[date][month][time][route][sit]==2)
                    {
                        note[0]='b';
                        note[1]='o';
                        note[2]='o';
                        note[3]='k';
                        note[4]='e';
                        note[5]='d';
                        note[6]='\0';
                    }
                    else
                    {
                        note[0]='f';
                        note[1]='o';
                        note[2]='r';
                        note[3]=' ';
                        note[4]='s';
                        note[5]='a';
                        note[6]='l';
                        note[7]='e';
                        note[8]='\0';
                    }
                    printf("%d no. sit status: %s.\n",sit+1,note);
                }
            }
            break;
        }
        case 6:
        {
            printf("Enter 7 digits Ticket code: ");
            scanf("%d",&tcode);
            printf("Sit number: ");
            scanf("%d",&sit);
            route=tcode%10;
            tcode/=10;
            time=tcode%10;
            tcode/=10;
            month=tcode%100;
            tcode/=100;
            date=tcode%100;
            sell=tcode/100;
            if(date>31 || date< 1 ||month>12 ||month<1 || time>6 ||time<1 || route>5 || route<1 || sit>100 || sit<1 || sell<1 || sell>2)
                printf("Wrong ticket code or sit number.\n");
            else
            {
                printf("Travel date : %d/%d/2017.\nTravel start in: ",date,month);
                if (time==1) printf("06:00am at morning\n");
                if (time==2) printf("09:00am at morning\n");
                if (time==3) printf("01:00pm at afternoon\n");
                if (time==4) printf("03:00pm at afternoon\n");
                if (time==5) printf("07:00pm at night\n");
                if (time==6) printf("09:00pm at night\n");
                if(route==1) printf("Rote: Dhaka to Khulna.\nTicket prize 550Tk\n");
                if(route==2) printf("Rote: Dhaka to Jessor.\nTicket prize 300Tk\n");
                if(route==3) printf("Rote: Dhaka to Chittagong.\nTicket prize 900Tk\n");
                if(route==4) printf("Rote: Dhaka to Shylet.\nTicket prize 700Tk\n");
                if(route==5) printf("Rote: Dhaka to Rajshahi.\nTicket prize 350Tk\n");
                if (train[date][month][time][route][sit]==1) printf("This ticket already pursed.\n");
                else if (train[date][month][time][route][sit]==2)
                {
                    printf("This ticket already booked.\n");
                    printf("Press 1 for buy it or press any key to skip.\n");
                    scanf("%d",&sale);
                    if(sale==1)
                    {
                        sell=sale;
                        train[date][month][time][route][sit]=sell;
                        printf("Buying successful !\n thank you\n");
                    }
                }
            }
            break;
        }
        case 7:
        {
            printf("In this project uses of switch\n");
            printf("1,4 switches for book/allot a ticket of Bus/Train.\n");
            printf("2,5 we switches for check schedule of bus/train.\n");
            printf("2,5 switches for check how many ticket are sold,\n");
            printf("2,5 switches for check  how many ticket for sale,\n");
            printf("2,5 switches for check how many ticket are booked.\n");
            printf("3,6 switches for buy a ticket that was booked before with ticket code,\n");
            printf("3,6 switches for check ticket status with ticket code,\n");
            printf("2,6 switches for check view fares of a ticket,\n");
            printf("7 switch for user manual help,\n");
            printf("8 switch for exit.\n");
            break;
        }
        case 8:
            printf("Thanks for visit\n");
            break;
        }
    }
    return 0;
}

