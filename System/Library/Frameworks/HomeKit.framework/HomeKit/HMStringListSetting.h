@class NSArray;

@interface HMStringListSetting : HMImmutableSetting

@property (readonly, copy) NSArray *stringListValue;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 payload:(id)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 stringListValue:(id)a2;
- (id)payloadCopy;

@end
