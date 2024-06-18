@class NSISVariable;

@interface NSISVariableObservation : NSObject {
    NSISVariableObservation *_nextDirtyObservation;
    NSISVariableObservation *_prevDirtyObservation;
    NSISVariable *_variable;
    double _lastValue;
    BOOL _valueIsDirtied;
}

- (id)initWithVariable:(id)a0;
- (void)emitValueIfNeededWithEngine:(id)a0;
- (void)valueWasDirtied;
- (void)dealloc;

@end
