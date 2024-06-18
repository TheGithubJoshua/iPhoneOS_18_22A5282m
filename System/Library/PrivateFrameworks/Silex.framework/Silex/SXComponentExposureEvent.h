@class NSString, NSDictionary;

@interface SXComponentExposureEvent : SXAnalyticsEvent

@property (readonly, nonatomic) NSString *componentIdentifier;
@property (readonly, nonatomic) NSString *componentType;
@property (readonly, nonatomic) NSString *componentRole;
@property (readonly, nonatomic) NSDictionary *metaData;

- (id)initWithComponent:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
