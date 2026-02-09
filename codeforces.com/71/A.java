import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		int n = Integer.valueOf(br.readLine());
		
		while(n-->0) {
			String string = br.readLine();
			if(string.length()<=10) {
				bw.write(string);
			} else {
				bw.write(string.charAt(0));
				bw.write(Integer.toString(string.length()-2));
				bw.write(string.charAt(string.length()-1));
			}
			bw.newLine();
		}
		
		bw.close();
	} // end of main()
} // end of Main class