@class NSArray;

@interface EMUndoMessageAction : EMMessageChangeAction

@property (readonly, copy, nonatomic) NSArray *individualActions;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)signpostType;
- (id)initWithIndividualActions:(id)a0;

@end
