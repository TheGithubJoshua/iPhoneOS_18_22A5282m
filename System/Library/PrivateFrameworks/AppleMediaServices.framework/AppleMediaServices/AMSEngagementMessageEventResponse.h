@class NSArray;

@interface AMSEngagementMessageEventResponse : AMSEngagementEnqueueResult

@property (readonly, nonatomic) NSArray *messageActions;

- (void).cxx_destruct;
- (id)initWithEnqueueResult:(id)a0;
- (void)_processActions:(id)a0;

@end
