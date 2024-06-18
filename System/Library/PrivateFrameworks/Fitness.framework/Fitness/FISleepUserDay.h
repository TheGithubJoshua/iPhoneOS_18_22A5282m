@class NSDate;

@interface FISleepUserDay : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *startOfDay;
@property (copy, nonatomic) NSDate *endOfDay;

- (id)initWithCoder:(id)a0;
- (BOOL)isEmpty;
- (id)initEmptySleepUserDay;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartOfDay:(id)a0 endOfDay:(id)a1;

@end
