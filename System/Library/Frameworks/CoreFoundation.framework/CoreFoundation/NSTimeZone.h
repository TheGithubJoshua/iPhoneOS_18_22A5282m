@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSData *data;

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)localTimeZone;
+ (id)timeZoneWithName:(id)a0;
+ (id)defaultTimeZone;
+ (id)abbreviationDictionary;
+ (id)knownTimeZoneNames;
+ (void)setAbbreviationDictionary:(id)a0;
+ (id)systemTimeZone;
+ (id)timeZoneDataVersion;
+ (id)timeZoneForSecondsFromGMT:(long long)a0;
+ (id)timeZoneWithAbbreviation:(id)a0;
+ (void)resetSystemTimeZone;
+ (void)setDefaultTimeZone:(id)a0;
+ (id)timeZoneWithName:(id)a0 data:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (unsigned long long)_cfTypeID;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isNSTimeZone__;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)secondsFromGMT;
- (id)initWithName:(id)a0;
- (BOOL)isEqualToTimeZone:(id)a0;
- (id)nextDaylightSavingTimeTransition;
- (id)abbreviation;
- (double)daylightSavingTimeOffset;
- (BOOL)isDaylightSavingTime;

@end
