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
	static HashSet<Integer> dislike = new HashSet<>();
	
	public static void main(String[] args) throws IOException {
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.valueOf(st.nextToken());
		int K = Integer.valueOf(st.nextToken());
		
		st = new StringTokenizer(br.readLine());
		for(int i=0;i<K;i++) {
			dislike.add(Integer.valueOf(st.nextToken()));
		}
		
		for(int i=N;;i++) {
			if(chk(i)) {
				bw.write(Integer.toString(i));
				break;
			}
		}
		
		bw.close();
	} // end of main()
	
	static boolean chk(int N) {
		do {
			if(dislike.contains(N%10)) {
				return false;
			}
			N/=10;
		} while (N!=0);
		
		return true;
	} // end of chk()
} // end of Main class