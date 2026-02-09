import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		int a = Integer.valueOf(br.readLine());
		int b = Integer.valueOf(br.readLine());
		
		bw.write(Math.min(Math.min(Math.abs(a-b), 9-a+b+1), 9-b+a+1)+"\n");
		
		bw.close();
	} // end of main()
} // end of Main class