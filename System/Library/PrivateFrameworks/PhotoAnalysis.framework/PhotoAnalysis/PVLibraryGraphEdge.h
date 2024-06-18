@class NSString, NSDictionary;

@interface PVLibraryGraphEdge : MAEdge {
    unsigned short _domain;
    float _weight;
    NSString *_label;
    NSDictionary *_properties;
}

- (float)weight;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)label;
- (id)properties;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;

@end
