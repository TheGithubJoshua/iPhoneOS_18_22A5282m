@class NSString, NSMutableDictionary;

@interface MAConcreteEdge : MAEdge {
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
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;

@end
