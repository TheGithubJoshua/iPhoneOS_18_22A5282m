@class NSString, NSArray, NSDate;

@interface PKAccountStatementMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned long long accountType;
@property (copy, nonatomic) NSString *statementIdentifier;
@property (copy, nonatomic) NSDate *openingDate;
@property (copy, nonatomic) NSDate *closingDate;
@property (nonatomic) BOOL hasBeenProcessed;
@property (nonatomic) long long processedAttemptCount;
@property (copy, nonatomic) NSDate *lastProcessedDate;
@property (copy, nonatomic) NSArray *transactionMetadata;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0 accountIdentifier:(id)a1 statementIdentifier:(id)a2;
- (id)transactionsMissingFromDevice;

@end
