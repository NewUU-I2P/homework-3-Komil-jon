float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    (i > j and i > k) ? result = i : (k > i and k > j) ? result = k : result = j ;
    return result;
}