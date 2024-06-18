@class NSOrderedSet, NSPredicate, NSDateInterval;

@interface PPTDataRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long requestType;
@property (readonly) NSOrderedSet *metrics;
@property (readonly) NSPredicate *predicate;
@property (readonly) NSDateInterval *timeFilter;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestType:(long long)a0 metrics:(id)a1 predicate:(id)a2 timeFilter:(id)a3;

@end