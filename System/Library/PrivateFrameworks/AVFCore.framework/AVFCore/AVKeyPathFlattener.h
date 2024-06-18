@class NSString, AVKeyPathDependencyManager, AVTwoPartKeyPath, NSObject;

@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable> {
    AVKeyPathDependencyManager *_dependencyManager;
    AVTwoPartKeyPath *_dependencyKeyPath;
    NSObject *_observedObject;
}

@property (readonly, nonatomic) id dependentProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)declareKeyPathDependenciesWithRegistry:(id)a0;
- (id)observedObject;
- (void)addCallbackToCancelDuringDeallocation:(id)a0;
- (void)dealloc;
- (id)initForObservingValueAtKeyPath:(id)a0 onObject:(id)a1;
- (id)topLevelDependencyProperty;

@end