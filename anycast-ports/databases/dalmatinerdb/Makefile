# $FreeBSD$

PORTNAME=	dalmatinerdb
PORTVERSION=	0.1.6
CATEGORIES=	databases

MAINTAINER=	franz@bett.ag
COMMENT=	Dalmatiner metrics databases

LICENSE=	MIT

BUILD_DEPENDS=	erl:${PORTSDIR}/lang/erlang \
		git:${PORTSDIR}/devel/git \
		g++:${PORTSDIR}/lang/gcc
RUN_DEPENDS=	erl:${PORTSDIR}/lang/erlang

USES=		gmake
MAKE_ARGS=	all rel

USE_GITHUB=	yes
GH_ACCOUNT=	dalmatinerdb
GH_PROJECT=	dalmatinerdb

pre-configure:
	mkdir -p ${WRKSRC}/.git

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/rel/${PORTNAME} ${STAGEDIR}${PREFIX}

.include <bsd.port.mk>
