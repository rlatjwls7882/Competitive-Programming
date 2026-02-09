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
		
		int N = Integer.valueOf(br.readLine());
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int cnt=0;
		while(N-->0) {
			int leaves = Integer.valueOf(st.nextToken());
			
			while(leaves%3==2||leaves%2==0) {
				leaves--;
				cnt++;
			}
		}
		bw.write(cnt+"\n");
		
		bw.close();
	} // end of main()
} // end of Main class