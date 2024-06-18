@class NSDate;

@interface CXEndCallAction : CXCallAction

@property (copy, nonatomic) NSDate *dateEnded;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)customDescription;
- (void)fulfill;
- (void)updateAsFulfilledWithDateEnded:(id)a0;
- (void)fulfillWithDateEnded:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
