@class NSString;
@protocol TRITaskAttributing;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask

@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) id<TRITaskAttributing> taskAttributing;

- (id)dimensions;
- (id)trialSystemTelemetry;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)metrics;
- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2;

@end
