import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int A = Integer.valueOf(st.nextToken());
		String op = st.nextToken();
		int B = Integer.valueOf(st.nextToken());
		
		if(op.equals("+")) {
			bw.write(Integer.toString(A+B));
		} else {
			bw.write(Integer.toString(A-B));
		}
		
		bw.close();
	} // end of main()
} // end of Main class