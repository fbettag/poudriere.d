# $FreeBSD$

PORTNAME=ponyc
PORTVERSION=0.2.1
CATEGORIES=lang
MASTER_SITES=https://github.com/CausalityLtd/ponyc/archive/
DISTNAME=${PORTVERSION}

MAINTAINER=franz@bett.ag
COMMENT=Pony language compiler

LICENSE=        BSD2CLAUSE

LIB_DEPENDS=	libunwind.so:${PORTSDIR}/devel/libunwind
BUILD_DEPENDS=	llvm-link36:${PORTSDIR}/devel/llvm36
RUN_DEPENDS=	llvm-link36:${PORTSDIR}/devel/llvm36

USES=		gmake
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
PLIST_FILES=	bin/ponyc
ALL_TARGET=	config=release

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/build/release/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>