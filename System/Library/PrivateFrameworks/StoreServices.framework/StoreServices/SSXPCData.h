@class NSObject;
@protocol OS_xpc_object;

@interface SSXPCData : NSData

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcData;

- (id)initWithXPCData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;

@end
