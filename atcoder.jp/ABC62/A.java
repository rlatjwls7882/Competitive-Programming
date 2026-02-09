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
		
		int[] group = {0, 1, 0, 2, 0, 2, 0, 0, 2, 0, 2, 0};
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int x = Integer.valueOf(st.nextToken())-1;
		int y = Integer.valueOf(st.nextToken())-1;
		
		if(group[x]==group[y]) {
			bw.write("Yes");
		} else {
			bw.write("No");
		}

		bw.close();
	} // end of main()
} // end of Main class