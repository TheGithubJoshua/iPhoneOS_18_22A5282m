@class HMFVersion;

@interface HMSettingVersionValue : HMImmutableSettingValue

@property (readonly) HMFVersion *version;
@property (readonly) long long type;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)attributeDescriptions;
- (id)initWithVersion:(id)a0 type:(long long)a1;
- (id)payloadCopy;

@end
