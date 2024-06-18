@class NSString;

@interface DCLegacySESlotInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long seSlot;
@property BOOL isMissing;
@property (retain) NSString *partition;
@property (retain) NSString *credentialIdentifier;
@property (retain) NSString *presentmentKeyIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSESlot:(long long)a0 isMissing:(BOOL)a1;
- (id)initWithSESlot:(long long)a0 isMissing:(BOOL)a1 partition:(id)a2 credentialIdentifier:(id)a3 presentmentKeyIdentifier:(id)a4;

@end
