--- module-dvbapi.c.orig	2015-12-24 10:32:46.709194000 +0100
+++ module-dvbapi.c	2015-12-24 10:32:50.324786000 +0100
@@ -3,7 +3,6 @@
 #include "globals.h"
 
 #ifdef HAVE_DVBAPI
-
 #include "module-dvbapi.h"
 #include "module-cacheex.h"
 #include "module-dvbapi-azbox.h"
@@ -4366,13 +4365,15 @@
 		signal_action.sa_flags = SA_RESTART;
 		sigaction(SIGRTMIN + 1, &signal_action, NULL);
 
+        /*
 		dir_fd = open(TMPDIR, O_RDONLY);
 		if(dir_fd >= 0)
 		{
 			fcntl(dir_fd, F_SETSIG, SIGRTMIN + 1);
 			fcntl(dir_fd, F_NOTIFY, DN_MODIFY | DN_CREATE | DN_DELETE | DN_MULTISHOT);
 			event_handler(SIGRTMIN + 1);
-		}
+		}*/
+        cs_log("Only PMT 4-6 supported on FreeBSD, sorry...");
 	}
 	else
 	{
