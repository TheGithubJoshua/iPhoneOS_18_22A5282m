@interface MapsSuggestionsPreferredTransportTypeTrigger : MapsSuggestionsBaseTrigger {
    id _transportTypeChangedListener;
}

- (id)init;
- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (void).cxx_destruct;

@end
