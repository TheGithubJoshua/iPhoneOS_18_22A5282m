@class NSDictionary, NSArray, NSDate;

@interface IDSOpportunisticOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSArray *blocklistedDestinations;
@property (retain, nonatomic) NSDate *expiryDate;
@property (nonatomic) BOOL destinationsMustBeInContacts;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBlocklistedDestinations:(id)a0 expiryDate:(id)a1 destinationsMustBeInContacts:(BOOL)a2;

@end
