@class NSTimeZone, NSString, NSMutableDictionary, NSCalendar, CLLocation;

@interface LNEnvironment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) LNEnvironment *defaultEnvironment;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *locationAuthorizationStatus;
@property (readonly, copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) CLLocation *currentLocation;
@property (copy, nonatomic) NSCalendar *calendar;

- (id)initWithCoder:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)locationAuthorizationStatusForBundleIdentifier:(id)a0;
- (id)trimLocation:(id)a0 atKeyPath:(id)a1 againstTCCWithBundleIdentifier:(id)a2;

@end
