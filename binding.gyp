{
  "targets": [
    {
      "target_name": "pcd8544-rpi",
      "sources": [
        "src/PCD8544.cc" ],
      "include_dirs": [ "<!(node -e \"require('nan')\")" ],
      'libraries': [
        '-L/usr/local/lib', '-lwiringPi'
      ]
    }
  ]
}
