@interface __NSLocalTimeZone : NSTimeZone

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)data;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (Class)classForCoder;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
