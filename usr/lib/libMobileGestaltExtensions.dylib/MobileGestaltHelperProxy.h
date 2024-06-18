@class NSXPCConnection;
@protocol MobileGestaltHelper;

@interface MobileGestaltHelperProxy : NSObject

@property int error;
@property (readonly) id<MobileGestaltHelper> helper;
@property (readonly) NSXPCConnection *connection;

+ (id)proxy;

- (id)init;
- (BOOL)proxyRebuildCache;
- (BOOL)proxySetCacheSentinel;
- (void)invalidate;
- (void)dealloc;

@end
