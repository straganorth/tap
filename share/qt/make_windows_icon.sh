#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/tappingcoin.ico

convert ../../src/qt/res/icons/tappingcoin-16.png ../../src/qt/res/icons/tappingcoin-32.png ../../src/qt/res/icons/tappingcoin-48.png ${ICON_DST}
