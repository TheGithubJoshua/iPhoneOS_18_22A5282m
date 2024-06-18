@class NSString;

@interface CTRegistrationDisplayStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *registrationDisplayStatus;
@property (nonatomic) BOOL isInHomeCountry;
@property (nonatomic) BOOL changedDueToSimRemoval;
@property (nonatomic) BOOL isRegistrationForcedHome;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
