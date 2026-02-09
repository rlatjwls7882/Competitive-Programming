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
		
		int t = Integer.valueOf(br.readLine());
		
		while(t-->0) {
			int n = Integer.valueOf(br.readLine());
			
			StringTokenizer st = new StringTokenizer(br.readLine());
			String first = st.nextToken();
			String second = st.nextToken();
			
			if(first.equals(second)) {
				for(int i=3;;i++) {
					if(!first.equals(st.nextToken())) {
						bw.write(i+"\n");
						break;
					}
				}
			} else if(first.equals(st.nextToken())) {
				bw.write("2\n");
			} else {
				bw.write("1\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class