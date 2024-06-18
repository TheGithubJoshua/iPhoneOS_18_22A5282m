@protocol HMDWidgetConfigurationReaderInterface;

@interface HMDWidgetConfigurationReader : NSObject

@property (readonly) id<HMDWidgetConfigurationReaderInterface> interface;

- (id)init;
- (id)initWithInterface:(id)a0;
- (void).cxx_destruct;
- (id)fetchedHomeWidgets;
- (long long)homeWidgetsEnabledCount;

@end
