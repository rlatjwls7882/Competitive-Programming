import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		char[] S = br.readLine().toCharArray();
		if(S[0]==S[1]&&S[1]==S[2]||S[1]==S[2]&&S[2]==S[3]) {
			bw.write("Yes");
		} else {
			bw.write("No");
		}
		
		bw.close();
	} // end of main()
} // end of Main class