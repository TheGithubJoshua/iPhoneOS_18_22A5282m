@class NSString, GEOLogMsgState, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAnalyticsPipelineStateFactory : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOLogMsgState *_deviceIdentifierState;
    GEOLogMsgState *_deviceIdentifierInternalState;
    GEOLogMsgState *_applicationIdentifierState;
}

@property (retain) NSString *countryCode;

+ (id)sharedFactory;

- (id)mapsPlaceIds;
- (id)init;
- (id)impressionObject;
- (id)mapUIShown;
- (id)searchResults;
- (void)sessionStateForType:(int)a0 sessionAppId:(id)a1 onQueue:(id)a2 callback:(id /* block */)a3;
- (id)placeCardReveal;
- (void).cxx_destruct;
- (id)placeCardRap;
- (void)sessionStateForType:(int)a0 onQueue:(id)a1 callback:(id /* block */)a2;
- (int)_launchActionFromAPLaunchAction:(int)a0;
- (id)stateForType:(long long)a0;
- (int)_privacyAllowedActionFromActualAction:(int)a0;
- (int)_rapPlaceCardTypeForRawType:(int)a0;
- (id)_sessionStateForType:(int)a0;
- (int)logMsgStateTypeForType:(long long)a0;
- (void)deviceCountryChanged:(id)a0;
- (void)dealloc;
- (void)sessionStateForType:(int)a0 callback:(id /* block */)a1;
- (id)curatedCollectionRedacted;

@end
