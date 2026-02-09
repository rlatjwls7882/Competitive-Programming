import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int X = Integer.valueOf(br.readLine());
		int A = Integer.valueOf(br.readLine());
		int B = Integer.valueOf(br.readLine());
		
		bw.write((X-A)%B+"");
		
		bw.close();
	} // end of main()
} // end of Main class