@protocol JFXTrackedEffectPropertiesDelegate;

@interface JFXTrackedEffectProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long internalTrackingType;
@property (getter=isTrackingDisabled) BOOL disableTracking;
@property (nonatomic) long long trackingType;
@property (readonly, nonatomic) long long currentTrackingType;
@property (weak, nonatomic) id<JFXTrackedEffectPropertiesDelegate> delegate;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enableTrackingState:(BOOL)a0;

@end
