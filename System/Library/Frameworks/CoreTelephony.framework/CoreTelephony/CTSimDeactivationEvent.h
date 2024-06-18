@class NSString;

@interface CTSimDeactivationEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSString *reasonCode;
@property (retain, nonatomic) NSString *networkPlmn;
@property (nonatomic) BOOL isRoaming;
@property (nonatomic) BOOL isNetworkInitiated;
@property (retain, nonatomic) NSString *rat;
@property (nonatomic) long long timeOfEvent;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
