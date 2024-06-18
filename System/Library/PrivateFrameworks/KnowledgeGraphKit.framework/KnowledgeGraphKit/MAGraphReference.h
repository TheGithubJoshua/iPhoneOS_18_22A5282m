@class MABaseGraph;
@protocol MAGraphProxy;

@interface MAGraphReference : NSObject {
    unsigned long long _hash;
}

@property (readonly, weak) id<MAGraphProxy> graph;
@property (readonly, weak) MABaseGraph *concreteGraph;

- (unsigned long long)hash;
- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;

@end
