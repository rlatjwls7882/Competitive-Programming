import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashMap;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		HashMap<String, Integer> map = new HashMap<>();
		map.put("tourist", 3858);
		map.put("ksun48", 3679);
		map.put("Benq", 3658);
		map.put("Um_nik", 3648);
		map.put("apiad", 3638);
		map.put("Stonefeang", 3630);
		map.put("ecnerwala", 3613);
		map.put("mnbvmar", 3555);
		map.put("newbiedmy", 3516);
		map.put("semiexp", 3481);
		
		bw.write(map.get(br.readLine())+"");
		
		bw.close();
	} // end of main()
} // end of Main class