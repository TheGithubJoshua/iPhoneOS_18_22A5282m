@class NSDictionary;

@interface CDRecentServiceInfo : NSObject <NSSecureCoding, NSCopying> {
    struct { struct { double timestamp; unsigned long long amount; } urgencies[4]; unsigned long long non_purgeable_amount; unsigned char data[0]; } recentinfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *itemizedNonPurgeable;

+ (id)CDRecentServiceInfo:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3;

- (id)initWithCoder:(id)a0;
- (void)log;
- (id)serialize;
- (id)nonPurgeableAmount;
- (BOOL)isEmpty;
- (BOOL)validate:(double)a0 atUrgency:(int)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAmount:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)updateAmount:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3 deductFromCurrentAmount:(BOOL)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)amountAtUrgency:(int)a0;

@end
