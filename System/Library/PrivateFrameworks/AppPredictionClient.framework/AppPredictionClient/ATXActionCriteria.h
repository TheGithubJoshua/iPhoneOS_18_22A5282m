@class NSDateInterval, NSPredicate, NSDate;

@interface ATXActionCriteria : NSObject <NSCopying, NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL lockScreenEligible;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSPredicate *predicate;

+ (id)predicateValidForAirplaneModeOn:(BOOL)a0;
+ (id)predicateValidForDNDStatusOn:(BOOL)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithProto:(id)a0;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (BOOL)isRelevant:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 lockScreenEligible:(BOOL)a2 predicate:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
