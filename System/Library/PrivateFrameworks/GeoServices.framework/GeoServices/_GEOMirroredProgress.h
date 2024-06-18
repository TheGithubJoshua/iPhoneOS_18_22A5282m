@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
}

- (void)_unregisterForKVO;
- (id)_initWithMirroredProgressForSubclasses:(id)a0;
- (id)initWithMirroredProgress:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_registerForKVO;
- (void)_replaceObservedProgressWith:(id)a0;
- (void)_update;

@end
