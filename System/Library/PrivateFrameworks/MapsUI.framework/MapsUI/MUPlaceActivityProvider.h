@class MKMapItem;
@protocol MUPlaceActivityProviderDelegate;

@interface MUPlaceActivityProvider : NSObject

@property (weak, nonatomic) id<MUPlaceActivityProviderDelegate> delegate;
@property (retain, nonatomic) MKMapItem *mapItem;

- (id)initWithMapItem:(id)a0;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityAnnotationView;
- (id)activityURL;
- (id)mapMetadataSpecialization;

@end
