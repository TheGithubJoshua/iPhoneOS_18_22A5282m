@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (id)initWithName:(id)a0 queue:(id)a1;
- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (void)fire;
- (id)initWithName:(id)a0;

@end
