import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		String string = br.readLine();
		
		int upper=0;
		for(int i=0;i<string.length();i++) {
			if(string.charAt(i)<='Z') {
				upper++;
			}
		}
		
		if(upper>string.length()-upper) {
			bw.write(string.toUpperCase());
		} else {
			bw.write(string.toLowerCase());
		}
		
		bw.close();
	} // end of main()
} // end of Main class