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
		int n = Integer.valueOf(st.nextToken());
		int t = Integer.valueOf(st.nextToken());
		
		char[] students = br.readLine().toCharArray();
		while(t-->0) {
			for(int i=0;i<n-1;i++) {
				if(students[i]=='B'&&students[i+1]=='G') {
					students[i]='G';
					students[i+1]='B';
					i++;
				}
			}
		}
		
		for(int i=0;i<n;i++) {
			bw.write(students[i]);
		}
		
		bw.close();
	} // end of main()
} // end of Main class