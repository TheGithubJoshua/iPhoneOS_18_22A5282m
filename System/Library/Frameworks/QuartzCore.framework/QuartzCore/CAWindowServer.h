@class NSArray;

@interface CAWindowServer : NSObject {
    struct CAWindowServerImpl { struct __CFArray *x0; unsigned int x1; id /* block */ x2; } *_impl;
}

@property (readonly) NSArray *displays;
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;
@property unsigned int rendererFlags;
@property (getter=isSecure) BOOL secure;
@property id /* block */ slotDeletionCallback;

+ (id)serverWithOptions:(id)a0;
+ (id)contextWithOptions:(id)a0;
+ (void)stopServer;
+ (id)serverIfRunning;
+ (id)server;
+ (id)context;

- (id)init;
- (void)addDisplay:(id)a0;
- (void)_detectDisplays;
- (id)displayWithDisplayId:(unsigned int)a0;
- (id)_init;
- (BOOL)isSlotValid:(unsigned int)a0;
- (id)displayWithName:(id)a0;
- (unsigned int)taskNamePortOfContextId:(unsigned int)a0;
- (void)removeDisplay:(id)a0;
- (id)displayWithUniqueId:(id)a0;
- (id)secureModeViolations;
- (unsigned int)contextIdHostingContextId:(unsigned int)a0;
- (id)description;
- (id)insecureProcessIds;
- (void)dealloc;
- (unsigned int)clientPortOfContextId:(unsigned int)a0;
- (void)removeAllDisplays;

@end
