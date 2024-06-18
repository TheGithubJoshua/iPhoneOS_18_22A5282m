@class NSMutableArray;

@interface PPAdaptiveCoalescerPendingKeyState : NSObject {
    id _key;
    NSMutableArray *_handlers;
    NSMutableArray *_dates;
}

- (id)init;
- (id)initWithKey:(id)a0;
- (void).cxx_destruct;
- (void)addDate:(id)a0;
- (double)currentQPSForNowDate:(id)a0;
- (BOOL)shouldGarbageCollectForNowDate:(id)a0;
- (double)currentDelayForNowDate:(id)a0;

@end
