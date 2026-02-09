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
		
		HashSet<String> set = new HashSet<String>();
		StringTokenizer st = new StringTokenizer(br.readLine());
		for(int i=0;i<3;i++) {
			set.add(st.nextToken());
		}
		bw.write(Integer.toString(set.size()));
		
		bw.close();
	} // end of main()
} // end of Main class