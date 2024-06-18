@interface TUVideoCallAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long remoteCameraOrientation;
@property (nonatomic) long long localVideoContextSlotIdentifier;
@property (nonatomic) long long remoteVideoContextSlotIdentifier;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToVideoCallAttributes:(id)a0;

@end
