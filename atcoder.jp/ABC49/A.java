import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {

		char c = br.readLine().charAt(0);
		
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
			bw.write("vowel");
		} else {
			bw.write("consonant");
		}
			
		bw.close();
	} // end of main()
} // end of Main class