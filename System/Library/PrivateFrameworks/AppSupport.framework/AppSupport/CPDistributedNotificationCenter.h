@class NSString, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface CPDistributedNotificationCenter : NSObject {
    NSString *_centerName;
    NSLock *_lock;
    struct __CFRunLoopSource { } *_receiveNotificationSource;
    BOOL _isServer;
    struct __CFDictionary { } *_sendPorts;
    unsigned long long _startCount;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)centerNamed:(id)a0;
+ (id)centerForServerPort:(unsigned int)a0;
+ (id)_serverPortToNotificationCenterMapDispatchQueue;
+ (struct __CFDictionary { } *)_serverPortToNotificationCenterMap;
+ (void)setCenter:(id)a0 forServerPort:(unsigned int)a1;

- (void)stopDeliveringNotifications;
- (void)startDeliveringNotificationsToMainThread;
- (void)_checkIn;
- (void)_receivedCheckIn:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; } *)a1;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop { } *)a0;
- (void)_checkOutAndRemoveSource;
- (id)name;
- (BOOL)postNotificationName:(id)a0 userInfo:(id)a1 toBundleIdentifier:(id)a2;
- (void)postNotificationName:(id)a0;
- (void)deliverNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (id)_initWithServerName:(id)a0;
- (void)_notificationServerWasRestarted;
- (void)postNotificationName:(id)a0 userInfo:(id)a1;
- (void)runServerOnCurrentThread;
- (void)runServer;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop { } *)a0;

@end
