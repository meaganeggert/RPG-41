    void add_health(shared_ptr<Actor> a) {
        int currentHealth = a->get_health();
        int boost = 1;
        int new_health = currentHealth + boost;
        a->set_health(new_health);
    }
    void add_power(shared_ptr<Actor> a) {
        int currentPower = a->get_power();
        int boost = 1;
        int new_power = currentPower + boost;
        a->set_power(new_power);
    }
    void add_speed(shared_ptr<Actor> a) {
        int currentSpeed = a->get_speed();
        int boost = 1;
        int new_power = currentSpeed + boost;
        a->set_speed(new_speed);
    }
    void pick_up_treasure() {
        int whichTreasure = 1 + (rand() % 3);
        if (whichTreasure == 1) { //Health Potion
            for (const auto &actor : vec) { 
                add_health(actor);
            }
        } else if (whichTreasure == 2) { //Power Up Potion
            for (const auto &actor : vec) {
                add_power(actor);
            }
        } else {
            for (const auto &actor : vec) {
                add_speed(actor);
            }
        }
    }