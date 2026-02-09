import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		int N = Integer.valueOf(br.readLine());
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		HashSet<String> set = new HashSet<>();
		set.add(st.nextToken());
		set.add(st.nextToken());
		
		int K = Integer.valueOf(br.readLine());
		st = new StringTokenizer(br.readLine());
		
		boolean check=true;
		while(K-->0) {
			if(!set.add(st.nextToken())) {
				check=false;
				break;
			}
		}
		bw.write(check?"YES\n":"NO\n");
		
		bw.close();
	} // end of main()
} // end of Main class