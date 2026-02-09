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
		int l1 = Integer.valueOf(st.nextToken());
		int l2 = Integer.valueOf(st.nextToken());
		int l3 = Integer.valueOf(st.nextToken());
		
		if(l1==l2) {
			bw.write(l3+"\n");
		} else if(l1==l3) {
			bw.write(l2+"\n");
		} else {
			bw.write(l1+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class