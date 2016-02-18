{
  "targets": [
    {
      "target_name": "pcd8544-rpi",
      "sources": [
        "src/pcd8544_rpi.cpp",
        "src/PCD8544.c" ],
      "include_dirs": [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}
