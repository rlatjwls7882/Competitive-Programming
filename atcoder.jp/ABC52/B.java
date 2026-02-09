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
		String S = br.readLine();
		
		int val=0, max=0;
		for(int i=0;i<N;i++) {
			if(S.charAt(i)=='I') {
				val++;
				max = Math.max(max, val);
			} else {
				val--;
			}
		}
		bw.write(Integer.toString(max));
		
		bw.close();
	} // end of main()
} // end of Main class