@class NSString, PKPaymentTransactionTag;

@interface PKSearchTagResult : NSObject <PKSearchAutocompleteToken>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentTransactionTag *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)tokenType;

@end
