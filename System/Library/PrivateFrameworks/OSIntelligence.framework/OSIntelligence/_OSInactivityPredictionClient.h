@class NSString, NSXPCConnection;

@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fixModelOutput:(id)a0;
- (void)forceInactivityTwoStageModelWithHandler:(id /* block */)a0;
- (BOOL)overrideRecommendedWaitTimeTo:(double)a0;
- (id)init;
- (void)longInactivityPredictionResultAtDate:(id)a0 withOptions:(long long)a1 withHandler:(id /* block */)a2;
- (BOOL)hasEnoughInactivityHistory;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (void)backedUpDataWithHandler:(id /* block */)a0;
- (id)unfixModelOutput;
- (double)recommendedWaitTime;
- (id)deviceUsageDiagnosis;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)a0;
- (void)restoreInactivityModelWithHandler:(id /* block */)a0;
- (void)overrideRecommendedWaitTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)a0;
- (BOOL)restoreInactivityModel;
- (id)modelDescription;
- (BOOL)forceInactivityTwoStageModel;
- (id)inactivityHistoryDiagnosis;
- (void).cxx_destruct;
- (id)backedUpData;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (id)longInactivityPredictionResultAtDate:(id)a0 withOptions:(long long)a1 withError:(id *)a2;
- (id)longInactivityPredictionResultWithOptions:(long long)a0 withError:(id *)a1;
- (BOOL)restoreRecommendedWaitTime;
- (id)longInactivityPredictionResultAtDate:(id)a0 withError:(id *)a1;
- (void)longInactivityPredictionResultWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultWithOptions:(long long)a0 withHandler:(id /* block */)a1;
- (void)recommendedWaitTimeWithHandler:(id /* block */)a0;
- (id)longInactivityPredictionResultWithError:(id *)a0;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultAtDate:(id)a0 withHandler:(id /* block */)a1;

@end
