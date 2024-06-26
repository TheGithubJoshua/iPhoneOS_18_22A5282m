@interface TSUDuration : NSObject <NSCopying> {
    double mTimeInterval;
}

+ (id)durationWithTimeInterval:(double)a0;

- (double)timeInterval;
- (unsigned long long)hash;
- (id)initWithTimeInterval:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
