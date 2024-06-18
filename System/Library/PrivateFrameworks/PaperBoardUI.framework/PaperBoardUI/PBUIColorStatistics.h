@class _UILegibilitySettingsProvider, UIColor;
@protocol PBUIColorStatisticsDelegate;

@interface PBUIColorStatistics : NSObject <NSCopying, NSSecureCoding> {
    id<PBUIColorStatisticsDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _UILegibilitySettingsProvider *_legibilityProvider;
    UIColor *_averageColor;
    double _averageContrast;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
