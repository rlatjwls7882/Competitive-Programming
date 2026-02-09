import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;
import java.util.TreeMap;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int t = Integer.valueOf(br.readLine());
		
		while(t-->0) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int n = Integer.valueOf(st.nextToken());
			long k = Long.valueOf(st.nextToken());
			
			st = new StringTokenizer(br.readLine());
			StringTokenizer st2 = new StringTokenizer(br.readLine());
			TreeMap<Long, Long> monster = new TreeMap<>();
			
			while(n-->0) {
				long pos = Math.abs(Long.valueOf(st2.nextToken()));
				long health = Long.valueOf(st.nextToken());
				monster.put(pos, monster.getOrDefault(pos, 0L)+health);
			}
			
			boolean chk=true;
			long healthSum=0;
			for(long pos:monster.keySet()) {
				healthSum += monster.get(pos);
				if(k*pos<healthSum) {
					chk=false;
					break;
				}
			}
			
			if(chk) {
				bw.write("YES\n");
			} else {
				bw.write("NO\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class