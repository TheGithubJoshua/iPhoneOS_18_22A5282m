@interface TUConversationParticipantCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable;
@property (nonatomic, getter=isScreenSharingAvailable) BOOL screenSharingAvailable;
@property (nonatomic, getter=isGondolaCallingAvailable) BOOL gondolaCallingAvailable;
@property (nonatomic, getter=isMirageAvailable) BOOL mirageAvailable;
@property (nonatomic, getter=isGFTDowngradeToOneToOneAvailable) BOOL gftDowngradeToOneToOneAvailable;
@property (nonatomic, getter=isUPlusNDowngradeAvailable) BOOL uPlusNDowngradeAvailable;
@property (nonatomic, getter=isUPlusOneScreenShareAvailable) BOOL uPlusOneScreenShareAvailable;
@property (nonatomic) BOOL supportsLeaveContext;
@property (nonatomic) unsigned long long sharePlayProtocolVersion;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToCapabilities:(id)a0;

@end
