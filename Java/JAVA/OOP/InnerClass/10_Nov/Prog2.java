
class PlayBooks {

	static class Books {

		void orderBooks() {

			System.out.println("Order Books from Anywhere");
		}
	}
}

class OrderBooks {

	public static void main(String[] args) {

		PlayBooks.Books b = new PlayBooks.Books();
		b.orderBooks();
	}	
}
