import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		String S = br.readLine();
		
		if(S.charAt(S.length()-1)=='T') {
			bw.write("YES\n");
		} else {
			bw.write("NO\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class