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
		int m = Integer.valueOf(st.nextToken());
		
		boolean blackWhite=true;
		for(int i=0;i<n;i++) {
			String string = br.readLine();
			for(int j=0;j<m*2;j+=2) {
				if(string.charAt(j)=='Y'||string.charAt(j)=='C'||string.charAt(j)=='M') {
					blackWhite=false;
					i=n;
					break;
				}
			}
		}
		
		if(blackWhite) {
			bw.write("#Black&White");
		} else {
			bw.write("#Color");
		}
		
		bw.close();
	} // end of main()
} // end of Main class