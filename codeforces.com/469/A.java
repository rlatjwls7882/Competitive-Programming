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
		
		int n = Integer.valueOf(br.readLine());
		
		boolean[] num = new boolean[n];
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int p = Integer.valueOf(st.nextToken());
		while(p-->0) {
			num[Integer.valueOf(st.nextToken())-1]=true;
		}
		
		st = new StringTokenizer(br.readLine());
		p = Integer.valueOf(st.nextToken());
		while(p-->0) {
			num[Integer.valueOf(st.nextToken())-1]=true;
		}
		
		boolean chk=true;
		for(int i=0;i<n;i++) {
			if(!num[i]) {
				chk=false;
				break;
			}
		}
		bw.write(chk?"I become the guy.":"Oh, my keyboard!");
		
		bw.close();
	} // end of main()
} // end of Main class