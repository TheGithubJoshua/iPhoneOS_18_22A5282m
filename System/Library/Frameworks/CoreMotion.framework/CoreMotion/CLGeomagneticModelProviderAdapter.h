@class NSString;

@interface CLGeomagneticModelProviderAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderProtocol>

@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSilo;
+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;
+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;
+ (BOOL)isSupported;

- (void)doAsync:(id /* block */)a0 withReply:(id /* block */)a1;
- (id)init;
- (BOOL)syncgetDoSync:(id /* block */)a0;
- (void)fetchGeomagneticModelData:(id /* block */)a0;
- (void)endService;
- (void *)adaptee;
- (void)doAsync:(id /* block */)a0;
- (void)beginService;

@end
