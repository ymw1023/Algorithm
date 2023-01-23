import java.util.Arrays;
import java.util.stream.IntStream;

class Solution {
    public int[] solution(int[] numbers) {
        IntStream.range(0, numbers.length).forEachOrdered(i -> numbers[i] *= 2);
        return numbers;
    }
}