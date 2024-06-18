@class NSMutableArray;

@interface PHASEContainerNodeDefinition : PHASESoundEventNodeDefinition {
    NSMutableArray *_subtrees;
}

+ (id)new;

- (id)children;
- (id)init;
- (id)initWithIdentifier:(id)a0;
- (id)initWithUID:(id)a0;
- (void).cxx_destruct;
- (void)addSubtree:(id)a0;

@end
