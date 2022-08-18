// AUTO-GENERATED

#ifndef _GI_GIO_GIO_HPP_
#define _GI_GIO_GIO_HPP_

#include <gi/gi.hpp>

#include <gobject/gobject.hpp>


#if defined(__has_include)
#if __has_include(<gio/gio_setup_pre_def.hpp>)
#include <gio/gio_setup_pre_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/gio_setup_pre.hpp>)
#include <gio/gio_setup_pre.hpp>
#endif
#endif

#include <gio/gdesktopappinfo.h>
#include <gio/gfiledescriptorbased.h>
#include <gio/gio.h>
#include <gio/gunixfdlist.h>
#include <gio/gunixfdmessage.h>
#include <gio/gunixinputstream.h>
#include <gio/gunixmounts.h>
#include <gio/gunixoutputstream.h>

#if defined(__has_include)
#if __has_include(<gio/gio_setup_post_def.hpp>)
#include <gio/gio_setup_post_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/gio_setup_post.hpp>)
#include <gio/gio_setup_post.hpp>
#endif
#endif


GI_DISABLE_DEPRECATED_WARN_BEGIN

#include "_types.hpp"
#include "_enums.hpp"
#include "_flags.hpp"
#include "_constants.hpp"
#include "_callbacks.hpp"


#include "action.hpp"
#include "actionentry.hpp"
#include "actiongroup.hpp"
#include "actionmap.hpp"
#include "appinfo.hpp"
#include "appinfomonitor.hpp"
#include "applaunchcontext.hpp"
#include "application.hpp"
#include "applicationcommandline.hpp"
#include "asyncinitable.hpp"
#include "asyncresult.hpp"
#include "bufferedinputstream.hpp"
#include "bufferedoutputstream.hpp"
#include "bytesicon.hpp"
#include "cancellable.hpp"
#include "charsetconverter.hpp"
#include "converter.hpp"
#include "converterinputstream.hpp"
#include "converteroutputstream.hpp"
#include "credentials.hpp"
#include "datagrambased.hpp"
#include "datainputstream.hpp"
#include "dataoutputstream.hpp"
#include "dbusactiongroup.hpp"
#include "dbusannotationinfo.hpp"
#include "dbusarginfo.hpp"
#include "dbusauthobserver.hpp"
#include "dbusconnection.hpp"
#include "dbuserrorentry.hpp"
#include "dbusinterface.hpp"
#include "dbusinterfaceinfo.hpp"
#include "dbusinterfaceskeleton.hpp"
#include "dbusinterfacevtable.hpp"
#include "dbusmenumodel.hpp"
#include "dbusmessage.hpp"
#include "dbusmethodinfo.hpp"
#include "dbusmethodinvocation.hpp"
#include "dbusnodeinfo.hpp"
#include "dbusobject.hpp"
#include "dbusobjectmanager.hpp"
#include "dbusobjectmanagerclient.hpp"
#include "dbusobjectmanagerserver.hpp"
#include "dbusobjectproxy.hpp"
#include "dbusobjectskeleton.hpp"
#include "dbuspropertyinfo.hpp"
#include "dbusproxy.hpp"
#include "dbusserver.hpp"
#include "dbussignalinfo.hpp"
#include "dbussubtreevtable.hpp"
#include "debugcontroller.hpp"
#include "debugcontrollerdbus.hpp"
#include "desktopappinfo.hpp"
#include "drive.hpp"
#include "dtlsclientconnection.hpp"
#include "dtlsconnection.hpp"
#include "dtlsserverconnection.hpp"
#include "emblem.hpp"
#include "emblemedicon.hpp"
#include "file.hpp"
#include "fileattributeinfo.hpp"
#include "fileattributeinfolist.hpp"
#include "fileattributematcher.hpp"
#include "filedescriptorbased.hpp"
#include "fileenumerator.hpp"
#include "fileicon.hpp"
#include "fileinfo.hpp"
#include "fileinputstream.hpp"
#include "fileiostream.hpp"
#include "filemonitor.hpp"
#include "filenamecompleter.hpp"
#include "fileoutputstream.hpp"
#include "filterinputstream.hpp"
#include "filteroutputstream.hpp"
#include "icon.hpp"
#include "inetaddress.hpp"
#include "inetaddressmask.hpp"
#include "inetsocketaddress.hpp"
#include "initable.hpp"
#include "inputmessage.hpp"
#include "inputstream.hpp"
#include "inputvector.hpp"
#include "iomodule.hpp"
#include "iostream.hpp"
#include "listmodel.hpp"
#include "liststore.hpp"
#include "loadableicon.hpp"
#include "memoryinputstream.hpp"
#include "memorymonitor.hpp"
#include "memoryoutputstream.hpp"
#include "menu.hpp"
#include "menuattributeiter.hpp"
#include "menuitem.hpp"
#include "menulinkiter.hpp"
#include "menumodel.hpp"
#include "mount.hpp"
#include "mountoperation.hpp"
#include "nativesocketaddress.hpp"
#include "nativevolumemonitor.hpp"
#include "networkaddress.hpp"
#include "networkmonitor.hpp"
#include "networkservice.hpp"
#include "notification.hpp"
#include "outputmessage.hpp"
#include "outputstream.hpp"
#include "outputvector.hpp"
#include "permission.hpp"
#include "pollableinputstream.hpp"
#include "pollableoutputstream.hpp"
#include "powerprofilemonitor.hpp"
#include "propertyaction.hpp"
#include "proxy.hpp"
#include "proxyaddress.hpp"
#include "proxyaddressenumerator.hpp"
#include "proxyresolver.hpp"
#include "remoteactiongroup.hpp"
#include "resolver.hpp"
#include "resource.hpp"
#include "seekable.hpp"
#include "settings.hpp"
#include "settingsbackend.hpp"
#include "settingsschema.hpp"
#include "settingsschemakey.hpp"
#include "settingsschemasource.hpp"
#include "simpleaction.hpp"
#include "simpleactiongroup.hpp"
#include "simpleasyncresult.hpp"
#include "simpleiostream.hpp"
#include "simplepermission.hpp"
#include "simpleproxyresolver.hpp"
#include "socket.hpp"
#include "socketaddress.hpp"
#include "socketaddressenumerator.hpp"
#include "socketclient.hpp"
#include "socketconnectable.hpp"
#include "socketconnection.hpp"
#include "socketcontrolmessage.hpp"
#include "socketlistener.hpp"
#include "socketservice.hpp"
#include "srvtarget.hpp"
#include "staticresource.hpp"
#include "subprocess.hpp"
#include "subprocesslauncher.hpp"
#include "task.hpp"
#include "tcpconnection.hpp"
#include "tcpwrapperconnection.hpp"
#include "testdbus.hpp"
#include "themedicon.hpp"
#include "threadedsocketservice.hpp"
#include "tlsbackend.hpp"
#include "tlscertificate.hpp"
#include "tlsclientconnection.hpp"
#include "tlsconnection.hpp"
#include "tlsdatabase.hpp"
#include "tlsfiledatabase.hpp"
#include "tlsinteraction.hpp"
#include "tlspassword.hpp"
#include "tlsserverconnection.hpp"
#include "unixconnection.hpp"
#include "unixcredentialsmessage.hpp"
#include "unixfdlist.hpp"
#include "unixfdmessage.hpp"
#include "unixinputstream.hpp"
#include "unixmountentry.hpp"
#include "unixmountmonitor.hpp"
#include "unixmountpoint.hpp"
#include "unixoutputstream.hpp"
#include "unixsocketaddress.hpp"
#include "vfs.hpp"
#include "volume.hpp"
#include "volumemonitor.hpp"
#include "zlibcompressor.hpp"
#include "zlibdecompressor.hpp"

#include "_functions.hpp"


#if defined(__has_include)
#if __has_include(<gio/gio_extra_def.hpp>)
#include <gio/gio_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/gio_extra.hpp>)
#include <gio/gio_extra.hpp>
#endif
#endif

GI_DISABLE_DEPRECATED_WARN_END

#if defined(GI_INLINE) || defined(GI_INCLUDE_IMPL)
#include "gio_impl.hpp"
#endif

#endif
