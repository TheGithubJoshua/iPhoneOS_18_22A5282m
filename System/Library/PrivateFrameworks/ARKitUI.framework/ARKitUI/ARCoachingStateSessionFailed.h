@class ARCoachingHeuristicCollection, ARCoachingState;

@interface ARCoachingStateSessionFailed : ARCoachingState {
    ARCoachingState *_nextState;
    ARCoachingHeuristicCollection *_heuristics;
}

- (void)enter;
- (id)initWithView:(id)a0;
- (long long)requirements;
- (void).cxx_destruct;
- (id)doAction:(long long)a0;

@end
