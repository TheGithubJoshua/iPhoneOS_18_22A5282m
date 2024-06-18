@class PLXPCListenerOperatorComposition;

@interface PLEduAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *syncBubbleStatusNotification;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSyncBubble;
+ (id)entryEventPointDefinitionMode;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void).cxx_destruct;
- (void)logEventPointMode;

@end
