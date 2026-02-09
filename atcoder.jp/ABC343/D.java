import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.valueOf(st.nextToken());
		int T = Integer.valueOf(st.nextToken());
		
		HashMap<Long, Integer> map = new HashMap<>();
		map.put(0L, N);
		long[] score = new long[N];
		
		while(T-->0) {
			st = new StringTokenizer(br.readLine());
			int A = Integer.valueOf(st.nextToken())-1;
			long B = Long.valueOf(st.nextToken());
			
			int cnt = map.get(score[A]);
			if(cnt==1) {
				map.remove(score[A]);
			} else {
				map.put(score[A], cnt-1);
			}
			score[A]+=B;
			map.put(score[A], map.getOrDefault(score[A], 0)+1);
			
			bw.write(map.size()+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class