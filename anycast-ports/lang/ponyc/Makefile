# $FreeBSD$

PORTNAME=	ponyc
PORTVERSION=	0.2.1
CATEGORIES=	lang

MAINTAINER=	franz@bett.ag
COMMENT=	Pony language compiler

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libunwind.so:${PORTSDIR}/devel/libunwind
BUILD_DEPENDS=	llvm-link36:${PORTSDIR}/devel/llvm36
RUN_DEPENDS=	llvm-link36:${PORTSDIR}/devel/llvm36

USES=		gmake
PLIST_FILES=	bin/ponyc
MAKE_ARGS=	config=release

USE_GITHUB=	yes
GH_ACCOUNT=	CausalityLtd
GH_PROJECT=	ponyc

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/build/release/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.pre.mk>

.if ${ARCH} != "amd64"
BROKEN=currently requires amd64. i386 and ARM already in HEAD, soon to be in a release
.endif

.if ${OSVERSION} < 1000000
IGNORE=currently requires FreeBSD 10.0 or newer
.endif

.include <bsd.port.post.mk>
