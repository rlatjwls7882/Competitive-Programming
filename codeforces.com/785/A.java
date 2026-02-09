import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {

		int N = Integer.valueOf(br.readLine());
		
		int cnt=0;
		while(N-->0) {
			String string = br.readLine();
			if(string.charAt(0)=='T') {
				cnt+=4;
			} else if(string.charAt(0)=='C') {
				cnt+=6;
			} else if(string.charAt(0)=='O') {
				cnt+=8;
			} else if(string.charAt(0)=='D') {
				cnt+=12;
			} else {
				cnt+=20;
			}
		}
		bw.write(Integer.toString(cnt));
		
		bw.close();
	} // end of main()
} // end of Main class