@class NSDate;

@interface CLFindMyAccessoryAbsoluteWildConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *desiredKeyRollDate;
@property (readonly) unsigned int nextWildIndex;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)encodeConfiguration;
- (id)initWithDesiredNextKeyRollDate:(id)a0 nextWildIndex:(unsigned int)a1;

@end
