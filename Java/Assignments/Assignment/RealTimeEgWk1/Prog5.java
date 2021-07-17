
/*
	Program 5. Write a class called text editor and write a parametrised constructor for
	it.
	class TextEditor(String textEditorName, String creator). Make 3 objects called atom,
	sublime and vim
	and store the editor name, creator name using parametrised constructor in a class
	called PunchingCard.
	And access those names.
*/

class TextEditor {

	TextEditor(String textEditorName, String Creator) {

		System.out.println("Name of the editor is: "+textEditorName);
		System.out.println("Name of creator is: "+Creator+"\n");
	}
}

class PunchingCard {

	public static void main(String[] args) {

		TextEditor atom = new TextEditor("Atom","Github");
		TextEditor sublime = new TextEditor("Sublime","Jon Skinner");
		TextEditor vim = new TextEditor("Vim","Bram Moolenaar");
	}
}
