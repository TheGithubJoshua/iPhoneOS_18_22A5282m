@class NSString;

@interface PGGraphPublicEventLocalizedCategoryNode : PGGraphOptimizedNode {
    NSString *_label;
}

@property (readonly) unsigned char level : 8;

- (unsigned short)domain;
- (void).cxx_destruct;
- (id)description;
- (id)propertyDictionary;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLabel:(id)a0 level:(unsigned long long)a1;

@end
