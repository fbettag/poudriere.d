--- modules/proto_tls/proto_tls.c.orig	2015-11-18 14:29:25.491217000 +0100
+++ modules/proto_tls/proto_tls.c	2015-11-18 14:29:41.299403000 +0100
@@ -31,6 +31,7 @@
 
 #include <netinet/in_systm.h>
 #include <netinet/tcp.h>
+#include <netinet/in.h>
 #include <netinet/ip.h>
 #include <unistd.h>
 
