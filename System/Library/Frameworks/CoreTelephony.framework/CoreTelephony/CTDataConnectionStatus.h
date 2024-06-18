@class NSNumber, NSString, NSArray;

@interface CTDataConnectionStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *pdp;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSString *apnName;
@property (nonatomic) unsigned int wirelessTechnologyMask;
@property (nonatomic) int state;
@property (nonatomic) int ipFamily;
@property (nonatomic) BOOL suspended;
@property (nonatomic) BOOL publicNetAllowed;
@property (nonatomic) int contextType;
@property (nonatomic) int transportType;
@property (retain, nonatomic) NSArray *qosFlows;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
