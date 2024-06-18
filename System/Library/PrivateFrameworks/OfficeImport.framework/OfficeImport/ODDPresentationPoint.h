@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {
    ODDPresentationPoint *mParent;
    NSMutableArray *mChildren;
}

- (id)children;
- (void)setType:(int)a0;
- (id)parent;
- (void).cxx_destruct;
- (void)addChild:(id)a0 order:(unsigned long long)a1;

@end
