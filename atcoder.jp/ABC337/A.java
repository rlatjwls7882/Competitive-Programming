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
		
		int X=0, Y=0;
		while(N-->0) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			X += Integer.valueOf(st.nextToken());
			Y += Integer.valueOf(st.nextToken());
		}
		
		if(X>Y) {
			bw.write("Takahashi");
		} else if(X<Y) {
			bw.write("Aoki");
		} else {
			bw.write("Draw");
		}
		
		bw.close();
	} // end of main()
} // end of Main class