# $FreeBSD: head/print/texlive-full/Makefile 362818 2014-07-24 16:10:03Z bapt $

PORTNAME=	texlive2012
DISTVERSION=	20120701
CATEGORIES=	print
MASTER_SITES=	#empty
PKGNAMESUFFIX=	-full
DISTFILES=	#empty
EXTRACT_ONLY=	#empty

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	TeX Live, Full Version

USE_TEX=	texlive2012 full2012 texhash
NO_BUILD=	yes
NO_INSTALL=	yes
NO_MTREE=	yes

OPTIONS_DEFINE=	DOCS
OPTIONS_DEFAULT=DOCS

DOCS_USE=	TEX=docs

.include <bsd.port.mk>
