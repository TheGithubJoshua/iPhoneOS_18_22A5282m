@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (void)enqueueObject:(id)a0;
- (BOOL)isEmpty;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)description;
- (id)dequeueObject;
- (void)dealloc;
- (unsigned long long)count;
- (id)popObject;
- (void)pushObject:(id)a0;
- (id)topObject;
- (void)_safeReleaseAllObjects;
- (id)dequeueObjectRetained;
- (id)popObjectRetained;
- (void)pushArray:(id)a0;

@end
