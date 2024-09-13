#include <iostream>
#include <chrono>
#include <Eigen/Geometry>

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    // Load and do the intersection
    Eigen::AlignedBox3f A(Eigen::Vector3f(0.0f,0.0f,0.0f), Eigen::Vector3f(1.0f,1.0f,1.0f));
    Eigen::AlignedBox3f B(Eigen::Vector3f(0.0f,0.0f,0.0f), Eigen::Vector3f(1.5f,1.5f,1.5f));
    bool hit = A.intersects(B);
    auto end = std::chrono::high_resolution_clock::now();
    if(hit) {
        std::cout << "HIT" << std::endl;
    }

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "Elapsed time: " << elapsed_seconds.count() << " seconds\n";
    return 0;
}