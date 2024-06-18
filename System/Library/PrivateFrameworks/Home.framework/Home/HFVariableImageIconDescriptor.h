@interface HFVariableImageIconDescriptor : HFImageIconDescriptor

@property (readonly, nonatomic) double variableValue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithSystemImageNamed:(id)a0 variableValue:(double)a1 configuration:(id)a2;

@end
