@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (unsigned long long)eventType;
- (unsigned long long)hash;
- (id)initWithResult:(id)a0;
- (BOOL)hasValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dematerializeWithObserver:(id)a0;
- (id)error;
- (id)value;

@end
