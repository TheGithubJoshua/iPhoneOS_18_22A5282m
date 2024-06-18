@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (id)initWithError:(id)a0;
- (unsigned long long)eventType;
- (unsigned long long)hash;
- (BOOL)hasValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dematerializeWithObserver:(id)a0;
- (id)error;
- (id)value;

@end
