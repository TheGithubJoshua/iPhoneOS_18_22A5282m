@interface PLARKitAgent : PLAgent

+ (void)load;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionState;

- (void)initOperatorDependancies;
- (void)log;

@end
