@class NSDate;

@interface NFAssertion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long assertionType;
@property (readonly) int pid;
@property (readonly) NSDate *assertionTime;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)sessionID;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
