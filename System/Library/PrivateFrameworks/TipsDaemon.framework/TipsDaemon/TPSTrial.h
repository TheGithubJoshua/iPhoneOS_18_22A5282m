@class TRIClient;
@protocol TPSTrialUpdateHandler;

@interface TPSTrial : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (weak, nonatomic) id<TPSTrialUpdateHandler> updateHandler;

- (id)trialExperimentID;
- (id)initWithUpdateHandler:(id)a0;
- (void).cxx_destruct;
- (id)trialRampID;
- (id)trialTreatmentID;
- (id)levelForFactor:(id)a0;
- (id)trialDeploymentID;

@end
