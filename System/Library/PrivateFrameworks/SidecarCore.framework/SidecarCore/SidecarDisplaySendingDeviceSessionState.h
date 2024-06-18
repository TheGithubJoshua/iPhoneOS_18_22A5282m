@class SidecarDevice;

@interface SidecarDisplaySendingDeviceSessionState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SidecarDevice *device;
@property (readonly, nonatomic) long long sessionState;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDevice:(id)a0 sessionState:(long long)a1;

@end
