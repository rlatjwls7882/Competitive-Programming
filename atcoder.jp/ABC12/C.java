import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		int N = 2025 - Integer.valueOf(br.readLine());
		
		for(int i=1;i<=9;i++) {
			if(N%i==0&&N/i<=9) {
				bw.write(i+" x "+(N/i)+"\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class