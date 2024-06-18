@class NSString, DACUnknownActivityPolicy;

@interface DACActivityDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) DACUnknownActivityPolicy *policy;
@property (readonly, nonatomic, getter=isLocalOnly) BOOL localOnly;

+ (id /* block */)comparator;
+ (id)activityDescriptorWithIdentifier:(id)a0 priority:(unsigned long long)a1 policy:(id)a2;
+ (id)localOnlyActivityDescriptorWithIdentifier:(id)a0 priority:(unsigned long long)a1 policy:(id)a2;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initWithIdentifier:(id)a0 priority:(unsigned long long)a1 policy:(id)a2 localOnly:(BOOL)a3;
- (BOOL)isEqualToActivityDescriptor:(id)a0;

@end
