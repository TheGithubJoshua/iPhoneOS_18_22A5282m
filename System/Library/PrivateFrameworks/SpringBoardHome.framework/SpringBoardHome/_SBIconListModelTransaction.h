@class NSString, NSMutableSet;

@interface _SBIconListModelTransaction : NSObject {
    NSMutableSet *_addedNodeIdentifiers;
    NSMutableSet *_deletedNodeIdentifiers;
}

@property (readonly, copy, nonatomic) NSString *requestID;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)commitChangesToObservers:(id)a0 forNode:(id)a1;
- (id)initWithRequestID:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeNodeIdentifiers:(id)a0;
- (void)addNodeIdentifiers:(id)a0;

@end
