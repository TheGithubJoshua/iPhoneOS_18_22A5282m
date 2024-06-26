@class NMSQuotaEvaluationState_Legacy;

@interface NMSQuotaEvaluationLogAction_Legacy : NMLogAction {
    unsigned long long _type;
    NMSQuotaEvaluationState_Legacy *_state;
}

+ (id)logActionWithActionType:(unsigned long long)a0 state:(id)a1;

- (void).cxx_destruct;
- (id)logMessage;
- (id)_stringForType:(unsigned long long)a0;
- (id)_identifierLogMessage;
- (id)initWithActionType:(unsigned long long)a0 state:(id)a1;

@end
