import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		int[] num = new int[4];
		for(int i=0;i<4;i++) {
			num[i] = Integer.valueOf(st.nextToken());
		}
		Arrays.sort(num);
		bw.write((num[3]-num[0])+" "+(num[3]-num[1])+" "+(num[3]-num[2]));
		
		bw.close();
	} // end of main()
} // end of Main class