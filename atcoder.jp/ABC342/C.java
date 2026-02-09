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
		String string = br.readLine();
		
		int[] replace = new int[26];
		for(int i=0;i<26;i++) {
			replace[i]=i;
		}
		
		int Q = Integer.valueOf(br.readLine());
		while(Q-->0) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int a = st.nextToken().charAt(0)-'a';
			int b = st.nextToken().charAt(0)-'a';
			
			if(replace[a]!=b) {
				for(int i=0;i<26;i++) {
					if(replace[i]==a) {
						replace[i]=b;
					}
				}
			}
		}
		
		for(int i=0;i<N;i++) {
			bw.write(replace[string.charAt(i)-'a']+'a');
		}
		
		bw.close();
	} // end of main()
} // end of Main class