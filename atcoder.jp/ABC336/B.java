import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		String bin = Integer.toString(Integer.valueOf(br.readLine()), 2);
		
		int cnt=0;
		for(int i=bin.length()-1;i>=0;i--) {
			if(bin.charAt(i)=='0') {
				cnt++;
			} else {
				break;
			}
		}
		bw.write(Integer.toString(cnt));
		
		bw.close();
	} // end of main()
} // end of Main class