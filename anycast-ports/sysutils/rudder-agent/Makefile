# $FreeBSD$

PORTNAME=	rudder-agent
PORTVERSION=	3.1.4
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://www.rudder-project.org/archives/
DISTNAME=	rudder-sources-${PORTVERSION}
WRKSRC=		${WRKDIR}/rudder-sources-${PORTVERSION}

MAINTAINER=	franz@bett.ag
COMMENT=	Agent for Rudder Configuration Management

LICENSE=	GPLv3

USE_RC_SUBR=	rudder_agent

RUN_DEPENDS=	${LOCALBASE}/sbin/cf-agent:${PORTSDIR}/sysutils/cfengine37 \
		${LOCALBASE}/bin/fusioninventory-agent:${PORTSDIR}/net-mgmt/p5-FusionInventory-Agent
USES=		tar:bz2

.include <bsd.port.mk>
