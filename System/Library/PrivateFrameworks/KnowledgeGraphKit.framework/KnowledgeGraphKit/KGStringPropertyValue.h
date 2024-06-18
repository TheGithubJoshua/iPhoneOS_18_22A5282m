@class NSString;

@interface KGStringPropertyValue : KGPropertyValue

@property (readonly, nonatomic) NSString *value;

- (id)initWithValue:(id)a0;
- (unsigned long long)dataType;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)maPropertyValue;

@end
