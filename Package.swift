// swift-tools-version:5.4
import PackageDescription

let package = Package(
    name: "Kottage",
    products: [
        .library(
            name: "Kottage",
            targets: ["Kottage"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "Kottage",
            path: "Kottage.xcframework")
    ]
)
