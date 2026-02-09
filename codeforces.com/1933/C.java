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

		int t = Integer.valueOf(br.readLine());
		while(t-->0) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int a = Integer.valueOf(st.nextToken());
			int b = Integer.valueOf(st.nextToken());
			int l = Integer.valueOf(st.nextToken());

			int ax=1, by=1;
			HashSet<Integer> set = new HashSet<>();
			while(ax<=l) {
				while(ax*by<=l) {
					if(l%(ax*by)==0) {
						set.add(l/(ax*by));
					}
					by*=b;
				}
				ax*=a;
				by=1;
			}
			bw.write(set.size()+"\n");
		}

		bw.close();
	} // end of main()
} // end of Main class