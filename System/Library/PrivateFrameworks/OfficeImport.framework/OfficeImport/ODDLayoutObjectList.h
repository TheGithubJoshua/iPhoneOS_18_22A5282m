@class NSMutableArray;

@interface ODDLayoutObjectList : ODDLayoutObject {
    NSMutableArray *mChildren;
}

- (id)children;
- (id)init;
- (void)addChild:(id)a0;
- (void).cxx_destruct;

@end
