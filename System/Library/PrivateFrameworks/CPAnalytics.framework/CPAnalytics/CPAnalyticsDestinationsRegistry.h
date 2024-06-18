@class NSArray, NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray *_destinations;
}

@property (readonly, nonatomic) NSArray *destinations;

- (id)init;
- (void)setupWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)removeDestination:(id)a0;
- (void)_parseDestinationsFromConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)removePhotoLibraryFromDestinations;
- (void)sendToAllDestinations:(id)a0;
- (id)_destinationClassMap;
- (void).cxx_destruct;
- (void)updateWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)_readConfiguration:(id)a0;
- (void)addDestination:(id)a0;

@end
