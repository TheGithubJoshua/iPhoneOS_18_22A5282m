@class NSString, NSNumber;

@interface CTServiceDisconnectionStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int contextType;
@property (retain, nonatomic) NSString *apnName;
@property (nonatomic) BOOL activationFailure;
@property (retain, nonatomic) NSNumber *connectionMask;
@property (nonatomic) int error;
@property (retain, nonatomic) NSNumber *rawCauseCode;
@property (retain, nonatomic) NSNumber *pdp;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
