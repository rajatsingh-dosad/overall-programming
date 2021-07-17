
class Login {

	String username = "Rajat";
	String password = "123456789";

	Login(String username , String password) {

		if(this.username.equals(username) && this.password.equals(password))
			System.out.println("Login Successful");
		else
			System.out.println("Invalid User");
	}
}

class CheckLogin {

	public static void main(String[] args) {

		Login l = new Login("Rajat","123456789");
	}
}



