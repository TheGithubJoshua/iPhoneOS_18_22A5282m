@class NSString;

@interface CTCellularPlanProvisioningRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *matchingID;
@property (retain, nonatomic) NSString *OID;
@property (retain, nonatomic) NSString *confirmationCode;
@property (retain, nonatomic) NSString *ICCID;
@property (retain, nonatomic) NSString *EID;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
