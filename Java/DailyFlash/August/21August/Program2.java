
import java.io.*;

class Electricity {

	public static void main(String[] args) throws IOException {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br =new BufferedReader(isr);

		int unit;
		float unitCharge;

		System.out.print("Enter the number of unit: ");
		unit = Integer.parseInt(br.readLine());

		if(unit>0 && unit<=50)
			unitCharge=0.50f;
		else if(unit>51 && unit<=150)
			unitCharge=0.75f;
		else if(unit>151 && unit<=250)
			unitCharge=1.20f;
		else
			unitCharge=1.50f;

		System.out.println("Total electricity unit charges = "+unitCharge*unit);
	}
}

