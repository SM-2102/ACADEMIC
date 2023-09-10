class Bank_account
{
	String account_name;
	long account_number;
	char account_type;
	double balance;
	char overdraft_facility;
	Bank_account(String a, long b, char c, double d, char e)
	{
		account_name=a;
		account_number=b;
		account_type=c;
		balance=d;
		overdraft_facility=e;
	}
	void check_balance()
	{
		System.out.println("Balance of "+account_type+" account : "+balance);
	}
	void withdraw_money(double d)
	{
		if ((balance-d)<1000 && account_type=='S')
			System.out.println("Savings account must have a minimum of Rs.1000");
		else if (balance<d)
			System.out.println("Insufficient funds.");
		else
			balance = balance - d;
		check_balance();
	}
	void deposit_money(double d)
	{
		balance = balance + d;
		check_balance();
	}
}

class Bank
{
	public static void main(String args[])
	{
		Bank_account savings = new Bank_account("Sukanya Manna", 123456789, 'S', 1000.0, 'N');
		Bank_account current = new Bank_account("Sukanya Manna", 987654321, 'C', 0.0, 'Y');
		System.out.println("Account Details :");
		/*System.out.println("\nAccount Name : "+savings.account_name+"\nAccount Number : "+savings.account_number+"\nAccount Type : "+savings.account_type+"\nOverdraft Facility : "+savings.overdraft_facility+"\nBalance : "+savings.balance);
		System.out.println("\nAccount Name : "+current.account_name+"\nAccount Number : "+current.account_number+"\nAccount Type : "+current.account_type+"\nOverdraft Facility : "+current.overdraft_facility+"\nBalance : "+current.balance+"\n");*/
		System.out.println("Depositing Rs.200 in current account.");
		current.deposit_money(200.0);
		System.out.println("Withdrawing Rs.1000 from current account.");
		current.withdraw_money(1000.0);
		System.out.println("Withdrawing Rs.100 from current account.");
		current.withdraw_money(100.0);
		System.out.println("Withdrawing Rs.10 from savings account.");
		savings.withdraw_money(10.0);
	}
}
		
		