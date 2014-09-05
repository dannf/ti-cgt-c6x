# make install copies the files for the Texas Instruments C6000' Compiler Tools
# to the appropriate places.

ARCH = arm

MAKEFLAGS += --no-print-directory

CGT_BUILD_DIR = .

.PHONY: all build install clean distclean

build:

all:

install:
	install -m 755 -d ${DESTDIR}/usr/bin

	install -m 755 -d ${DESTDIR}/usr/share/ti/cgt-c6x/include
	install -m 755 -d ${DESTDIR}/usr/share/ti/cgt-c6x/lib
	install -m 755 -d ${DESTDIR}/usr/share/ti/cgt-c6x/prelink
	install -m 755 -d ${DESTDIR}/usr/share/doc/ti/cgt-c6x
	install -m 755 -d ${DESTDIR}/usr/share/man

	cp    ${CGT_BUILD_DIR}/bin/*             ${DESTDIR}/usr/bin
	cp    ${CGT_BUILD_DIR}/include/*         ${DESTDIR}/usr/share/ti/cgt-c6x/include

	cp    ${CGT_BUILD_DIR}/lib/libc.a        ${DESTDIR}/usr/share/ti/cgt-c6x/lib
	cp    ${CGT_BUILD_DIR}/lib/lnk.cmd       ${DESTDIR}/usr/share/ti/cgt-c6x/lib
	cp    ${CGT_BUILD_DIR}/lib/mklib*        ${DESTDIR}/usr/share/ti/cgt-c6x/lib
	cp    ${CGT_BUILD_DIR}/lib/rts*.lib      ${DESTDIR}/usr/share/ti/cgt-c6x/lib
	cp -r ${CGT_BUILD_DIR}/lib/src           ${DESTDIR}/usr/share/ti/cgt-c6x/lib

	cp -r ${CGT_BUILD_DIR}/man/*             ${DESTDIR}/usr/share/man
	cp -r ${CGT_BUILD_DIR}/doc/*             ${DESTDIR}/usr/share/doc/ti/cgt-c6x
	cp    ${CGT_BUILD_DIR}/*.txt             ${DESTDIR}/usr/share/doc/ti/cgt-c6x
	cp    ${CGT_BUILD_DIR}/C6000*Manifest.*  ${DESTDIR}/usr/share/doc/ti/cgt-c6x
	cp    ${CGT_BUILD_DIR}/*.spdx            ${DESTDIR}/usr/share/doc/ti/cgt-c6x

clean:

distclean: clean

