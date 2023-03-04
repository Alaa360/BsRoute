#pragma once
class IDGenerator {
private:
    int currentID;

public:
    IDGenerator(int startingID) : currentID(startingID - 1) {}

    int getNextID() {
        currentID++;
        return currentID;
    }
};
