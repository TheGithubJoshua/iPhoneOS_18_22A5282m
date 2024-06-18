@class NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKCurrencyAmount *destinationCurrencyAmount;
@property (copy, nonatomic) NSDecimalNumber *exchangeRate;

+ (id)recordNamePrefix;

- (id)initWithCoder:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)primaryIdentifier;
- (unsigned long long)itemType;
- (unsigned long long)hash;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)jsonString;
- (void)_encodeServerDataWithCloudStoreCoder:(id)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudStoreCoder:(id)a0;
- (BOOL)isEqualToForeignExchangeInformation:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;

@end
