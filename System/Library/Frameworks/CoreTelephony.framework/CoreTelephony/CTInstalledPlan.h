@class CTPlanIdentifier, CTPlanTransferAttributes;

@interface CTInstalledPlan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTPlanIdentifier *planID;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;

- (id)phoneNumber;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)carrierName;
- (id)iccid;

@end
