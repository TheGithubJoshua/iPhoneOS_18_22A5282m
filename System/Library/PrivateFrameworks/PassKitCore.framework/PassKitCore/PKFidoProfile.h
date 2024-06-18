@class NSString;

@interface PKFidoProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) NSString *accountHash;
@property (retain, nonatomic) NSString *keyHash;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
