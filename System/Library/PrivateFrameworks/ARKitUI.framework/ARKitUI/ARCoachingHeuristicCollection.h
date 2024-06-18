@class NSMutableArray;

@interface ARCoachingHeuristicCollection : ARCoachingHeuristic {
    NSMutableArray *_heuristics;
}

- (id)init;
- (void)clear;
- (long long)requirements;
- (void).cxx_destruct;
- (void)addHeuristic:(id)a0;
- (void)updateWithFrame:(id)a0 cache:(id)a1;

@end
