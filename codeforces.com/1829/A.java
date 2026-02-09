import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		String codeforces = "codeforces";
		
		int t = Integer.valueOf(br.readLine());
		while(t-->0) {
			String string = br.readLine();
			
			int cnt=0;
			for(int i=0;i<10;i++) {
				if(string.charAt(i)!=codeforces.charAt(i)) {
					cnt++;
				}
			}
			bw.write(cnt+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class