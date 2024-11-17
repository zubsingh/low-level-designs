#include <memory>

int main() {

    auto location1 = std::make_shared<Location>("Wee Parking Centre");

    auto floor1 = location1->addFloor();
    auto floor2 = location1->addFloor();
    auto floor3 = location1->addFloor();

    floor1->addSlot();
    floor2->addSlot();
    floor3->addSlot();

    auto usr1 = std::make_shared<User>("Amit");

    return 0;
}
