@class NSArray, NSString;

@interface CLKGaugeProvider : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long style;
@property (retain, nonatomic) NSArray *gaugeColors;
@property (retain, nonatomic) NSArray *gaugeColorLocations;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL finalized;
@property (retain, nonatomic) NSString *accessibilityLabel;

+ (id)providerWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)finalize;
- (unsigned long long)hash;
- (BOOL)validate;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)a0;
- (double)progressFractionForNow:(id)a0;
- (void)stopUpdatesForToken:(id)a0;
- (BOOL)needsTimerUpdates;

@end
