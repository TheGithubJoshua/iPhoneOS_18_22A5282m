@class NSMutableArray, NSMutableDictionary;

@interface MKPriorityToIndexMap : NSObject {
    NSMutableArray *_priorities;
    NSMutableDictionary *_prioritiesToIndexes;
}

- (id)init;
- (BOOL)contains:(id)a0;
- (long long)indexOfPriority:(double)a0;
- (void).cxx_destruct;
- (void)insertPriorities:(id)a0 prioritiesToReAdd:(id)a1;
- (BOOL)addPriorities:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)nextPriorityFromPriorities:(id)a0 prioritiesToReAdd:(id)a1;
- (void)appendRemainingPriorities:(id)a0 prioritiesToReAdd:(id)a1;
- (double)priorityOfIndex:(unsigned long long)a0;
- (BOOL)containsPriority:(double)a0;
- (id)initWithPriorities:(id)a0;

@end
