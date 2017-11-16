#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/sodacoin.ico

convert ../../src/qt/res/icons/sodacoin-16.png ../../src/qt/res/icons/sodacoin-32.png ../../src/qt/res/icons/sodacoin-48.png ${ICON_DST}
