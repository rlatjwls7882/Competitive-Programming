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
		
		if(string.charAt(0)<='Z') {
			bw.write(string);
		} else {
			bw.write(string.charAt(0)-32);
			bw.write(string.substring(1));
		}
		
		bw.close();
	} // end of main()
} // end of Main class