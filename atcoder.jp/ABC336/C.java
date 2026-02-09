import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		long N = Long.valueOf(br.readLine());
		
		StringBuilder sb = new StringBuilder();
		for(int i=0;N!=0;i++) {
			if(i==0&&N%5==0) {
				sb.append(8);
				N--;
			} else if(i==0) {
				sb.append((N%5-1)*2);
			} else {
				sb.append(N%5*2);
			}
			N/=5;
		}
		bw.write(sb.reverse().toString());
		
		bw.close();
	} // end of main()
} // end of Main class