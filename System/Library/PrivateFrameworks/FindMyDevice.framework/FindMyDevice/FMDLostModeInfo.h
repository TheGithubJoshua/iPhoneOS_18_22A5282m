@class NSString;

@interface FMDLostModeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long lostModeType;
@property (nonatomic) BOOL lostModeEnabled;
@property (nonatomic) BOOL disableSlideToUnlock;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic) BOOL facetimeCapable;
@property (retain, nonatomic) NSString *footnoteText;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
