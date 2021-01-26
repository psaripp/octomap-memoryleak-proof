# include <octomap/octomap.h>

int main() {

    octomap::OcTree tree(1);

    tree.updateNode(octomap::point3d{0.5, 0.5, 0.5}, true, true);
    tree.updateNode(octomap::point3d{1.5, 1.5, 0.5}, true, true);
    tree.updateNode(octomap::point3d{2.5, 1.5, 0.5}, true, true);
    tree.updateNode(octomap::point3d{1.5, 0.5, 0.5}, true, true);

    tree.updateInnerOccupancy();

    tree.deleteNode(octomap::point3d{1.5, 1.5, 0.5});
    tree.deleteNode(octomap::point3d{2.5, 1.5, 0.5});

    return 0;
}
