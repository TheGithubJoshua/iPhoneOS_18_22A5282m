@class _CDPSimpleModelParameterManagerTuningValue, NSMutableArray, _CDPModelTuningState;

@interface _CDPSimpleModelParameterManagerAccountState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _CDPSimpleModelParameterManagerTuningValue *previousBestTuningValue;
@property (retain, nonatomic) NSMutableArray *tuningValues;
@property (retain, nonatomic) _CDPModelTuningState *lastTuningState;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
