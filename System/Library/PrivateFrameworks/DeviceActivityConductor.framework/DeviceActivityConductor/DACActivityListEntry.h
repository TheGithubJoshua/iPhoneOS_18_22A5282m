@class DACActivityDescriptor, NSDate;

@interface DACActivityListEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DACActivityDescriptor *activity;
@property (readonly, nonatomic) unsigned long long activationCount;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) DACActivityDescriptor *origin;

+ (id /* block */)comparator;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToEntry:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActivity:(id)a0 reason:(unsigned long long)a1 origin:(id)a2;
- (id)_initWithActivity:(id)a0 activationCount:(unsigned long long)a1 date:(id)a2 reason:(unsigned long long)a3 origin:(id)a4;
- (id)entryWithUpdatedActivationCount:(unsigned long long)a0;
- (id)entryWithUpdatedReason:(unsigned long long)a0;

@end
