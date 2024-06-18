@class NSString, NSArray;

@interface SBFTraitsPreferencesTree : NSObject <SBFTraitsPreferencesTree, BSDescriptionProviding> {
    NSArray *_rootChildren;
}

@property (nonatomic) BOOL isFlatTree;
@property (nonatomic) long long traversalType;
@property (readonly, nonatomic) NSString *debugName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)treeWithNodesSpecifications:(id)a0 traversalType:(long long)a1 debugName:(id)a2;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)recursiveDescription;
- (id)topologicalSort;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)_recursiveDescriptionWithChildrenInZOrder:(BOOL)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)participantsTopologicalSort;
- (id)_initWithRootChildren:(id)a0 traversalType:(long long)a1 debugName:(id)a2;

@end
