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
		
		int idx1 = string.indexOf('|');
		int idx2 = string.lastIndexOf('|');
		
		bw.write(string.substring(0, idx1)+string.substring(idx2+1));
		
		bw.close();
	} // end of main()
} // end of Main class