@class NSError, DDDevice;

@interface DDDeviceEvent : NSObject <CUXPCCodable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) DDDevice *device;
@property (readonly, nonatomic) long long eventType;

+ (id)allocInitWithXPCObject:(id)a0 error:(id *)a1;

- (id)descriptionWithLevel:(int)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEventType:(long long)a0 device:(id)a1;
- (id)createDADeviceEvent;

@end
