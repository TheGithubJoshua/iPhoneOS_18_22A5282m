@class NSString, NSDate;

@interface _TPSEligibleTip : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *lastOfferedDate;
@property (copy, nonatomic) NSDate *lastEligibleDate;
@property (readonly, nonatomic) BOOL overrideFrequencyControl;

- (id)initWithIdentifier:(id)a0 lastEligibileDate:(id)a1 lastOfferedDate:(id)a2 overrideFrequencyControl:(BOOL)a3;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (long long)eligibleDateCompare:(id)a0;
- (id)debugDescription;

@end
