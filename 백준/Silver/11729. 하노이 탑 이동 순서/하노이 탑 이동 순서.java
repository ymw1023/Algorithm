import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BufferedWriter bf = new BufferedWriter(new OutputStreamWriter(System.out));
        try {
//            bf.write((int)Math.pow(2, n) - 1);
            System.out.println((int)Math.pow(2, n) - 1);
//            bf.write('\n');
            bf.flush();
            hanoi(1, 3, n, bf);
            bf.flush();
            bf.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }



    public static void hanoi(int start, int end, int num, BufferedWriter bf) {
        //시작과 끝 값이 호출마다 바뀜, 따라서 middle 값도 바뀌게
        int middle = 6 - start - end;
        try {
            if(num == 1) {  //재귀의 끝나는 지점
                bf.write(start + " " + end + "\n");
                return;
            }   //1 -> 3을 갈려면 맨밑블록만 냅두고 다른거는 중간(2)으로 옮겨야됨
            hanoi(start, middle, num - 1, bf);

            //여기까지 했다면 대충 첫번째 칸에는 아무것도 없고 2번째칸에 제일 큰블럭이 빠진 칸이 있으며
            //3번째 칸에 제일 큰 블럭이 있음 - 재귀라 조금 다르긴 한데 이미지로 생각하면

            bf.write(start + " " + end + "\n");

            hanoi(middle, end, num - 1, bf);
        } catch (Exception e) {
            e.printStackTrace();
        }

    }
}
