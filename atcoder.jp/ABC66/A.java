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
		int sum=0, max=0;
		for(int i=0;i<3;i++) {
			int tmp = Integer.valueOf(st.nextToken());
			sum += tmp;
			max = Math.max(max, tmp);
		}
		bw.write(Integer.toString(sum-max));
		
		bw.close();
	} // end of main()
} // end of Main class