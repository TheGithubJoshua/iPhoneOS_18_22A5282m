@class NSString, NSMutableDictionary;

@interface MAConcreteNode : MANode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (float)weight;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)propertyDictionary;
- (BOOL)hasProperties;
- (id)label;
- (unsigned long long)memoryFootprint:(id)a0;
- (id)propertyForKey:(id)a0;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
