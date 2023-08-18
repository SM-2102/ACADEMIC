class Account
{
    long account_number;
    double account_balance;
    Account(long a, double b)
	{
		account_number=a;
        account_balance=b;
	}
    void withdraw_money(double d)
	{
		if (account_balance<d)
			System.out.println("Insufficient funds.");
		else
			account_balance-= d;
	}
	void deposit_money(double d)
	{
		account_balance+= d;
	}
    void display_balance()
	{
		System.out.println("Balance of "+account_number+" : "+account_balance);
	}
}

class Savings extends Account
{
    double interest;
    Savings(long a, double b,double i)
    {
        super(a,b);
        interest=i;
    }
    void withdraw_money(double d)
	{
		if ((account_balance-d)<1000)
			System.out.println("Savings account must have a minimum of Rs.1000");
        else
            super.withdraw_money(d);
    }
    void calc_interest()
    {
        double amt = (interest*account_balance);
        account_balance +=amt;
    }
}

class Current extends Account
{
    boolean overdraft_facility;
    double overdraft_limit;
    double overdraft=0.0;
    Current(long a, double b,double l)
    {
        super(a,b);
        overdraft_facility=true;
        overdraft_limit=l;
    }
    void withdraw_money(double d)
    {
        if (d>overdraft_limit+account_balance)
            System.out.println("No withdrawal allowed.");
        else
        {
            if(d<=account_balance)
                super.withdraw_money(d);
            else
            {
                if (d<=overdraft_limit)
                    overdraft+=d;
                else
                {
                    overdraft=overdraft_limit;
                    double amt = d-overdraft_limit;
                    super.withdraw_money(amt);
                }
                System.out.println("Overdraft facility used amount : "+overdraft);
            }
        }
    }
    void deposit_money(double d)
    {
        if(overdraft==0)
            super.deposit_money(d);
        else
        {
            if(d>overdraft)
            {
                super.deposit_money(d-overdraft);
                overdraft=0.0;
            }
            else
                overdraft-=d;
        }
    }
}

class Bank
{
	public static void main(String args[])
	{
		Savings os = new Savings(123456789,1000.0,0.05);
        Current oc = new Current(987654321,5000.0,10000.0);
        System.out.println("Withdrawing Rs.500 from Savings.");
        os.withdraw_money(500.0);
        os.display_balance();
        System.out.println("After calculation of interest in Savings");
        os.calc_interest();
        os.display_balance();
        System.out.println("Does current account have overdraft facility ? "+oc.overdraft_facility);
        System.out.println("Withdrawing Rs.14000 from Current.");
        oc.withdraw_money(14000.0);
        oc.display_balance();
        System.out.println("Depositing Rs.9000 in Current.");
        oc.deposit_money(9000);
        oc.display_balance();
        System.out.println("Withdrawing Rs.7000 from Current.");
        oc.withdraw_money(7000.0);
        oc.display_balance();
    }
}
