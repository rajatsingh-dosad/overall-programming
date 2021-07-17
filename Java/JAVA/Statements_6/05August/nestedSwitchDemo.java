

class NestedSwitchDemo {

	public static void main(String[] args) {

		int floor = 2;

		switch(floor) {

			case 1:	{
					char ch = 'S';		//s for shopping, f for food
					System.out.println("First Floor");
					switch(ch) {

						case 's':
						case 'S':
							System.out.println("Shopping");
							break;
						case 'f':
						case 'F':
							System.out.println("Food");
							break;
						default:
							System.out.println("Service not available");
							break;
					}
			}
			break;

			case 2:	 {	char ch = 'M';
					System.out.println("Second Floor");
					switch(ch) {

						case 'M':	//M for movie ,p for playstation
						case 'm':
							System.out.println("Dil Bechara : Movie");
							break;
						case 'p':
						case 'P':
							System.out.println("Cricket");
							break;
						default:
							System.out.println("Service not available");
							break;
					}
			}
			
			break;

			default :
				System.out.println("Wrong Floor");
				break;
		}
}
}
