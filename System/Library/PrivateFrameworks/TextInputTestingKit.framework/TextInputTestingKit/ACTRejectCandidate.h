@class TIKeyboardCandidate;

@interface ACTRejectCandidate : ACTUserAction

@property (readonly, nonatomic) TIKeyboardCandidate *candidate;
@property (readonly, nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)description;
- (void)applyWithTyper:(id)a0 log:(id)a1;
- (id)initWithCandidate:(id)a0 timestamp:(double)a1;

@end
