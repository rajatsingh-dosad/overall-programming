
/*	Program 21: Write a program using ternary operator to check the behaviour of char in
java using System.out.println(). Follow the outline.
1. boolean bVar: true
2. boolean bVar1: false
3. char cVar: ‘S’
4. int iVar: 0
Write 2 SOPs using the ternary operator to check if both the Boolean values are true.
If yes: iVar
Else: cVar

*/

class TernaryWithChar {

	public static void main(String[] args) {

		boolean bVar = true;
		boolean bVar1 = false;
		char cVar = 'S';
		int iVar = 0;

		System.out.println(bVar==true ? iVar : cVar);
		System.out.println(bVar1==true ? iVar : cVar);
	}
}
