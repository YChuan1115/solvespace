#include "harness.h"

TEST_CASE(normal_roundtrip) {
    CHECK_LOAD("normal.slvs");
    CHECK_RENDER("normal.png");
    CHECK_SAVE("normal.slvs");
}

TEST_CASE(normal_migrate_from_v20) {
    CHECK_LOAD("normal_v20.slvs");
    CHECK_RENDER("normal.png");
    CHECK_SAVE("normal.slvs");
}

TEST_CASE(reference_roundtrip) {
    CHECK_LOAD("reference.slvs");
    CHECK_RENDER("reference.png");
    CHECK_SAVE("reference.slvs");
}

TEST_CASE(reference_migrate_from_v20) {
    CHECK_LOAD("reference_v20.slvs");
    CHECK_RENDER("reference.png");
    CHECK_SAVE("reference.slvs");
}
