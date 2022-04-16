#define PERIOD 10
#define PRINCIPAL 5000.0
#define week {"jan","fab","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"}
main()
{
    int year,l;
    float amount, value, inrate;
    char *wek[100]=week;
    amount=PRINCIPAL;
    inrate=0.11;
    year=0;
    l=0;
    for(year=0;year<=PERIOD; year++){

        l++;
        printf("%d %s %8.2f\n",year,wek[year],amount);
        value=amount+inrate*amount;



        amount= value;
    }
}
