@class _SUAutoInstallForecastDateCache, NSDate;

@interface SUAutoInstallForecast : NSObject <NSSecureCoding, NSCopying> {
    _SUAutoInstallForecastDateCache *_lazy_forecastDateCache;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *unlockStartDate;
@property (retain, nonatomic) NSDate *unlockEndDate;
@property (retain, nonatomic) NSDate *suStartDate;
@property (retain, nonatomic) NSDate *suEndDate;
@property (retain, nonatomic) NSDate *firstUnlock;
@property (readonly, nonatomic) long long scheduleType;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_calendar;
- (void)dealloc;
- (BOOL)_isDateExpired:(id)a0;
- (id)_roundedEndTime;
- (id)_forecastDateCache;
- (BOOL)_isForecastLogicallyExpired;
- (id)_roundedStartTime;

@end
