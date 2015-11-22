# $FreeBSD$

PORTNAME=	rudder-server
PORTVERSION=	3.1.4
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://www.rudder-project.org/archives/
DISTNAME=	rudder-sources-${PORTVERSION}.tar.bz2
WRKSRC=		${WRKDIR}/rudder-source-${PORTVERSION}

MAINTAINER=	franz@bett.ag
COMMENT=	Web-Interface for CFEngine management

LICENSE=	GPLv3

USE_RC_SUBR=	cf-execd cf-serverd cf-monitord

USE_OPENSSL=	yes
GNU_CONFIGURE=	yes
USES=		autoreconf cpe gmake libtool shebangfix
SHEBANG_FILES=	examples/remake_outputs.pl
CFLAGS+=	-Wno-return-type
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
# EXAMPLESDIR=	${PREFIX}/share/examples/cfengine3
DOCSDIR=	${PREFIX}/share/doc/cfengine
CONFIGURE_ARGS=	--docdir=${DOCSDIR} \
		--htmldir=${DOCSDIR}/html \
		--libexecdir=${PREFIX}/libexec \
		--libdir=${PREFIX}/libexec \
		--mandir=${PREFIX}/man \
		--with-workdir=/var/cfengine \
		--with-pcre=${LOCALBASE} \
		--with-lmdb=${LOCALBASE} \
		--enable-fhs
INSTALL_TARGET=	install-strip

LIB_DEPENDS+=	libpcre.so:${PORTSDIR}/devel/pcre \
		liblmdb.so:${PORTSDIR}/databases/lmdb

OPTIONS_DEFINE=	PGSQL MYSQL LIBVIRT

PGSQL_USES=		pgsql
PGSQL_CONFIGURE_ON=	--with-postgresql=${LOCALBASE}

MYSQL_USE=		MYSQL=yes
MYSQL_CONFIGURE_ON=	--with-mysql=${LOCALBASE}
MYSQL_LIB_DEPENDS=		libmysqlclient.so:${PORTSDIR}/${_MYSQL_CLIENT}
MYSQL_LDFLAGS=		-L${LOCALBASE}/lib/mysql

LIBVIRT_CONFIGURE_ON=	--with-libvirt=${LOCALBASE}
LIBVIRT_LIB_DEPENDS+=		libvirt.so:${PORTSDIR}/devel/libvirt

.include <bsd.port.mk>
