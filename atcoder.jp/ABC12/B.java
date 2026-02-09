import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		int S = Integer.valueOf(br.readLine());
		bw.write(String.format("%02d:%02d:%02d", S/3600, S/60%60, S%60));
		
		bw.close();
	} // end of main()
} // end of Main class