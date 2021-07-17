
class Bank {
	
	Bank(String name) {

		System.out.println("Welcome to "+name);
	}

	class BankAccountHolder {
		
		String name = null;

		BankAccountHolder(String name) {

			this.name = name;
		}
		void name() {

			System.out.println("Name of AccountHolder is "+name);
		}
	}

	class Account {
		
		int AccountNo = 0;

		Account(int acc) {

			AccountNo = acc;
		}

		void accountDetail() {

			System.out.println("Account No. is "+AccountNo);
		}
	}
}

class Info {

	public static void main(String[] args) {

		Bank b = new Bank("Bank of Maharashtra");
		
		Bank.BankAccountHolder h = b.new BankAccountHolder("Rajat");
		h.name();

		Bank.Account a = b.new Account(1235698);
		a.accountDetail();
	}
}

