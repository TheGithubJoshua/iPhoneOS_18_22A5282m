@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) NSArray *events;

- (BOOL)isSequenceTerminated;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (id)allEvents;
- (id)initWithEvents:(id)a0;

@end
