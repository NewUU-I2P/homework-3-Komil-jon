float problemSolution1(float consumed_water) {
    float fixed_amount = 13.0f;
    float cost = fixed_amount;

    if (consumed_water > 30.0f) {
        cost += 30.0f * 0.4f;
        consumed_water -= 30.0f;
    } else {
        cost += consumed_water * 0.4f;
        return cost;
    }

    if (consumed_water > 20.0f) {
        cost += 20.0f * 0.12f;
        consumed_water -= 20.0f;
    } else {
        cost += consumed_water * 0.12f;
        return cost;
    }

    if (consumed_water > 10.0f) {
        cost += 10.0f * 1.4f;
        consumed_water -= 10.0f;
    } else {
        cost += consumed_water * 1.4f;
        return cost;
    }

    cost += consumed_water * 1.5f;

    return cost;
}
