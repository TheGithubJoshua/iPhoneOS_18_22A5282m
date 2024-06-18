@interface KGDoublePropertyValue : KGPropertyValue

@property (readonly, nonatomic) double value;

- (id)initWithValue:(double)a0;
- (unsigned long long)dataType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)maPropertyValue;

@end
