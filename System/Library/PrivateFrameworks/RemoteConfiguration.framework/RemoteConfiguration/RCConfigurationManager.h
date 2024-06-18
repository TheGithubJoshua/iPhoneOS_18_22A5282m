@class RCConfigurationSettings, RCKeyValueStore, NSURL, RCAsyncSerialQueue, NSMutableDictionary, NSMutableArray, RCDeviceInfo, RCUnfairLock;

@interface RCConfigurationManager : NSObject

@property (retain, nonatomic) RCConfigurationSettings *configurationSettings;
@property (retain, nonatomic) RCDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSURL *contentDirectoryURL;
@property (retain, nonatomic) RCAsyncSerialQueue *configRequestSerialQueue;
@property (retain, nonatomic) RCKeyValueStore *localStore;
@property (retain, nonatomic) NSMutableDictionary *configResourceByRequestKey;
@property (retain, nonatomic) NSMutableArray *runningOperations;
@property (retain, nonatomic) RCUnfairLock *runningOperationsLock;
@property (copy, nonatomic) id /* block */ networkEventHandler;

- (BOOL)_areAllConfigurationResourcesInvalid:(id)a0 allowedToReachEndpoint:(BOOL)a1 useBackgroundRefreshRate:(BOOL)a2 requestKeys:(id)a3;
- (BOOL)_isAllowedToReachEndpointWithSettings:(id)a0 configurationResource:(id)a1 endpointURL:(id)a2;
- (BOOL)_isValidConfigurationResource:(id)a0 allowedToReachEndpoint:(BOOL)a1 useBackgroundRefreshRate:(BOOL)a2;
- (void)fetchMultiConfigurationWithSettings:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (id)_endpointURLForEnvironment:(unsigned long long)a0 requestKey:(id)a1;
- (void)fetchSingleConfigurationWithSettings:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)_removeConfigurationResourceForRequestKey:(id)a0;
- (id)_encodeConfigurationResource:(id)a0;
- (void).cxx_destruct;
- (void)fetchConfigurationWithSettings:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)_fetchMultiConfigurationFromEndpointURL:(id)a0 settings:(id)a1 changeTagsByRequestKey:(id)a2 completion:(id /* block */)a3;
- (void)_fetchConfigurationFromFallbackURLWithSettings:(id)a0 completion:(id /* block */)a1;
- (id)initWithContentDirectoryURL:(id)a0;
- (id)_decodeConfigurationResource:(id)a0;
- (void)_saveConfigurationResource:(id)a0;
- (BOOL)_areAllConfigurationResourcesAvailable:(id)a0 requestKeys:(id)a1;
- (void)_loadConfigurationResourcesFromStore;

@end
