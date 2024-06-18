@class NSString;

@interface _CNEmailAddressDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)updatePropertyListRepresentation:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)acceptDonationValueVisitor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithEmailAddress:(id)a0 label:(id)a1 origin:(id)a2;
- (id)copyWithNewExpirationDate:(id)a0;

@end
