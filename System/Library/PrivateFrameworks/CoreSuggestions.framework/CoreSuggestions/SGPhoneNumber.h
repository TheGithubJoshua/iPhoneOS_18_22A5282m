@class NSString;

@interface SGPhoneNumber : SGLabeledObject

@property (readonly, nonatomic) NSString *phoneNumber;

+ (BOOL)supportsSecureCoding;
+ (id)phoneNumber:(id)a0 label:(id)a1 extractionInfo:(id)a2 recordId:(id)a3;
+ (id)phoneNumber:(id)a0 label:(id)a1 extractionType:(unsigned long long)a2 recordId:(id)a3;
+ (id)phoneNumber:(id)a0 label:(id)a1 extractionType:(unsigned long long)a2 recordId:(id)a3 origin:(id)a4;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToPhoneNumber:(id)a0;
- (id)initWithPhoneNumber:(id)a0 label:(id)a1 extractionInfo:(id)a2 recordId:(id)a3;

@end
