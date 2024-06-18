@class CTRemotePlanIdentifier, CTPlanTransferAttributes, CTPlanSignUpDetails;

@interface CTRemotePlan : CTPlan

@property (retain, nonatomic) CTRemotePlanIdentifier *planID;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;
@property (retain, nonatomic) CTPlanSignUpDetails *signUpDetails;
@property (nonatomic) unsigned long long addOnPurchaseType;
@property (nonatomic) unsigned long long addOnCarrierFlowType;

+ (BOOL)supportsSecureCoding;

- (id)phoneNumber;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)countryCode;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)carrierName;
- (id)label;
- (id)iccid;

@end
