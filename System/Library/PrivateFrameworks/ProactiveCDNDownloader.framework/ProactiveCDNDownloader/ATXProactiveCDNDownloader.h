@class NSString, NSArray, CLLocationManager, NSData, NSObject;
@protocol OS_dispatch_queue, ATXGEOTileDataReaderProtocol, ATXGEOTileLoaderProtocol;

@interface ATXProactiveCDNDownloader : NSObject <CLLocationManagerDelegate, ATXProactiveCDNDownloaderProtocol> {
    CLLocationManager *_locManager;
    NSObject<OS_dispatch_queue> *_clQueue;
    NSData *_previousItemHandle;
    NSArray *_previousPreciseHeroDatas;
}

@property (readonly, nonatomic) id<ATXGEOTileLoaderProtocol> tileLoader;
@property (readonly, nonatomic) id<ATXGEOTileDataReaderProtocol> tileDataReader;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithTileLoader:(id)a0 tileDataReader:(id)a1;
- (void)_heroDatasForLocation:(id)a0 completion:(id /* block */)a1;
- (id)sha256HashForText:(id)a0;
- (void).cxx_destruct;
- (void)highConfidenceHeroDatasForCurrentLocationWithCompletion:(id /* block */)a0;
- (void)heroDatasForLocation:(id)a0 completion:(id /* block */)a1;

@end
