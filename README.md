# Poudriere

## Setup
Install poudriere with:
```
pkg install poudriere
```

After installation, modify the configuration with:
```
ZROOTFS=/poudriere
FREEBSD_HOST=http://ftp.nl.freebsd.org
```

Setup all package and make configurations by downloading this repo:
```
git clone https://github.com/johansglock/poudriere.d.git /usr/local/etc/poudriere.d
```

Create ports tree:
```
poudriere ports -c
```

Create a jail to build packages:
```
poudriere jail -c -j freebsd9-i386 -v 9.3-RELEASE -a i386
poudriere jail -c -j freebsd9-amd64 -v 9.3-RELEASE -a amd64
poudriere jail -c -j freebsd10-i386 -v 10.2-RELEASE -a i386
poudriere jail -c -j freebsd10-amd64 -v 10.2-RELEASE -a amd64
```

Link the default patch location into this repository:
```
ln -s /usr/local/etc/poudriere.d/local-patches/ /usr/ports/distfiles/local-patches
```

## Running
Update the ports tree with:
```
poudriere ports -u
```

Build all packages with:
```
poudriere bulk -j freebsd9-i386 -f /usr/local/etc/poudriere.d/plist
poudriere bulk -j freebsd9-amd64 -f /usr/local/etc/poudriere.d/plist
poudriere bulk -j freebsd10-i386 -f /usr/local/etc/poudriere.d/plist
poudriere bulk -j freebsd10-amd64 -f /usr/local/etc/poudriere.d/plist
```

## Repository for pkgng
Nginx configuration within the host:
```
location /pkg-repo/ {
    alias   /usr/local/www/;
    index   index.html index.html;
    autoindex on;
}
```

pkgng configuration:
```
MyRepo: {
  url: "pkg+https://example.com/${ABI}",
  mirror_type: "srv",
  signature_type: "none",
  enabled: yes
}
```

Create symlinks:
```sh
cd /usr/local/www
mkdir FreeBSD:10:amd64 FreeBSD:10:i386 FreeBSD:9:amd64 FreeBSD:9:i386
ln -sf /usr/local/poudriere/data/packages/freebsd9-i386-default/ FreeBSD:9:i386/latest
ln -sf /usr/local/poudriere/data/packages/freebsd9-amd64-default/ FreeBSD:9:amd64/latest
ln -sf /usr/local/poudriere/data/packages/freebsd10-i386-default/ FreeBSD:10:i386/latest
ln -sf /usr/local/poudriere/data/packages/freebsd10-amd64-default/ FreeBSD:10:amd64/latest
```

