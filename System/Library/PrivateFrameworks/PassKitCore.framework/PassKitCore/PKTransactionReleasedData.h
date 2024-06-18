@class NSSet, PKTransactionReleasedDataApplication;

@interface PKTransactionReleasedData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *elements;
@property (retain, nonatomic) PKTransactionReleasedDataApplication *application;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isAgeVerificationElement:(id)a0;
- (BOOL)isEqualToReleasedData:(id)a0;
- (BOOL)isPortraitElement:(id)a0;
- (unsigned long long)verificationType;

@end
