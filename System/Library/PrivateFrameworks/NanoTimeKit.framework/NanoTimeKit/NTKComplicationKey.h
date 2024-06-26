@class NSString, CLKComplicationDescriptor;

@interface NTKComplicationKey : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *complicationIdentifier;
@property (copy, nonatomic) CLKComplicationDescriptor *descriptor;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClientIdentifier:(id)a0 complicationIdentifier:(id)a1;
- (id)initWithClientIdentifier:(id)a0 descriptor:(id)a1;

@end
