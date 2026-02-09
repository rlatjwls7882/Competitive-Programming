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
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		HashSet<Integer> set = new HashSet<>();
		int cnt=0;
		for(int i=0;i<4;i++) {
			if(set.add(Integer.valueOf(st.nextToken()))) {
				cnt++;
			}
		}
		bw.write(Integer.toString(4-cnt));
		
		bw.close();
	} // end of main()
} // end of Main class